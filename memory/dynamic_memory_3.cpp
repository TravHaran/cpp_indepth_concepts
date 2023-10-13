#include <iostream>
using namespace std;

void myFunction(int *pointerVar) {
    *pointerVar = 20;
}

int *myOtherFunction(){
    int *localVar = new int(5);
    return localVar;
}

int main() {
    int *mainPointer = myOtherFunction();

    cout << *mainPointer <<endl;
    *mainPointer = 540;
    cout << *mainPointer <<endl;

    delete mainPointer;
}