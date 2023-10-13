#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include <iostream>
#include "Shape.h"

class RightTriangle : public Shape {
    public:
        RightTriangle();
        RightTriangle(int x, int y, std::string color, double base, double height);
        RightTriangle(const RightTriangle &obj);
        RightTriangle &operator=(const RightTriangle &obj);
        friend std::ostream &operator<<(std::ostream &outs, RightTriangle &obj);
        double getTriangleArea();
        double getBase();
        double getHeight();
        void setBase(double b);
        void setHeight(double h);
        double getHypotenuse();
        double getPerimeter();
        virtual double area(){return (_base*_height)/2;};
        virtual double perimeter(){return _base+_height+_hypotenuse;};
        virtual std::string type(){return "triangle";}

        template<class T>
        bool isBiggerShape(T shape){
            return this->area() < shape.area();
        }
    private:
        void _calculateTriangleArea();
        void _calculateHypotenuse();
        double _area;
        double _base;
        double _height;
        double _hypotenuse;
};
#endif
