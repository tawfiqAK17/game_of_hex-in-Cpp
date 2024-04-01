#include "classes.h"


//implementation of the charPair class
charPair::charPair()
{
    this->first = ' ';
    this->second = ' ';
}

void charPair::setFirst(char a)
{
    this->first = a;
}


void charPair::setSecond(char a)
{
    this->second = a;
}

std::ostream &operator<<(std::ostream &os, charPair const &pair)
{
    os << "(" << pair.first << ", " << pair.second << ")";
    return os;
}

//implementation of intPair class
intPair::intPair()
{
    this->first = 0;
    this->second = 0;
}

void intPair::setFirst(int a)
{
    this->first = a;
}

void intPair::setSecond(int b)
{
    this->second = b;
}

std::ostream &operator<<(std::ostream &os, intPair const &pair)
{
    os << "(" << pair.first << ", " << pair.second << ")";
    return os;
}

//implementation of move class
move::move(intPair position, char player):position(position), player(player){}

intPair move::getPosition()
{
    return this->position;
}

char move::getPlayer()
{
    return this->player;
}

