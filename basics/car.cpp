/**
 * Example of OOP to implement a car class
*/

#include <iostream>
using namespace std;

class Car{
    public:
        Car(string paint, string brand, string model, int miles);
        //member functions
        void driveCar(int miles);
        void setPaint(string color);
        void setOdometer(int reset);
        string getPaint();
        string getBrand();
        string getModel();
        int getOdometer() const;
        float getFuel();
        void addFuel(int gallons);

    private:
        //member variables
        float _fuel;
        string _paintColor;
        string _brand;
        string _model;
        int _odometer;
};

Car::Car(string paint, string brand, string model, int miles){
    _fuel = 12.0;
    _odometer = miles;
    _paintColor = paint;
    _brand = brand;
    _model = model;
}

void Car::driveCar(int miles){
    _odometer += miles;
    _fuel -= miles/22;
}

void Car::setPaint(string color){
    _paintColor = color;
}

string Car::getPaint(){
    return _paintColor;
}

string Car::getModel(){
    return _model;
}

string Car::getBrand(){
    return _brand;
}

int Car::getOdometer() const{
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

int main(){
    Car car("blue", "subaru", "outback", 40000);
    Car car2("white", "ford", "fiesta", 10000);
    cout<<"Car1 miles: "<<car.getOdometer()<<" Car2 miles: "<<car2.getOdometer()<<endl;
    cout<<car.getFuel()<<endl;
    cout<<car.getPaint()<<endl;
    cout<<car.getModel()<<endl;
    cout<<car.getPaint()<<endl;
    car.setPaint("black");
    car.setOdometer(837);
    cout<<car.getOdometer()<<endl;
    cout<<car.getPaint()<<endl;
    return 0;
}