#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter a number for array size: ";
    cin >> size;
    int *myArr = new int[size];

    for(int i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> myArr[i];
    }

    for(int i = 0; i < size; i++) {
        cout << myArr[i] << ", ";
    }

    delete [] myArr;
    return 0;
}