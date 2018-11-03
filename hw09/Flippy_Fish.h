#ifndef FLIPPY_FISH_H
#define FLIPPY_FISH_H

#include "Fish.h"

class Point;
class Angle;
class Population;

class Flippy_Fish : public Fish{
    private: 
        Angle* direction;
        Angle* turn_rate;
        //Population* pool;

    public: 
        Flippy_Fish(int Fish_ID, Point position, double speed, Population* pool, Angle direction, Angle turn_rate);
        virtual ~Flippy_Fish();

        void swim();
};

#endif