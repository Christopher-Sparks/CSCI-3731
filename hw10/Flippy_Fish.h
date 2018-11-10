#ifndef FLIPPY_FISH_H
#define FLIPPY_FISH_H

#include "Fish.h"
#include "Angle.h"

class Point;

class Flippy_Fish : public Fish{
    private: 
        Angle<double>* direction;
        Angle<double>* turn_rate;

    public: 
        Flippy_Fish(int Fish_ID, Point position, double speed, Angle<double> direction, Angle<double> turn_rate);
        virtual ~Flippy_Fish();

        void swim();
};

#endif