#ifndef QUARTERBACK_H
#define QUARTERBACK_H

#include "Player.h"

class Quarterback : public Player
{
public:
	Quarterback(string& name);
	void displayStats() const;

};

#endif