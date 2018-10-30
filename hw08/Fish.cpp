#include "Fish.h"
#include "stdlib.h"
#include "Point.h"
#include "Angle.h"
#include "Population.h"

Fish::Fish(int fish_id, Point position, double speed, Angle direction, Angle turn_rate, Population* pool){
    this->fish_id = fish_id;
    this->position = new Point(position);
    this->speed = speed;
    this->direction = new Angle(direction);
    this->turn_rate = new Angle(turn_rate);
    this->pool = pool;
    pool->add(this);
}

Fish::~Fish(){
    pool->remove(pool->get_index(this));
    delete position;
    delete direction;
    delete turn_rate;
}

void Fish::swim(){
    int choice = rand() % 3;

    if( choice == 0) *direction -= *turn_rate;
    else if(choice == 2) *direction += *turn_rate;
   
    position->set_x(position->get_x()+(speed*direction->get_cos()));
    position->set_y(position->get_y()+(speed*direction->get_sin()));
}

double Fish::getX() const{
    return position->get_x();
}

double Fish::getY() const{
    return position->get_y();
}

bool Fish::operator== (const Fish& f) const{
  bool val;
  if(fish_id == f.fish_id) val = true;
  else val = false;
  return val;
}

std::ostream& operator<<(std::ostream& out, const Fish& f){
  out<<"Fish #"<<f.fish_id<<" ("<<*(f.position)<<")";
  //Speed("<<f.speed<<"), Direction("<<f.direction<<"), Turn_Rate("<<f.turn_rate<<")>";
  return out;
}
