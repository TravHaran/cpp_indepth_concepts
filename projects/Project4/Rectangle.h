#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
    public:
        Rectangle();
        Rectangle(int x, int y, std::string color, double w, double h);
        Rectangle(const Rectangle &obj);
        Rectangle &operator=(const Rectangle &obj);
        friend std::ostream &operator<<(std::ostream &outs, Rectangle &obj);
        double getRectangleArea();
        double getWidth();
        double getHeight();
        void setWidth(double w);
        void setHeight(double h);
        double getPerimeter();
        virtual double area(){return _width*_height;};
        virtual double perimeter(){return (2*_width) + (2*_height);};
        virtual std::string type(){return "rectangle";}

        template<class T>
        bool isBiggerShape(T shape){
            return this->area() < shape.area();
        }
    private:
        void _calculateRectangleArea();
        double _area;
        double _width;
        double _height;

};
#endif
