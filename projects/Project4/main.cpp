/**
 * PROJECT4:
 * building onto project 3..
 * add a "Perimeter" member function to each derived shape class
 * for Circle it will be Circumference
 * The program should let the user continuously enter shapes with 
 * shape info until they type "quit".
 * Prompt the user to enter the necessary information about each 
 * shape, make a shape object with that information, and then add 
 * the shape to the correct shape list.
 * Once the user types quit, your program should cycle through each
 * shape list and print out each shape's color/area/perimeter and 
 * then should state the largest of that type of shape before
 * moving on to the next list.
 * Finally, the program should display the biggest of the 3 different
 * types of shapes.
*/

#include "Circle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "ShapeList.h"

void lower(std::string &name){
    for(char &i:name){
        i = tolower(i);
    }
}

int main(){
    ShapeList<Circle> slc;
    ShapeList<Rectangle> slr;
    ShapeList<RightTriangle> slt;
    std::string shapeColor;
    std::string shapeType;
    std::cout<<"Welcome to the shape program"<<std::endl;
    std::cout<<"Please enter 'quit' for the shape/color when you wish to exit"<<std::endl;
    do {
        std::cout<<"Enter Shape Color: "<<std::endl;
        std::cin>>shapeColor;
        if (shapeColor=="quit"){
            break;
        }

        std::cout<<"Please enter one of the following: Circle/Rectangle/Triangle"<<std::endl;
        std::cout<<"Enter Shape Type: "<<std::endl;
        std::cin>>shapeType;
        lower(shapeType);

        if(shapeType=="circle"){
            double r;
            Circle c = Circle();
            c.setColor(shapeColor);
            std::cout<<"Enter radius of circle: "<<std::endl;
            std::cin>>r;
            c.setRadius(r);
            slc.addShape(c);  
        } else if (shapeType=="rectangle"){
            double w;
            double h;
            Rectangle r = Rectangle();
            r.setColor(shapeColor);
            std::cout<<"Enter width of rectangle: "<<std::endl;
            std::cin>>w;
            r.setWidth(w);
            std::cout<<"Enter height of rectangle: "<<std::endl;
            std::cin>>h;
            r.setHeight(h);
            slr.addShape(r);
        } else if (shapeType=="triangle"){
            double b;
            double h;
            RightTriangle t = RightTriangle();
            t.setColor(shapeColor);
            std::cout<<"Enter base of triangle: "<<std::endl;
            std::cin>>b;
            t.setBase(b);
            std::cout<<"Enter height of triangle: "<<std::endl;
            std::cin>>h;
            t.setHeight(h);
            slt.addShape(t);
        } else {
            std::cout<<"Invalid Shape Type.."<<std::endl;
        }
    } while (shapeColor != "quit");

    Circle maxCircle = slc.getLargestShape();
    Rectangle maxRectangle = slr.getLargestShape();
    RightTriangle maxTriangle = slt.getLargestShape();

    std::cout<<std::endl;
    std::cout<<"CIRCLE INFO:"<<std::endl;
    slc.printList();
    std::cout<<"LARGEST CIRCLE HAS AREA: "<<maxCircle.area()<<std::endl;

    std::cout<<std::endl;
    std::cout<<"RECTANGLE INFO:"<<std::endl;
    slr.printList();
    std::cout<<"LARGEST RECTANGLE HAS AREA: "<<maxRectangle.area()<<std::endl;

    std::cout<<std::endl;
    std::cout<<"TRIANGLE INFO:"<<std::endl;
    slt.printList();
    std::cout<<"LARGEST TRIANGLE HAS AREA: "<<maxTriangle.area()<<std::endl; 
    std::cout<<std::endl;
    std::cout<<std::endl;

    std::vector<Shape*> maxShapeList;
    maxShapeList.push_back(new Circle(maxCircle));
    maxShapeList.push_back(new Rectangle(maxRectangle));
    maxShapeList.push_back(new RightTriangle(maxTriangle));
    int largestIdx = 0;
    for(int i = 0; i < maxShapeList.size(); i++){
        if(maxShapeList[i]->area() > maxShapeList[largestIdx]->area()){
            largestIdx = i;
        }
    }
    auto maxShape = maxShapeList[largestIdx];
    std::cout<<maxShape->type()<<" with area "<<maxShape->area()<<" is the largest of all shapes!"<<std::endl;
}