/*
This is a program about arithmetic operators
*/

#include <iostream>

int main(){
    // variable declarations
    int i1 = 5;
    float f1  = 10.5;
    double d1 = 15.25; 

    std::cout << i1 + i1 + 1 <<std::endl;
    std::cout << f1 * 2 <<std::endl;
    std::cout << (i1 * 2)/5 <<std::endl;
    std::cout << i1 % 2 <<std::endl;

    //++ and -- prefix vs postfix
    int i2 = i1;
    int i3 = ++i1; //prefix
    std::cout << "i1: " << i1 << ", i3: " << i3 << std::endl;
    int i4 = i2++; //postfix
    std::cout << "i2: " << i2 << ", i4: " << i4 << std::endl;
    return 0;
}