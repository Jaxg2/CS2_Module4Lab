#include "RunningBack.h"
#include <iostream>
using namespace std;

RunningBack::RunningBack()
{

}

void RunningBack::displayStats() const
{
	cout << "Running Back: " << name << endl
	<< "Rushing Yards: " << rushYards << endl
	<< "Touchdowns: " << td << endl
	<< "Total Yards: " << totalYards << endl
	<< "Average Yards: " << averageYards;
}