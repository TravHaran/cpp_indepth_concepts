/**
 * Make a program that reads in 3 chracters into an array. 
 * This program should have a hard-coded string password variable
 * that you create 
 * the length of the password should be three.
 * Once you have read all 3 characters from the user input
 * into each position of the array, compare each one of the characters
 * in the array to the string (Does each character in the array at a given position match
 * the character in the string at the same position?).
 * if there is a match then print out to the console that there was a match 
 * as well as the password.
*/

#include <iostream>
using namespace std;

int main() {
    char inputChars[3];
    string password = "tod";
    cout<<"Enter 3 characters: "<<endl;
    cin>>inputChars[0]>>inputChars[1]>>inputChars[2];
    
    if (inputChars==password) {
        cout<<"There was a match to the password: "<<password<<endl;
    } else {
        cout<<"There was no match!"<<endl;
    }
}
