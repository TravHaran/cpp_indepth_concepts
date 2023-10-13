#include "Car.h"
#include <iostream>
using namespace std;
int main(){
    Car *car = new Car("blue", "subaru", "outback", 40000); //Dynamically allocated object
    Car car2("white", "ford", "fiesta", 10000); //Stack allocated object
    std::unique_ptr<Car> car3(new Car); // smartt pointer that automatically handles deleting object to prevent memory leaks
    Car car4 = *car; // Create a shadow copy
    Car car5("blue", "ford", "fiesta", 10000);
    car4 = car2; // overloaded assignment operator
    std::cout<<car2<<std::endl; // overloaded output operator
    car4.showUpgrades();
    car2.addUpgrade(2);
    car2.addUpgrade(4);
    car2.showUpgrades();
    car4 = car2+car4; //overloaded addition operator
    std::cout << "SHOWING CAR4 UPGRADES BELOW" << std::endl;
    car4.showUpgrades();
    car5.addUpgrade(5);
    if(car4==car2){ //overloaded equality operator
        std::cout<<"Car4 and Car2 are the same"<<std::endl;
    }
    car4 = car4 - car5; //overloaded subtraction operator
    std::cout << "SHOWING CAR4 UPGRADES BELOW" << std::endl;
    car4.showUpgrades();

   std::cout<<"------------------------"<<std::endl;
    std::cout<<"printing car4 model"<<car4.getModel()<<std::endl;
    std::cout<<"Car1 miles:"<<car->getOdometer()<<" Car2 miles:"<<car2.getOdometer()<<std::endl;
    std::cout<<car->getFuel()<<std::endl;
    std::cout<<car->getPaint()<<std::endl;
    car->setPaint("black");
    car->setOdometer(837);
    std::cout<<car->getOdometer()<<std::endl;
    std::cout<<car->getPaint()<<std::endl;

    std::cout<<"Input make/model/color for car: ";
    std::cin >> car2; // overloaded input operator
    std::cout << "new Car2 info below"<<std::endl;
    std::cout<<car2<<std::endl;
    delete car;

    return 0;
}