#ifndef FISH_H
#define FISH_H

#include <iostream>

class Point;
class Population;

class Fish{
    private: 

    public: 
        int Fish_ID;
        Point* position;
        double speed;
        Population* pool;

        Fish(int Fish_ID, Point position, double speed, Population* pool);
        virtual ~Fish();

        virtual void swim();
        double getX() const;
        double getY() const;
        bool operator== (const Fish& f) const;

        friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};

#endif