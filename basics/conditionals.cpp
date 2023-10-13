#include <iostream>

using namespace std;
int main() {
    // define some booleans
    bool b1 = true;
    bool b2 = false;
    // define some integers
    int i1 = 5;
    int i2 = 10;
    int i3 = 3;
    //
    if(i1 >= i2) {
        cout<< "i1 is greater than i2" <<endl;
    } else if (i1 == i3) {
        cout<< "i1 is equal to i3"<<endl;
    } else {
        cout<<"All false :("<<endl;
    }
    return 0;
}