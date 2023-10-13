/**
 * INSERTION SORT
 * Set pointer i to the beginning of the array
 * let i represent the end of the sorted portion of the array.
 * increment i until a[i] > a[i+1]
 * at this point we've found a swapping point
 * set j equal to this point
 * now swap a[i] & a[i+1] while i <= 0 & a[i+1] < a[i].
*/

#include <iostream>
#include <vector>

using namespace std;

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
    int myInt;
    vector<int> myVect;
    for(int i = 0; i < 10; i++){
        cout << "Enter a number: "<<endl;
        cin >> myInt;
        myVect.push_back(myInt);
    }
    insertionSort(myVect);
    for(int i= 0; i < myVect.size(); i++){
        cout << myVect[i] << ", ";
    }

}