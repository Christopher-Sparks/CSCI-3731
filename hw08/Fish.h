#ifndef FISH_H
#define FISH_H

#include <iostream>

class Point;
class Angle;
class Population;

class Fish{
    private: 
        int fish_id;
        Point* position;
        double speed;
        Angle* direction;
        Angle* turn_rate;
        Population* pool;

    public: 
        Fish(int fish_id, Point position, double speed, Angle direction, Angle turn_rate, Population* pool);
        virtual ~Fish();

        void swim();
        double getX() const;
        double getY() const;
        bool operator== (const Fish& f) const;

        friend std::ostream& operator<<(std::ostream& out, const Fish& f);
};

#endif