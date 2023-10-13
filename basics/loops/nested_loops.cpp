#include <iostream>
using namespace std;

int main() {
    int numPeople = 4;
    string name;
    cin >> name;
    while(name != "quit") {
        cout << name <<endl;
        for(int i = 0; i < numPeople; i++) {
            cout << name << " helps person " << i << ",";
        }
        cin >> name;
    }
    return 0;
}