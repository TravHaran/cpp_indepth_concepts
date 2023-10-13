/**
 * Make a function that takes an array/vector and an integer
 * as an argument. The function should return a boolean value 
 * based on whether the integer is in the array/vector or not.
 * This function should be a part of a program that lets the user
 * enter 5 integers that get read into the array/vector, and then 
 * asks for 2 more integers that should be added up for a sum
 * that gets sent to the function as the number to search for.
*/

#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> &vec, int target){
    int mid;
    int first = 0;
    int last = vec.size() - 1;
    while (first <= last) {
        mid = first + ((last - first)/2);
        if (target < vec[mid]) { 
            last = mid - 1;
        } else if (target > vec[mid]) {
            first = mid + 1;
        } else {
            return true;
        }
    }
    return false;
}

void insertionSort(vector<int> &vec){
    int placeholder;
    int i = 0;
    int j = 0;
    for(int j= 0; j < vec.size() - 1; j++){
        if (vec[j] > vec[j+1]){ 
            i = j;
            while (i >= 0 && vec[i+1]<vec[i]){
                placeholder = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = placeholder;
                i--;
            }
        }
    }
}

int main(){
    vector<int> myVect;
    int myTarget = 0;
    int myInt;
    for (int i = 0; i < 7; i++){
        cout << "i: "<<i<<endl;
        cout<<"Enter a number: "<<endl;
        cin >> myInt;
        if (i > 4) {
            myTarget += myInt;
        } else { 
            myVect.push_back(myInt);
        }  
    }
    insertionSort(myVect);
    cout<<"Sorted array: "<<endl;
    for(int j= 0; j < myVect.size(); j++){
        cout << myVect[j] << ", ";
    }
    cout<<endl;
    if (binarySearch(myVect, myTarget)==true){
        cout<< "the target value: "<<myTarget<< " exists in the array"<<endl;
    } else {
        cout<< "the target value: "<<myTarget<< " doesn't exists in the array"<<endl;
    }  
}