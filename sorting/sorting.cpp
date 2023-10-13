/**
 * Make a program that takes in 5 integers from the user,
 * reads them into an array or vector and then sorts the
 * numbers in that container before printing them out.
*/

#include <iostream>
#include <vector>

using namespace std;

void sortVector(vector<int> &vec){ // Optimized bubblesort
    bool swapped;
    int placeholder;
    for(int i = 0; i < vec.size() - 1; i++){
        swapped = false;
        for(int j= 0; j< vec.size() - i - 1; j++){
            if (vec[j] > vec[j+1]) {
                placeholder = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = placeholder;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

}

int main() {
    int myInt;
    vector<int> myVect;
    for(int i = 0; i < 5; i++){
        cout << "Enter a number: "<<endl;
        cin >> myInt;
        myVect.push_back(myInt);
    }
    sortVector(myVect);
    for(int i= 0; i < myVect.size(); i++){
        cout << myVect[i] << ", ";
    }
}