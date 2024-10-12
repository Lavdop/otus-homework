#include <iostream>
#include <string>

#include "game.h"
#include "random.h"
#include "high_score.h"

int main (int argc, char** argv){
    int r,count;
    std::string name;
    const int max_value=100;
    r = rand(max_value);
    std::cout<<"Hi! Enter your name, please:"<<std::endl;
    std::cin>>name;

    count = game(r);
    score(name,count);


}