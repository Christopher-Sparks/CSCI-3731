#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>

class Angle{

private:
  double a;

  mutable double val_sin;
  mutable double val_cos;
  mutable bool have_sin;
  mutable bool have_cos;
  

public:
  Angle(double a);
  Angle();
  virtual ~Angle();

  double get_a() const;
  void set_a(double a);

  double get_sin() const;
  double get_cos() const;

  Angle operator+ (const Angle& x) const;
  Angle operator- (const Angle& x) const;
  Angle operator* (const double x) const;
  Angle operator/ (const double x) const;

  const Angle& operator+= (const Angle& x);
  const Angle& operator-= (const Angle& x);
  const Angle& operator*= (const double x);
  const Angle& operator/= (const double x);

  const Angle& operator= (const Angle& x);
  const Angle& operator= (const double x);
  bool operator== (const Angle& x) const;

  friend std::ostream& operator<<(std::ostream& out, const Angle& x);
};

#endif
