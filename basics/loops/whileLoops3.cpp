/**
 * Ask the user to fill an array with integers one position at a time
 * once the array is full, go through the array and print out all the elements 
 * on the same line, where the numbers are separated by spaces.
*/

#include <iostream>
using namespace std;

int main() {
    int nums[5];
    int position = 0;
    int counter = 0;

    while(position < 5) {
        cout << "Enter a number for position " << position << endl;
        cin >> nums[position];
        ++position;
    }
    
    while(counter < 5) {
        cout << nums[counter] << " ";
        ++counter;
    }
    return 0;
}
