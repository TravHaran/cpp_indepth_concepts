#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <iostream>
#include <cmath>

class Circle : public Shape {
    public:
        Circle();
        Circle(int x, int y, std::string color, double radius);
        Circle(const Circle &obj);
        Circle &operator=(const Circle &obj);
        friend std::ostream &operator<<(std::ostream &outs, Circle &obj);
        double getCircleArea();
        double getDiameter();
        double getCircumference();
        double getRadius();
        void setRadius(double r);
        virtual double area(){return pow(M_PI*_radius, 2);};
        virtual std::string type(){return "circle";}

        template<class T>
        bool isBiggerShape(T shape){
            return this->area() < shape.area();
        }
    private: 
        void _calculateCircleArea();
        double _area;
        double _diameter;
        double _radius;
};
#endif
