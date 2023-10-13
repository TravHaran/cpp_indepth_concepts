#ifndef INHERITANCE_SEDAN_H
#define INHERITANCE_SEDAN_H

#include "Car.h"
#include <iostream>

class Sedan : public Car {
    public:
        Sedan();
        ~Sedan();
        friend std::ostream &operator<<(std::ostream &outs, const Sedan &obj);
        void setNumDoors(int num);
        int getNumDoors();
        void setIsCompact(bool compact);
        bool getIsCompact();


    private:
        int _numDoors;
        bool _isCompact;
};

#endif