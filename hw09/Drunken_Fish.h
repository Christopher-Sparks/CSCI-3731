#ifndef DRUNKEN_FISH_H
#define DRUNKEN_FISH_H

#include "Fish.h"
class Population;

class Drunken_Fish: public Fish{
    private: 
        //Population* pool;

    public: 
        Drunken_Fish(int fish_ID, Point position, double speed, Population* pool);
        virtual ~Drunken_Fish();

        void swim();
};

#endif