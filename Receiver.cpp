#include "Receiver.h"
#include <iostream>
using namespace std;

Receiver::Receiver()
{

}

void Receiver::displayStats() const
{
	cout << "Receiver: " << name << endl <<
		"Receiving Yards: " << recYards << endl
		<< "Touchdowns: " << td << endl
		<< "Total Yards: " << totalRec << endl
		<< "Average Yards: " << averageYards << endl;
}