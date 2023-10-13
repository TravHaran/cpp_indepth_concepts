#include "Sedan.h"

Sedan::Sedan(){
    std::cout<<"Inside the Sedan constructor"<<std::endl;
    _numDoors = 2;
    _isCompact = false;
}

void Sedan::setNumDoors(int doors){
    _numDoors = doors;
}

int Sedan::getNumDoors(){
    return _numDoors;
}

void Sedan::setIsCompact(bool compact){
    _isCompact = compact;
}

bool Sedan::getIsCompact(){
    return _isCompact;
}


std::ostream &operator<<(std::ostream &outs, const Sedan &obj){
    outs<<"SEDAN INFO:"<<std::endl;
    outs<<"Fuel: "<<obj._fuel<<std::endl;
    outs<<"Odometer: "<<obj._mileage<<std::endl;
    outs<<"Color: "<<obj._paintColor<<std::endl;
    outs<<"Compact: "<<obj._isCompact<<std::endl;
    outs<<"Doors: "<<obj._numDoors<<std::endl;
    outs<<std::endl;
    return outs;
}

Sedan::~Sedan(){
    std::cout<<"Inside the Sedan Destructor"<<std::endl;
}