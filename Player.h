#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player
{
protected:
	string name;
	int passYards;
	int recYards;
	int rushYards;
	int td;
	double totalYrds;
	double totalPass;
	double totalRush;
	double totalRec;
public:
	Player();
	Player(string& name);
	virtual void displayStats() = 0;
	virtual int totalYards() = 0;
	virtual double averageYards() = 0;
	void setpassYards(int pYards);
	void setrecYards(int reYards);
	void setrushYards(int ruYards);
	void setTD();
	int getpassYards();
	int getrecYards();
	int getrushYards();
	int getTD();
};

#endif