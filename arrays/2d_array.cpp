/**
 * Make a program that fills a multiplication table and prints it out.
*/

#include <iostream>
using namespace std;

int main(){
    int multiplicationTable[6][6];
    for(int i= 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << j * i << ", ";
            multiplicationTable[i][j] = i * j; 
        }
        cout <<endl;
    }
}