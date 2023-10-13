#include <iostream>
using namespace std;

int main() {
    int *mypointer;
    int *myDynamicPointer = new int;

    cout << "mypointer = " << mypointer <<endl;
    cout << "mypointer value = " << *mypointer <<endl;
    cout << "myDynamicPointer = " << myDynamicPointer <<endl;
    cout << "myDynamicPointer value = " << *myDynamicPointer <<endl;

    *mypointer = 5;
    cout << "mypointer value = " << *mypointer <<endl;
    *myDynamicPointer = 7;
    cout << "myDynamicPointer value = " << *myDynamicPointer <<endl;

    // It is important that we deallocate dynamically allocated memory or else we risk memory leaks
    delete myDynamicPointer;

    return 0;
}