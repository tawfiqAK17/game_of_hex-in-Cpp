#pragma once
#include <iostream>
#include <vector>

// a class that gana represents the input of the user
class CharPair
{
public:
    char first;
    char second;
    CharPair();
    void setFirst(char a);

    void setSecond(char a);

    friend std::ostream &operator<<(std::ostream &os, CharPair const &pair);
};

// a class that gana represents the input of the user as a pair of integers
class IntPair
{
public:
    int first;
    int second;
    IntPair();
    void setFirst(int a);
    
    void setSecond(int a);
    
    friend std::ostream &operator<<(std::ostream &os, IntPair const &pair);
};

