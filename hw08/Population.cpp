#include "Population.h"
#include "Fish.h"
#include <iostream>

#define MAX 1000

Population::Population(){
    num_fishes = 0;
    fishes = new Fish*[MAX];
}

Population::~Population(){
    delete[] fishes;
}

void Population::add(Fish *f){
    fishes[num_fishes] = f;
    num_fishes++;
}

void Population::remove(int index){
    if(num_fishes>0){
        num_fishes--;
        for(int i = index; i<num_fishes; i++){
        fishes[i] = fishes [i+1];
        }  
    }
    else std::cout<<"Error: no fishes in population"<<std::endl;
}

int Population::size() const{
    return num_fishes;
}

Fish* Population::get_fish(int index) const{
    return fishes[index];
}

int Population::get_index(Fish* f) const{
    for(int i=0; i<num_fishes;i++){
        if(*fishes[i] == *f) return i;
    }
    return -1;
}





