#include "Car.h"
#include <iostream>
#include <vector>
#include <string>

Car::Car(){
    _fuel = 0;
    _odometer = 0;
    _paintColor = "";
    _upgradeCodes = new std::vector<int>();
    _upgradeCodes->push_back(1);
    _brand = "";
    _model = "";

}

Car::Car(std::string paint, std::string brand, std::string model, int miles){
    _fuel = 12.0;
    _odometer = miles;
    _paintColor = paint;
    _upgradeCodes = new std::vector<int>();
    _upgradeCodes->push_back(1);
    _brand = brand;
    _model = model;
}

Car::Car(Car &obj){
    _fuel = obj._fuel;
    _odometer = obj._odometer;
    _paintColor = obj._paintColor;
    _brand = obj._brand;
    _model = obj._model;
    _upgradeCodes = new std::vector<int>();
    for(int i = 0; i < obj._upgradeCodes->size(); i++){
        auto temp = *(obj._upgradeCodes);
        _upgradeCodes->push_back(temp[i]);
    }

}

void Car::driveCar(int miles){
    _odometer += miles;
    _fuel -= miles/22;
}

void Car::setPaint(std::string color){
    _paintColor = color;
}

std::string Car::getPaint(){
    return _paintColor;
}

std::string Car::getModel(){
    return _model;
}

std::string Car::getBrand(){
    return _brand;
}

int Car::getOdometer(){
    return _odometer;
}

void Car::setOdometer(int reset){
    _odometer = reset;
}

float Car::getFuel(){
    return _fuel;
}

void Car::addFuel(int gallons){
    _fuel += gallons;
}

Car::~Car(){
    std::cout<<"Inside the destructor, cleaning up object"<<std::endl;
}

void Car::addUpgrade(int code){
    _upgradeCodes->push_back(code);
}

void Car::showUpgrades(){
    for(auto i : *_upgradeCodes){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

Car &Car::operator=(const Car &obj){
    _fuel = obj._fuel;
    _odometer = obj._odometer;
    _paintColor = obj._paintColor;
    _brand = obj._brand;
    _model = obj._model;
    _upgradeCodes->clear();
    for(int i = 0; i < obj._upgradeCodes->size(); i++){
        auto temp = *(obj._upgradeCodes);
        _upgradeCodes->push_back(temp[i]);
    }
    return *this;
}

Car Car::operator-(const Car &obj){
    std::unique_ptr<Car> newCar(new Car);
    if((_model==obj._model)&&(_brand==obj._brand)&&(obj._upgradeCodes->size() < _upgradeCodes->size())){
        *newCar = obj;
        return *newCar;
    }   
    return *this;
}

Car Car::operator+(const Car &obj){
    std::unique_ptr<Car> newCar(new Car);
    if((_model==obj._model)&&(_brand==obj._brand)&&(obj._upgradeCodes->size()>=_upgradeCodes->size())){
        *newCar = obj;
        return *newCar;
    }   
    return *this;
}

bool Car::operator==(const Car &obj){
    bool theSame = false;
    if((_model==obj._model)&&(_brand==obj._brand)&&(_paintColor==obj._paintColor)&&(_upgradeCodes->size()==obj._upgradeCodes->size())){
        for(int i=0;i<_upgradeCodes->size();i++){
            int code = (*_upgradeCodes)[i];
            theSame = false;
            for(int j=0; j<obj._upgradeCodes->size();j++){
                if((*obj._upgradeCodes)[i]==code){
                    theSame = true;
                }
            }
            if(!theSame){
                return false;
            }
        }
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &outs, const Car &obj){
    outs<<"CAR INFO:"<<std::endl;
    outs<<"Make: " <<obj._brand<<std::endl;
    outs<<"Model: " <<obj._model<<std::endl;
    outs<<"Color: " <<obj._paintColor<<std::endl;

    return outs;
}

std::istream &operator>>(std::istream &ins, Car &obj){
    ins >> obj._brand;
    ins >> obj._model;
    ins >> obj._paintColor;

    return ins;
}