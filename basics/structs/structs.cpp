/**
 * Make a program that asks a user for their name,
 * age and blood type. The information should be stored
 * in a "patient" struct that has the appropriate member variables.
 * (Remember that you can access these variables by 
 * patient.<variableName> even for storing input into them)
*/

#include <iostream>
using namespace std;

struct patient {
    string name;
    int age;
    string bloodType;
};

int main(){
    patient myPatient;
    cout<<"Enter you're name: "<<endl;
    cin>>myPatient.name;
    cout<<"Enter you're age: "<<endl;
    cin>>myPatient.age;
    cout<<"Enter you're blood type(A/B/AB/O): "<<endl;
    cin>>myPatient.bloodType;

    cout<<"Patient: "<<myPatient.name<<endl;
    cout<<"Age: "<<myPatient.age<<endl;
    cout<<"Blood Type: "<<myPatient.bloodType<<endl;
    return 0;
}
