#include "Flippy_Fish.h"
#include "stdlib.h"
#include "Point.h"

Flippy_Fish::Flippy_Fish(int Fish_ID, Point position, double speed, Angle<double> direction, Angle<double> turn_rate)
: Fish(Fish_ID, position, speed){
    this->direction = new Angle<double>(direction);
    this->turn_rate = new Angle<double>(turn_rate);
}

Flippy_Fish::~Flippy_Fish(){
    delete direction;
    delete turn_rate;
}

void Flippy_Fish::swim(){
    int choice = rand() % 3;

    if( choice == 0) *direction -= *turn_rate;
    else if(choice == 2) *direction += *turn_rate;
   
    position->set_x(position->get_x()+(speed*direction->get_cos()));
    position->set_y(position->get_y()+(speed*direction->get_sin()));
}
