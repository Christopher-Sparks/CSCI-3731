#include <stdio.h>
#include <iostream>
#include "Angle.h"

int main(){

  /* Declaring Angle objects*/
  Angle angle1 (40);
  Angle angle2 (70);
  Angle angle3 (300);
  Angle angle4 (321);
  Angle& a1 = angle1;
  Angle& a2 = angle2;
  Angle& a3 = angle3;
  Angle& a4 = angle4;

  /* Testing + operator //////////////////////////////////////////////////////*/
  std::cout<<"\nTesting + operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  Angle t1 = a1 + a2;
  Angle t2 = a3 + a2;
  Angle t3 = a1 + a2 + a3;

  std::cout<<"\tx = a1 + a2"<<std::endl;
  std::cout<<"\tx = "<<t1<<"\n"<<std::endl;

  std::cout<<"\ty = a3 + a2"<<std::endl;
  std::cout<<"\ty = "<<t2<<"\n"<<std::endl;

  std::cout<<"\tz = a1 + a2 + a3"<<std::endl;
  std::cout<<"\tz = "<<t3<<"\n"<<std::endl;


  /* Testing - operator //////////////////////////////////////////////////////*/
  std::cout<<"\nTesting - operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  Angle t4 = a1 - a2;
  Angle t5 = a2 - a1;
  Angle t6 = a2 - a3;

  std::cout<<"\tx = a1 - a2"<<std::endl;
  std::cout<<"\tx = "<<t4<<"\n"<<std::endl;

  std::cout<<"\ty = a2 - a1"<<std::endl;
  std::cout<<"\ty = "<<t5<<"\n"<<std::endl;

  std::cout<<"\tz = a2 - a3"<<std::endl;
  std::cout<<"\tz = "<<t6<<"\n"<<std::endl;


  /* Testing * operator //////////////////////////////////////////////////////*/
  std::cout<<"\nTesting * operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  Angle t7 = a1 * 4;
  Angle t8 = a3 * 2;

  std::cout<<"\tx = a1 * 4.0"<<std::endl;
  std::cout<<"\tx = "<<t7<<"\n"<<std::endl;

  std::cout<<"\ty = a3 * 2.0"<<std::endl;
  std::cout<<"\ty = "<<t8<<"\n"<<std::endl;


  /* Testing / operator //////////////////////////////////////////////////////*/
  std::cout<<"\nTesting / operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  Angle t9 = a2 / 2;
  Angle t10 = a1 / 0.5;

  std::cout<<"\tx = a2 / 2.0"<<std::endl;
  std::cout<<"\tx = "<<t9<<"\n"<<std::endl;

  std::cout<<"\ty = a1 / 0.5"<<std::endl;
  std::cout<<"\ty = "<<t10<<"\n"<<std::endl;


  /* Testing += operator /////////////////////////////////////////////////////*/
  std::cout<<"\nTesting += operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  a1 += a2;
  a3 += a2;

  std::cout<<"\ta1 += a2"<<std::endl;
  std::cout<<"\ta1 = "<<a1<<"\n"<<std::endl;

  std::cout<<"\ta3 += a2"<<std::endl;
  std::cout<<"\ta3 = "<<a3<<"\n"<<std::endl;

  /* Set to original values */
  a1=40; a2=70; a3=300;


  /* Testing -= operator /////////////////////////////////////////////////////*/
  std::cout<<"\nTesting -= operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  a1 -= a2;
  a3 -= a2;

  std::cout<<"\ta1 -= a2"<<std::endl;
  std::cout<<"\ta1 = "<<a1<<"\n"<<std::endl;

  std::cout<<"\ta3 -= a2"<<std::endl;
  std::cout<<"\ta3 = "<<a3<<"\n"<<std::endl;

  /* Set to original values */
  a1=40; a2=70; a3=300;


  /* Testing *= operator /////////////////////////////////////////////////////*/
  std::cout<<"\nTesting *= operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  a1 *= 4;
  a3 *= 3;

  std::cout<<"\ta1 *= 4.0"<<std::endl;
  std::cout<<"\ta1 = "<<a1<<"\n"<<std::endl;

  std::cout<<"\ta3 *= 3.0"<<std::endl;
  std::cout<<"\ta3 = "<<a3<<"\n"<<std::endl;

  /* Set to original values */
  a1=40; a2=70; a3=300;


  /* Testing /= operator /////////////////////////////////////////////////////*/
  std::cout<<"\nTesting /= operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  a1 /= 2;
  a3 /= 10;

  std::cout<<"\ta1 /= 2.0"<<std::endl;
  std::cout<<"\ta1 = "<<a1<<"\n"<<std::endl;

  std::cout<<"\ta3 /= 10.0"<<std::endl;
  std::cout<<"\ta3 = "<<a1<<"\n"<<std::endl;

  /* Set to original values */
  a1=40; a2=70; a3=300;


  /* Testing = operator //////////////////////////////////////////////////////*/
  std::cout<<"\nTesting = operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  a4 = a1;
  a3 = 30.0;

  std::cout<<"\ta4 = a1"<<std::endl;
  std::cout<<"\ta4 = "<<a4<<"\n"<<std::endl;

  std::cout<<"\ta3 = 30.0 (double)"<<std::endl;
  std::cout<<"\ta3 = "<<a3<<"\n"<<std::endl;


  /* Testing == operator /////////////////////////////////////////////////////*/
  std::cout<<"\nTesting == operator"<<std::endl;
  std::cout<<"a1 = "<<a1<<", "<<"a2 = "<<a2<<", "<<"a3 = "<<a3<<", "<<"a4 = "<<a4<<"\n"<<std::endl;

  bool b1 = (a1 == a4);
  bool b2 = (a1 == a2);

  std::cout<<"\tx = (a1 == a4)"<<std::endl;
  std::cout<<"\tx = "<<b1<<"\n"<<std::endl;

  std::cout<<"\tx = (a1 == a2)"<<std::endl;
  std::cout<<"\ty = "<<b2<<"\n"<<std::endl;

  return 0;
}
