/**
 * Make a program that takes input from the user as an integer
 * repreatedly and stops when a specific sum has been reached
*/

#include <iostream>
using namespace std;

int main() {
    int sum = 60;
    int number;
    int total = 0;// accumulator variable
    string password = "tod";

    do {
        cout<<"Enter int or type -1 to quit: "<<endl;
        cin>>number;
        total += number;
        if(number==-1) {
            return 0;
        }
    }while(total < sum);
    cout<<"Total sum reached: "<<sum<<endl;
    return 0; 
}