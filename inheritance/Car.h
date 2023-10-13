#ifndef INHERITANCE_CAR_H
#define INHERITANCE_CAR_H

#include <iostream> 

class Car{
    public:
        //member functions
        Car();
        ~Car();
        friend std::ostream &operator<<(std::ostream &outs, const Car &obj);
        int showFuel();
        void setFuel(int fuel);
        float getOdometer();
        void setPaint(std::string color);
        std::string getPaint();
    protected: // derived classes can now access these
        //member variables
        int _fuel;
        std::string _paintColor;
        float _mileage;
};

#endif //INHERITANCE_CAR_H