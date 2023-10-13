#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> myVector;
    cout << "Size: " << myVector.size() <<endl;
    myVector.push_back(3);
    cout << "myVector[0]: " << myVector[0] <<endl;
    cout << "Size: " << myVector.size() <<endl;
    myVector.push_back(4);
    cout << "myVector[1]: " << myVector.back() <<endl;
    cout << "front of vector: " << myVector.front() <<endl;
    cout << "Size: " << myVector.size() <<endl;
    myVector.pop_back();
    cout << "Size after pop_back(): " << myVector.size() <<endl;
    myVector.clear();
    cout << "Size after clear(): " << myVector.size() <<endl;
    return 0;
}