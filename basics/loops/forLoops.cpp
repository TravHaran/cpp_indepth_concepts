#include <iostream>
using namespace std;

int main() {
    int nums[5];

    for(int position= 0; position< 5; position++) {
        cout << "Enter a number for position " << position << endl;
        cin >> nums[position];
    }
    
    for(int counter = 0; counter < 5; counter++) {
        cout << nums[counter] << " ";
    }
    return 0;
}
