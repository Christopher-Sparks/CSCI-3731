#include "Fish.h"
#include "stdlib.h"
#include "Point.h"
#include "Population.h"

Fish::Fish(int Fish_ID, Point position, double speed, Population* pool){
    this->Fish_ID = Fish_ID;
    this->position = new Point(position);
    this->speed = speed;
    this->pool = pool;
    pool->add(this);
}

Fish::~Fish(){
    std::cout<<"\t\t\t\t\tFish #"<<Fish_ID<<" DIED"<<std::endl;
    pool->remove(pool->get_index(this));
    delete position;
}

void Fish::swim(){
    std::cout<<"Swim~"<<std::endl;
}

double Fish::getX() const{
    return position->get_x();
}

double Fish::getY() const{
    return position->get_y();
}

bool Fish::operator== (const Fish& f) const{
  bool val;
  if(Fish_ID == f.Fish_ID) val = true;
  else val = false;
  return val;
}

std::ostream& operator<<(std::ostream& out, const Fish& f){
  out<<"Fish #"<<f.Fish_ID<<" ("<<*(f.position)<<")";
  return out;
}
