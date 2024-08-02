#ifndef RECEIVER_H
#define RECEIVER_H
#include "Player.h"


class Receiver : public Player
{
public:
	Receiver();
	void displayStats() const;
};

#endif