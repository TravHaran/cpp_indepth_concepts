#include "Car.h"

Car::Car(){
    std::cout<<"Inside the Car Constructor"<<std::endl;
    _fuel = 0;
    _paintColor = "white";
    _mileage = 0;
}

int Car::showFuel(){
    return _fuel;
}

void Car::setPaint(std::string color){
    _paintColor = color;
}

void Car::setFuel(int fuel){
    _fuel = fuel;
}

std::string Car::getPaint(){
    return _paintColor;
}

float Car::getOdometer(){
    return _mileage;
}

std::ostream &operator<<(std::ostream &outs, const Car &obj){
    outs<<"CAR INFO:"<<std::endl;
    outs<<"Fuel: "<<obj._fuel<<std::endl;
    outs<<"Odometer: "<<obj._mileage<<std::endl;
    outs<<"Color: "<<obj._paintColor<<std::endl;
    outs<<std::endl;
    return outs;
}

Car::~Car(){
    std::cout<<"Inside the Car Destructor"<<std::endl;
}