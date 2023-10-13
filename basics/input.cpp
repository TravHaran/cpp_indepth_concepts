/*
This program is about getting user input
*/

#include <iostream>

using namespace std;

int main() {
    int width;
    int height;
    cout<<"Enter Width: "<<endl;
    cin>>width;
    cout<<"Enter Height: "<<endl;
    cin>>height;
    if (cin.fail()) {
        cout << "OOPS cin failed" << endl;
    }
    cout<<"Area of the rectangle is: " << width * height <<endl;

    string input;
    cout <<"Enter your name:"<<endl;
    getline(cin, input);
    cout<< "Hi "<< input<<endl;
    return 0;
}
