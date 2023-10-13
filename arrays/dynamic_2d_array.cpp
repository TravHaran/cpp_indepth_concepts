/**
 * Make a multiplication table that can accept a table size
 * from the user and make a dynamically allocated multiplcation
 * table of that requested size.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int size;
    cout << "Enter a size for the multiplcation table" <<endl;
    cin >> size;
    int **multTable = new int*[size];

    for(int i = 0; i < size; i++){
        multTable[i] = new int[size];
        for(int j = 0; j < size; j++){
            multTable[i][j] = i * j;
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << setw(3) << multTable[j][i] << ", ";
        }
        cout <<endl;
    }

}