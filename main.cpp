#include <iostream>
#include <string>

#include "game.h"
#include "random.h"
#include "high_score.h"

int main (int argc, char** argv){
    int r,count;
    std::string name;
	const std::string high_scores_filename = "high_scores.txt";
    int max_value=100;
    if (argc >= 2){       
    	std::string arg1_value{ argv[1] };
        if(arg1_value=="-max"){
            max_value = std::stoi(argv[2]);
        }
        if(arg1_value=="-table"){
                score(high_scores_filename);
                return 0;
        }
    }


    r = rand(max_value);
    std::cout<<"Hi! Enter your name, please:"<<std::endl;
    std::cin>>name;

    count = game(r);
    score(name,count,high_scores_filename);

}