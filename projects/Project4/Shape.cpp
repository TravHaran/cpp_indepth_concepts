#include "Shape.h"

Shape::Shape(){
    _x = 0;
    _y = 0;
    _color = "";
}

Shape::Shape(int x, int y, std::string color){
    std::cout<<"we're in the parametrized shape constructor"<<std::endl;
    _x = x;
    _y = y;
    _color = color;
}

int Shape::getX(){
    return _x;
}

int Shape::getY(){
    return _y;
}

void Shape::setX(int x){
    _x = x;
}

void Shape::setY(int y){
    _y = y;
}

std::string Shape::getColor(){
    return _color;
}

void Shape::setColor(std::string color){
    _color = color;
}

Shape::Shape(const Shape &obj){
    _x = obj._x;
    _y = obj._y;
    _color = obj._color;
}

Shape &Shape::operator=(const Shape &obj){
    _x = obj._x;
    _y = obj._y;
    _color = obj._color;
    return *this;
}

std::ostream &operator<<(std::ostream &outs, Shape &obj){
    outs<<"SHAPE INFO"<<std::endl;
    outs<<"x: "<<obj._x<<std::endl;
    outs<<"y: "<<obj._y<<std::endl;
    outs<<"color: "<<obj._color<<std::endl;
    outs<<std::endl;
    return outs;
}
