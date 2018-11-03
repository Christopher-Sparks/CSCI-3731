#include "Point.h"

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}

Point::Point(){
}

Point::~Point(){
}

double Point::get_x() const{
    return x;
}

double Point::get_y() const{
    return y;
}

void Point::set_x(double x){
    this->x = x;
}

void Point::set_y(double y){
    this->y = y;
}

std::ostream& operator<<(std::ostream& out, const Point& p){
  out << p.x << ", "<<p.y;
  return out;
}