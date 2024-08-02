#include "Player.h"

//Constructor
Player::Player()
{
	passYards = 0;
	recYards = 0;
	rushYards = 0;
	td = 0;
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

void Player::setTD()
{
	td = 0;
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

int Player::getTD()
{
	return td;
}