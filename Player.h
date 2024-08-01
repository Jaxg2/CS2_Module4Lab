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
	int passTDS;
	int recTDS;
	int rushTDS;
public:
	Player();
	Player(string& name);
	virtual void displayStats() = 0;
	virtual int totalYards() = 0;
	virtual double averageYards() = 0;
	void setpassYards(int pYards);
	void setrecYards(int reYards);
	void setrushYards(int ruYards);
	void setpassTDS(int pTDS);
	void setrecTDS(int reTDS);
	void setrushTDS(int ruTDS);
	int getpassYards();
	int getrecYards();
	int getrushYards();
	int getpassTDS();
	int getrecTDS();
	int getrushTDS();
};

#endif