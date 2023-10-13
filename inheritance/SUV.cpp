#include "SUV.h"

SUV::SUV(){
    std::cout<<"Inside the SUV Constructor"<<std::endl;
    _numSeats = 5;
    _isAWD = false;
}

void SUV::setNumSeats(int seats){
    _numSeats = seats;
}

int SUV::getNumSeats(){
    return _numSeats;
}

void SUV::setIsAWD(bool awd){
    _isAWD = awd;
}

bool SUV::getIsAWD(){
    return _isAWD;
}

std::ostream &operator<<(std::ostream &outs, const SUV &obj){
    outs<<"SUV INFO:"<<std::endl;
    outs<<"Fuel: "<<obj._fuel<<std::endl;
    outs<<"Odometer: "<<obj._mileage<<std::endl;
    outs<<"Color: "<<obj._paintColor<<std::endl;
    outs<<"AWD: "<<obj._isAWD<<std::endl;
    outs<<"Seats: "<<obj._numSeats<<std::endl;
    outs<<std::endl;
    return outs;
}

SUV::~SUV(){
    std::cout<<"Inside the SUV Destructor"<<std::endl;
}

