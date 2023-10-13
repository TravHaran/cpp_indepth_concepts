#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "ShapeList.h"

int main(){
    //Shape *s = new Shape(40, 40, "blue");
    auto *r = new Rectangle(50, 50, "red", 100, 11);
    auto *t = new RightTriangle(100, 100, "yellow", 4, 7);
    auto *c = new Circle(200, 200, "green", 5.3);

    // std::cout<<s->getColor()<<" "<<s->type()<<" with area: "<<
    // s->area()<<std::endl;
    if(c->isBiggerShape(*r)){
        std::cout<<r->getColor()<<" "<<r->type()<<" with area: "<<
        r->area()<<" is bigger than the "<<c->type()<<std::endl;
    }

    if(r->isBiggerShape(*t)){
        std::cout<<t->getColor()<<" "<<t->type()<<" with area: "<<
        t->area()<<" is bigger than the "<<r->type()<<std::endl;
    }

    if(t->isBiggerShape(*c)){
        std::cout<<c->getColor()<<" "<<c->type()<<" with area: "<<
        c->area()<<" is bigger than the "<<t->type()<<std::endl;
    }

    Circle c2(100, 100, "blue", 2.2);
    Circle c3(100, 400, "black", 4.4);

    Rectangle r1(340, 340, "purple", 100.7, 250.9);
    Rectangle r2(340, 241, "purple", 100.7, 11.3);
    Rectangle r3(222, 340, "purple", 900, 1111);

    ShapeList<Circle> slc;
    ShapeList<Rectangle> slr;

    slc.addShape(*c);
    slc.addShape(c2);
    slc.addShape(c3);

    slc.printList();
    std::cout<<slc.getLargestShape().area()<<std::endl;

    slr.addShape(*r);
    slr.addShape(r1);
    slr.addShape(r2);
    slr.addShape(r3);
    slr.printList();
    std::cout<<slr.getLargestShape().area()<<std::endl;

}