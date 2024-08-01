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
	"Passing Touchdowns: " << passTDS << "Rushing Yards: " << rushYards << "Rushing Touchdowns: " << endl 
	<< "Total Yards: " << totalYrds << endl
	<< "Average Yards: " << averageYards;
}