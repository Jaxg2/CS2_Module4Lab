#include "Player.h"
#include "Stats.h"
#include "Runningback.h"
#include "Quarterback.h"
#include "Receiver.h"
#include <iostream>

//Constructor
Stats::Stats() : numPlayers(0)
{

}


void Stats::addPlayer(Player* players)
{

}

//Gets player name, position, and stats
void Stats::inputStats()
{

	int numPlayers;
	cout << "Enter the number of players: ";
	cin >> numPlayers;

	for (int i = 0; i < numPlayers; i++)
	{
		string name;
		string position;


		cout << "Enter Player's name: ";
		cin >> name;

		cout << "Enter player's position (QB,RB,WR): ";
		cin >> position;

		if (position == "QB")
		{
			int pYards, td;
			cout << "Enter passing yards: ";
			cin >> pYards;
			cout << "Enter total touchdowns: ";
			cin >> td;

			players = new Quarterback(name);
			players->setpassYards(pYards);
			players->setTD(td);
		}
		else if (position == "WR")
		{
			int reYards, td;
			cout << "Enter rushing yards: ";
			cin >> reYards;
			cout << "Enter total touchdowns: ";
			cin >> td;
			players = new Receiver(name);
			players->setrecYards(reYards);
			players->setTD(td);
		}
		else if (position == "RB")
		{
			int ruYards, td;
			cout << "Enter rushing yards: ";
			cin >> ruYards;
			cout << "Enter total touchdowns: ";
			cin >> td;
			
			players = new RunningBack(name);
			players.setrushYards(ruYards);
			players.setTD(td);
		}
	}
}

void Stats::displayAllStats() const
{

}

void Stats::sortTotal()
{

}

void Stats::sortAvg()
{

}

//Destructor
Stats::~Stats()
{
	for (int i = 0; i < numPlayers; i++)
	{
		delete& players[i];
	}
	delete[] players;
}