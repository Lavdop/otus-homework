#include <iostream>

int game(int n){
    int k,count =0;
    std::cout<<"Enter your guess:"<<std::endl;

    while(true){
        std::cin >> k;    
        count+=1;
        if(k < n){
            std::cout<<"greater then "<<k<<std::endl;
        }else if (k > n){
            std::cout<<"less then "<<k<<std::endl;
        }else{
            std::cout<<"You win!"<<std::endl;
            return count;
            
            }
    }
};