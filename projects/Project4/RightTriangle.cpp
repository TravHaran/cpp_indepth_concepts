#include "RightTriangle.h"
#include <cmath>

RightTriangle::RightTriangle(){
    _base = 0;
    _height = 0;
    _area = 0;
}

RightTriangle::RightTriangle(int x, int y, std::string color, double base, double height){
    _x = x;
    _y = y;
    _color = color;
    _base = base;
    _height = height;
    _calculateTriangleArea();
    _calculateHypotenuse();
}

RightTriangle::RightTriangle(const RightTriangle &obj){
    _x = obj._x;
    _y = obj._y;
    _color = obj._color;
    _base = obj._base;
    _height = obj._height;
    _area = obj._area;
    _hypotenuse = obj._hypotenuse;
}

double RightTriangle::getTriangleArea(){
    _calculateTriangleArea();
    return _area;
}

double RightTriangle::getPerimeter(){
    return _base + _height + _hypotenuse;
}

double RightTriangle::getHypotenuse(){
    _calculateHypotenuse();
    return _hypotenuse;
}

double RightTriangle::getBase(){
    return _base;
}

double RightTriangle::getHeight(){
    return _height;
}

void RightTriangle::setBase(double b){
    _base = b;
    _calculateTriangleArea();
    _calculateHypotenuse();
}

void RightTriangle::setHeight(double h){
    _height = h;
    _calculateTriangleArea();
    _calculateHypotenuse();
}

void RightTriangle::_calculateTriangleArea(){
    _area = (_base * _height)/2;
}

void RightTriangle::_calculateHypotenuse(){
    _hypotenuse = sqrt(pow(_base, 2) + pow(_height, 2));
}

RightTriangle &RightTriangle::operator=(const RightTriangle &obj){
    _area = obj._area;
    _base = obj._base;
    _height = obj._height;
    _hypotenuse = obj._hypotenuse;
    return *this;
}

std::ostream &operator<<(std::ostream &outs, RightTriangle &obj){
    outs<<"RIGHT TRIANGLE INFO"<<std::endl;
    outs<<"x: "<<obj._x<<std::endl;
    outs<<"y: "<<obj._y<<std::endl;
    outs<<"color: "<<obj._color<<std::endl;
    outs<<"height: "<<obj._height<<std::endl;
    outs<<"width: "<<obj._base<<std::endl;
    outs<<"hypotenuse: "<<obj._hypotenuse<<std::endl;
    outs<<"perimeter: "<<obj.getPerimeter()<<std::endl;
    outs<<"area: "<<obj._area<<std::endl;
    outs<<std::endl;
    return outs;
}
