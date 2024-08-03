#include "Player.h"
#include "Stats.h"
#include "Runningback.h"
#include "Quarterback.h"
#include "Receiver.h"
#include <iostream>

Stats::Stats() : numPlayers(0)
{

}


void Stats::addPlayer(Player* player)
{

}

void Stats::inputStats(Player* player)
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

			player = new Quarterback(name);
			player->setpassYards(pYards);
			player->setTD(td);
		}
		else if (position == "WR")
		{
			int reYards, td;
			cout << "Enter rushing yards: ";
			cin >> reYards;
			cout << "Enter total touchdowns: ";
			cin >> td;
			player = new Receiver(name);
			player->setrushYards(reYards);
			player->setTD(td);
		}
		else if (position == "RB")
		{
			int ruYards, td;
			cout << "Enter rushing yards: ";
			cin >> ruYards;
			cout << "Enter total touchdowns: ";
			cin >> td;
			
			player = new RunningBack(name);
			player.setrecYards(ruYards);
			player.setTD(td);
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


Stats::~Stats()
{
	for (int i = 0; i < numPlayers; i++)
	{
		delete& players[i];
	}
	delete[] players;
}