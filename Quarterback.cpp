#include "Quarterback.h"
#include <iostream>
using namespace std;

//Constructor
Quarterback::Quarterback(string &name) : Player(name)
{

}

//Displays stats for QBs
void Quarterback::displayStats() const
{
	cout << "Quarterback: " << name << endl << "Passing Yards: " << passYards << endl <<
	"Touchdowns: " << td << "Total Yards: " << totalYrds << endl
	<< "Average Yards: " << averageYards;
}
