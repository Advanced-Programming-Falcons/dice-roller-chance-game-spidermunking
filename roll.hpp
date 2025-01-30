#ifndef roll_HPP
#define roll_HPP
#include <cstdlib> 
#include <ctime> 
#include <iostream>

class dice{
    public:
    int num;
    dice();

    int roll();
    int get();   
};

#endif