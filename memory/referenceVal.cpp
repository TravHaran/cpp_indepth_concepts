/**
 * Passing by reference: you pass a copy 
 * of the data instead of the actual data
*/

#include <iostream>

using namespace std;


void aFunction(int &i1, int &i2) {
    i1 = 2;
    i2 = 2;
}

int main() {
    int i1 = 5;
    int i2 = 7;
    aFunction(i1, i2);
    cout << i1 << ", " << i2 <<endl;
    return 0;
}