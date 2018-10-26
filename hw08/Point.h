#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point{
    private:
        double x;
        double y;
    public:
        Point(double x, double y);
        Point();
        virtual ~Point();

        double get_x() const;
        double get_y() const;
        void set_x(double x);
        void set_y(double y);

        friend std::ostream& operator<<(std::ostream& out, const Point& p);
};

#endif