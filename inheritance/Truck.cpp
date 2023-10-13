#include "Truck.h"

Truck::Truck(){
    std::cout<<"Inside the Truck Constructor"<<std::endl;
    _bedLength = 0;
    _isFullCab = false;
}

void Truck::setBedLength(int length){
    _bedLength = length;
}

void Truck::setIsFullCab(bool isFull){
    _isFullCab = isFull;
}

int Truck::getBedLength(){
    return _bedLength;
}

bool Truck::getIsFullCab(){
    return _isFullCab;
}

std::ostream &operator<<(std::ostream &outs, const Truck &obj){
    outs<<"TRUCK INFO:"<<std::endl;
    outs<<"Fuel: "<<obj._fuel<<std::endl;
    outs<<"Odometer: "<<obj._mileage<<std::endl;
    outs<<"Color: "<<obj._paintColor<<std::endl;
    outs<<"Full Cab: "<<obj._isFullCab<<std::endl;
    outs<<"Bed Length: "<<obj._bedLength<<std::endl;
    outs<<std::endl;
    return outs;
}

Truck::~Truck(){
    std::cout<<"Inside the Truck Destructor"<<std::endl;
}