#include "Player.h"


Player::Player()
{
	passYards = 0;
	recYards = 0;
	rushYards = 0;
	passTDS = 0;
	recTDS = 0;
	rushTDS = 0;
}

Player::Player(string& name)
{

}

void Player::displayStats()
{

}

int Player::totalYards()
{

}

double Player::averageYards()
{

}

void Player::setpassYards(int pYards)
{
	passYards = pYards;
}

void Player::setrecYards(int reYards)
{
	recYards = reYards;
}

void Player::setrushYards(int ruYards)
{
	rushYards = ruYards;
}

void Player::setpassTDS(int pTDS)
{
	passTDS = pTDS;
}

void Player::setrecTDS(int reTDS)
{
	recTDS = reTDS;
}

void Player::setrushTDS(int ruTDS)
{
	rushTDS = ruTDS;
}

int Player::getpassYards()
{
	return passYards;
}

int Player::getrecYards()
{
	return recYards;
}

int Player::getrushYards()
{
	return rushYards;
}

int Player::getpassTDS()
{
	return passTDS;
}

int Player::getrecTDS()
{
	return recTDS;
}

int Player::getrushTDS()
{
	return rushTDS;
}