/**
 * Prototypes allow us to define functions below main
*/

#include <iostream>
using namespace std;

void a();
void b();
void c();

int main(){
    a();
    return 0;
}

void a() {
    cout << "We're in function 'a'. Let's call function 'b'!" <<endl;
    b();
}

void b() {
    cout << "We're in function 'b'. Let's call function 'c'!" <<endl;
    c();
}

void c() {
    cout << "We're in function 'c'." <<endl;
}