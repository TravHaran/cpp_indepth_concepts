#include <iostream>
using namespace std;

int main() {
    string input;
    string password = "tod";

    do {
        cout<<"Enter password or type 'q' to quit: "<<endl;
        getline(cin, input);
        if(input=="q") {
            return 0;
        }
    }while(input != password);
    cout<<"You guessed the password: "<<password<<endl;
    return 0; 
}