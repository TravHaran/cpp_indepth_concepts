#ifndef INHERITANCE_SUV_H
#define INHERITANCE_SUV_H

#include "Car.h"
#include <iostream>

class SUV : public Car {
    public:
        SUV();
        ~SUV();
        friend std::ostream &operator<<(std::ostream &outs, const SUV &obj);
        void setNumSeats(int seats);
        int getNumSeats();
        void setIsAWD(bool awd);
        bool getIsAWD();

    private:
        int _numSeats;
        bool _isAWD;
};

#endif