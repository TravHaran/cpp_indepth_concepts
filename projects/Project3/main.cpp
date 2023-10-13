#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "RightTriangle.h"

int main(){
    // Shape shape;
    Circle circle; 

    /*------------Shape------------*/
    // shape.setX(2);
    // shape.setY(5);
    // shape.setColor("black");
    // std::cout<<shape<<std::endl;
    // Shape shape1(5, 10, "blue");
    // std::cout<<shape1<<std::endl;
    // std::cout<<shape1.type()<<std::endl;

    /*------------Circle------------*/
    circle = Circle();
    std::cout<<circle<<std::endl;
    circle.setRadius(5);
    std::cout<< "Circle diameter is now: "<<circle.getDiameter()<<std::endl;
    std::cout<< "Circle area is now: "<<circle.getCircleArea()<<std::endl;
    Circle circle2(circle);
    std::cout<<circle2<<std::endl;
    std::cout<<circle.type()<<std::endl;

    /*------------Rectangle------------*/
    Rectangle rectangle(6, 1, "green", 4, 2);
    std::cout<<rectangle<<std::endl;
    std::cout<<"Changing rectangle height to 4"<<std::endl;
    rectangle.setHeight(4);
    std::cout<<rectangle<<std::endl;
    std::cout<<rectangle.type()<<std::endl;


    /*------------RightTriangle------------*/
    RightTriangle rightTriangle(12, 9, "red", 5.5, 3.6);
    RightTriangle rightTriangle2 = rightTriangle;
    rightTriangle2.setHeight(7.2);
    std::cout<<"triangle 1 area: "<<rightTriangle.getTriangleArea()<<std::endl;
    std::cout<<"triangle 2 area: "<<rightTriangle2.getTriangleArea()<<std::endl;
    rightTriangle.setHeight(5);
    rightTriangle.setBase(5);
    std::cout<<rightTriangle<<std::endl;
    std::cout<<rightTriangle.type()<<std::endl;
}
