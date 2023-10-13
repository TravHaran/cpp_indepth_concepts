#ifndef CAR_H
#define CAR_H
#include <string>
#include <vector>
#include <iostream>

class Car{
    public:
        //member functions
        Car();
        Car(std::string paint, std::string brand, std::string model, int miles);
        Car(Car &obj); // copy constructor
        Car &operator=(const Car &obj);
        Car operator+(const Car &obj);
        Car operator-(const Car &obj);
        bool operator==(const Car &obj);
        friend std::ostream &operator<<(std::ostream &outs, const Car &obj);
        friend std::istream &operator>>(std::istream &outs, Car &obj);
        ~Car();
        void driveCar(int miles);
        void setPaint(std::string color);
        std::string getPaint();
        std::string getBrand();
        std::string getModel();
        void showUpgrades();
        void addUpgrade(int code);
        int getOdometer();
        void setOdometer(int reset);
        float getFuel();
        void addFuel(int gallons);

    private:
        //member variables
        float _fuel;
        std::string _paintColor;
        std::string _brand;
        std::string _model;
        int _odometer;
        std::vector<int> *_upgradeCodes;
};
#endif