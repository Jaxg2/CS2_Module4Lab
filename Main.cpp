//Jaxon

#include "Stats.h"
#include "Quarterback.h"
#include "Player.h"
#include "Receiver.h"
#include "RunningBack.h"
#include <iostream>
using namespace std;

int main()
{

	Stats stats;
	Quarterback quarterback;

	stats.inputStats();

	Quarterback.displayStats();
	RunningBack.displayStats();
	Receiver.displayStats();

}