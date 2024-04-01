#pragma once
#include <iostream>

class charPair
{
public:
    char first;
    char second;
    charPair();
    void setFirst(char a);

    void setSecond(char a);

    friend std::ostream &operator<<(std::ostream &os, charPair const &pair);
};

class intPair
{
public:
    int first;
    int second;
    intPair();
    void setFirst(int a);
    
    void setSecond(int a);
    
    friend std::ostream &operator<<(std::ostream &os, intPair const &pair);
};

class move
{
private:
    intPair position;
    char player;
public:
    move(intPair position, char player);
   
    intPair getPosition();

    char getPlayer();
};

