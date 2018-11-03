#include "Angle.h"
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

/* Constructor */
Angle::Angle(double a){
  a = a - int(a/360)*360.0; // modulus 360
  if(a<0) a += 360; // if negative, get complement
  this->a = a;

  have_sin = false;
  have_cos = false;
}

/* No arg constructor */
Angle::Angle(){}

/* Destructor */
Angle::~Angle(){
}

double Angle::get_a() const{
  return a;
}

void Angle::set_a(double a){
  a = a - int(a/360)*360.0; // modulus 360
  if(a<0) a += 360.0; // if negative, get complement
  this->a = a;
  have_sin = false;
  have_cos = false;
}

double Angle::get_sin() const{
  if(!have_sin){
    val_sin = sin(a*PI/180.0);
    have_sin = true;
  }
    return val_sin;
}

double Angle::get_cos() const{
  if(!have_cos){
    val_cos = cos(a*PI/180.0);
    have_cos = true;
  }
    return val_cos;
}

Angle Angle::operator+ (const Angle& x) const{
  Angle val;
  val.set_a(a + x.a);
  return val;
}

Angle Angle::operator- (const Angle& x) const{
  Angle val;
  val.set_a(a - x.a);
  return val;
}

Angle Angle::operator* (const double x) const{
  Angle val;
  val.set_a(a * x);
  return val;
}

Angle Angle::operator/ (const double x) const{
  Angle val;
  val.set_a(a / x);
  return val;
}

const Angle& Angle::operator+= (const Angle& x){
  this->set_a(a + x.a);
  return *this;
}

const Angle& Angle::operator-= (const Angle& x){
  this->set_a(a -x.a);
  return *this;
}

const Angle& Angle::operator*= (const double x){
  this->set_a(a * x);
  return *this;
}

const Angle& Angle::operator/= (const double x){
  this->set_a(a /x);
  return *this;
}

const Angle& Angle::operator= (const Angle& x){
  this->set_a(x.a);
  return *this;
}

const Angle& Angle::operator= (const double x){
  this->set_a(x);
  return *this;
}

bool Angle::operator== (const Angle& x) const{
  bool val;
  if(a == x.a) val = true;
  else val = false;
  return val;
}

std::ostream& operator<<(std::ostream& out, const Angle& x){
  out << x.a << "º";
  return out;
}



