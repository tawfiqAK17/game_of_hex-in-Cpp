#include "classes.h"


//implementation of the charPair class
CharPair::CharPair()
{
    this->first = ' ';
    this->second = ' ';
}

void CharPair::setFirst(char a)
{
    this->first = a;
}

void CharPair::setSecond(char a)
{
    this->second = a;
}

std::ostream &operator<<(std::ostream &os, CharPair const &pair)
{
    os << "(" << pair.first << ", " << pair.second << ")";
    return os;
}

//implementation of intPair class
IntPair::IntPair()
{
    this->first = 0;
    this->second = 0;
}

void IntPair::setFirst(int a)
{
    this->first = a;
}

void IntPair::setSecond(int b)
{
    this->second = b;
}

std::ostream &operator<<(std::ostream &os, IntPair const &pair)
{
    os << "(" << pair.first << ", " << pair.second << ")";
    return os;
}
