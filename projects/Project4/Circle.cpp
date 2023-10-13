#include "Circle.h"
#include <cmath>

Circle::Circle(){
    _radius = 0;
    _diameter = 0;
    _area = 0;

}

Circle::Circle(const Circle &obj){
    _x = obj._x;
    _y = obj._y;
    _color = obj._color;
    _radius = obj._radius;
    _diameter = obj._diameter;
    _area = obj._area;
}

Circle::Circle(int x, int y, std::string color, double radius){
    _x = x;
    _y = y;
    _color = color;
    _radius = radius;
    _diameter = _radius * 2;
    _calculateCircleArea();
}

void Circle::_calculateCircleArea(){
    _area = M_PI*pow(_radius, 2);
}

double Circle::getCircleArea(){
    _calculateCircleArea();
    return _area;
}

double Circle::getDiameter(){
    return _diameter;
}

double Circle::getCircumference(){
    return 2*M_PI*_radius;
}

double Circle::getRadius(){
    return _radius;
}

void Circle::setRadius(double r){
    _radius = r;
    _diameter = r*2;
    _calculateCircleArea();
}

Circle &Circle::operator=(const Circle &obj){
    _area = obj._area;
    _radius = obj._radius;
    _diameter = obj._diameter;
    return *this;
}

std::ostream &operator<<(std::ostream &outs, Circle &obj){
    outs<<"CIRCLE INFO"<<std::endl;
    outs<<"x: "<<obj._x<<std::endl;
    outs<<"y: "<<obj._y<<std::endl;
    outs<<"color: "<<obj._color<<std::endl;
    outs<<"diameter: "<<obj._diameter<<std::endl;
    outs<<"radius: "<<obj._radius<<std::endl;
    outs<<"circumference: "<<obj.getCircumference()<<std::endl;
    outs<<"area: "<<obj._area<<std::endl;
    outs<<std::endl;
    return outs;
}
