#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle(){
    _width = 0;
    _height = 0;
    _area = 0;
}

Rectangle::Rectangle(const Rectangle &obj){
    _x = obj._x;
    _y = obj._y;
    _color = obj._color;
    _width = obj._width;
    _height = obj._height;
    _area = obj._area;
}

Rectangle::Rectangle(int x, int y, std::string color, double w, double h){
    _x = x;
    _y = y;
    _color = color;
    _width = w;
    _height = h;
    _calculateRectangleArea();
}

double Rectangle::getRectangleArea(){
    _calculateRectangleArea();
    return _area;
}

double Rectangle::getWidth(){
    return _width;
}

double Rectangle::getHeight(){
    return _height;
}

double Rectangle::getPerimeter(){
    return (2*_width) + (2*_height);
}

void Rectangle::setWidth(double w){
    _width = w;
    _calculateRectangleArea();
}
 void Rectangle::setHeight(double h){
    _height = h;
    _calculateRectangleArea();
}

void Rectangle::_calculateRectangleArea(){
    _area = _width * _height;
}

Rectangle &Rectangle::operator=(const Rectangle &obj){
    _area = obj._area;
    _width = obj._width;
    _height = obj._height;
    return *this;
}

std::ostream &operator<<(std::ostream &outs, Rectangle &obj){
    outs<<"RECTANGLE INFO"<<std::endl;
    outs<<"x: "<<obj._x<<std::endl;
    outs<<"y: "<<obj._y<<std::endl;
    outs<<"color: "<<obj._color<<std::endl;
    outs<<"height: "<<obj._height<<std::endl;
    outs<<"width: "<<obj._width<<std::endl;
    outs<<"perimeter: "<<obj.getPerimeter()<<std::endl;
    outs<<"area: "<<obj._area<<std::endl;
    outs<<std::endl;
    return outs;
}
