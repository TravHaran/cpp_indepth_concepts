#ifndef INHERITANCE_TRUCK_H
#define INHERITANCE_TRUCK_H

#include <iostream>
#include "Car.h"

class Truck : public Car {
    public:
        Truck();
        ~Truck();
        friend std::ostream &operator<<(std::ostream &outs, const Truck &obj);
        void setBedLength(int length);
        int getBedLength();
        void setIsFullCab(bool cab);
        bool getIsFullCab();

    private:
        int _bedLength;
        bool _isFullCab;
};
#endif