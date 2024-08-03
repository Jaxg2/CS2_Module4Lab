#ifndef STATS_H
#define STATS_H
#include "Player.h"
#include <vector>
#include <iostream>
using namespace std;

class Stats
{
private:
	Player* players;
	int numPlayers;
public:
	Stats();
	~Stats();
	void addPlayer(Player* players);
	void inputStats();
	void displayAllStats() const;
	void sortTotal();
	void sortAvg();
};

#endif