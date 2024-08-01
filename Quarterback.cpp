#include "Quarterback.h"
#include <iostream>
using namespace std;

Quarterback::Quarterback(string &name) : Player(name)
{

}

void Quarterback::displayStats() const
{
	cout << "Quarterback: " << name << endl << "Passing Yards: " << passYards << endl << 
	"Passing Touchdowns: " << passTDS
}