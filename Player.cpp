#include "Player.h"

//Constructor
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

//calculates total yards
int Player::totalYards()
{
	 totalYrds = passYards + rushYards + recYards;
}

//Calculates average yards
double Player::averageYards()
{
	return totalYards() / 3;
}

//Sets pass yards
void Player::setpassYards(int pYards)
{
	passYards = pYards;
}

//Sets rec yards
void Player::setrecYards(int reYards)
{
	recYards = reYards;
}

//Sets rush yards
void Player::setrushYards(int ruYards)
{
	rushYards = ruYards;
}

//Sets pass tds
void Player::setpassTDS(int pTDS)
{
	passTDS = pTDS;
}

//Sets rec tds
void Player::setrecTDS(int reTDS)
{
	recTDS = reTDS;
}

//Sets rush tds
void Player::setrushTDS(int ruTDS)
{
	rushTDS = ruTDS;
}

//Gets pass yards
int Player::getpassYards()
{
	return passYards;
}

//Gets rec yards
int Player::getrecYards()
{
	return recYards;
}

//Gets rush yards
int Player::getrushYards()
{
	return rushYards;
}

//Gets pass tds
int Player::getpassTDS()
{
	return passTDS;
}

//Gets rec tds
int Player::getrecTDS()
{
	return recTDS;
}

//Gets rush tds
int Player::getrushTDS()
{
	return rushTDS;
}