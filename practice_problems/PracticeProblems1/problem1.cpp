/**
 * Create a program that reads in 2 characters and 2 integers. 
 * The program should check if either of the characters' match either of the integers
 * (You can compare char and int and c++ will compare the decimal values)
 * if anything matched, then print out the characters that match. (Follow the input/output format)
*/

#include <iostream>
using namespace std;

int main() {
    char a;
    char b;
    int x;
    int y;
    cout<<"Enter 2 characters followed by 2 integers: "<<endl;
    cin>>a>>b>>x>>y;

    if (a==x || a==y) {
        cout<<"character: "<<a<<" is matching"<<endl;
    }
    else if (b==x || b==y) {
        cout<<"character: "<<b<<" is matching"<<endl;
    } 
    else if (a!=x && a!=y && b!=x && b!=y) {
        cout<<"no matching characters"<<endl;
    }
}



