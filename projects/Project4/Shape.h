#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <iostream>

class Shape {
    public:
        Shape();
        Shape(int x, int y, std::string color);
        Shape(const Shape &obj);
        Shape &operator=(const Shape &obj);
        friend std::ostream &operator<<(std::ostream &outs, Shape &obj);
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
        std::string getColor();
        void setColor(std::string color);
        virtual double area() = 0;//{return 0;};
        virtual std::string type() = 0;//{return "shape";}

    protected:
        std::string _color;
        int _x;
        int _y;
};
#endif
