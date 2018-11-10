#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

template<class T> class Angle{

private:
  T a;

  mutable T val_sin;
  mutable T val_cos;
  mutable bool have_sin;
  mutable bool have_cos;

public:

  Angle(T a){
    a = a - int(a/360)*360.0; // modulus 360
    if(a<0) a += 360; // if negative, get complement
    this->a = a;

    have_sin = false;
    have_cos = false;
  }

  Angle(){
  }

  virtual ~Angle(){
  }

  T get_a() const{
    return a;
  }

  void set_a(T a){
    a = a - int(a/360)*360.0; // modulus 360
    if(a<0) a += 360.0; // if negative, get complement
    this->a = a;
    have_sin = false;
    have_cos = false;
  }

  double get_sin() const{
    if(!have_sin){
      val_sin = sin(a*PI/180.0);
      have_sin = true;
    }
    return val_sin;
  }

  double get_cos() const{
    if(!have_cos){
      val_cos = cos(a*PI/180.0);
      have_cos = true;
    }
    return val_cos;
  }

  Angle operator+ (const Angle& x) const{
    Angle val;
    val.set_a(a + x.a);
    return val;
  }

  Angle operator- (const Angle& x) const{
    Angle val;
    val.set_a(a - x.a);
    return val;
  }

  Angle operator* (const double x) const{
    Angle val;
    val.set_a(a * x);
    return val;
  }

  Angle operator/ (const double x) const{
    Angle val;
    val.set_a(a / x);
    return val;
  }

  const Angle& operator+= (const Angle& x){
    this->set_a(a + x.a);
    return *this;
  }

  const Angle& operator-= (const Angle& x){
    this->set_a(a -x.a);
    return *this;
  }

  const Angle& operator*= (const double x){
    this->set_a(a * x);
    return *this;
  }

  const Angle& operator/= (const double x){
    this->set_a(a /x);
    return *this;
  }

  const Angle& operator= (const Angle& x){
    this->set_a(x.a);
    return *this;
  }

  const Angle& operator= (const double x){
    this->set_a(x);
    return *this;
  }

  bool operator== (const Angle& x) const{
    bool val;
    if(a == x.a) val = true;
    else val = false;
    return val;
  }

  friend std::ostream& operator<<(std::ostream& out, const Angle& x){
    out << x.a << "º";
    return out;
  }
};

#endif
