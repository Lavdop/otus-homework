#include <iostream>

#include <cstdlib>
#include <ctime>
int rand(int max_value){
	std::srand(std::time(nullptr)); 
	const int random_value = std::rand() % max_value;
    return random_value;

    
}