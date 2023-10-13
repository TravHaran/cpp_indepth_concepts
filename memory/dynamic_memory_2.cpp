#include <iostream>
using namespace std;

void myFunction(int *pointerVar) {
    *pointerVar = 20;
}

int main() {
    int *mypointer;
    int myInt = 8;
    int *myDynamicPointer = new int;
    cout << myInt <<endl;
    myFunction(&myInt);
    cout << myInt <<endl;
}