#include "Drunken_Fish.h"
#include "stdlib.h"
#include "Point.h"
#include "Population.h"

Drunken_Fish::Drunken_Fish(int fish_ID, Point position, double speed, Population* pool)
:Fish(fish_ID, position, speed, pool){
    
}

Drunken_Fish::~Drunken_Fish(){
    //pool->remove(pool->get_index(this));
}

void Drunken_Fish::swim(){
    int choice = rand() % 4;
    if( choice == 0) position->set_x(position->get_x() + speed);
    else if(choice == 1) position->set_y(position->get_y() + speed);
    else if(choice == 2) position->set_x(position->get_x() - speed);
    else position->set_y(position->get_y() - speed);
}


