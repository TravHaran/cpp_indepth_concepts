#include <iostream>

#include "Truck.h"
#include "Sedan.h"
#include "SUV.h"

int main(){
    Truck truck;
    Sedan sedan;
    SUV suv;

    truck.setFuel(22);
    truck.setPaint("purple");
    truck.setBedLength(8);

    sedan.setFuel(10);
    sedan.setPaint("blue");
    sedan.setNumDoors(4);

    suv.setFuel(11);
    suv.setNumSeats(8);
    suv.setPaint("black");
    suv.setIsAWD(true);

    std::cout<<truck<<std::endl;
    std::cout<<sedan<<std::endl;
    std::cout<<suv<<std::endl;

    return 0;
}