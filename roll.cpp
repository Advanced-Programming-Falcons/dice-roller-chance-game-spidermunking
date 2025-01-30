#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include "roll.hpp"

using namespace std;

dice::dice(){

}
//function for random
int dice::roll(){ 
    srand(time(NULL));
    num = (rand()%6)+1;
    return num;
}
//getter
int dice::get(){
    return num;
}