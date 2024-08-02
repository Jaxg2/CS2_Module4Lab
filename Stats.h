#ifndef STATS_H
#define STATS_H
#include "Player.h"
#include <vector>
#include <iostream>
using namespace std;

class Stats
{
private:
	vector <Player> players;

public:
	void addPlayer();
	void inputStats();
	void displayAllStats();
	void sortTotal();
	void sortAvg();
};

#endif