/**
 * Make a program that takes in 2 integers from the user,
 * and prints out the result of the first number raised 
 * to the power of the second number (the second number is
 * the exponent). Do this by using a for loop.
*/

#include <iostream>
using namespace std;


int main() {
    int num1;
    int num2;
    int result = 1;

    cout << "Enter a whole number: ";
    cin >> num1;

    cout << "Enter an exponent: ";
    cin >> num2;

    for(int i= 0; i < num2; i++) {
        result *= num1;
    }
    cout << num1 << "^" << num2 << " = " << result <<endl;
    return 0;
}