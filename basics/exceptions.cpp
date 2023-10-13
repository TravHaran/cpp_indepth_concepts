#include <iostream>
using namespace std;

double divideAge(double age1, double age2);

int main(){
    double age1 = 0;
    double age2 = 0;
    cout << "Enter age 1: ";
    cin >> age1;
    cout << "Enter age 2: ";
    cin >> age2;
    try {
        cout << "age1 divided by age2 = " << divideAge(age1, age2);
    } catch (const char* message){
        cout << message << endl;
    }
    return 0;
}

double divideAge(double age1, double age2){
    if(age2 == 0) {
        throw "Hey can't divide by zero";
    }
    return age1/age2;

}