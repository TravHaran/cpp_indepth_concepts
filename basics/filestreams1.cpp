#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string myString;
    ifstream myInStream;
    ofstream myOutStream;
    myInStream.open("inputfile.txt");
    getline(myInStream, myString);
    myInStream >> myString;
    myInStream.close();
    myOutStream.open("output2.txt");
    myOutStream << myString << "\n\n";
    myOutStream.close();
    return 0;
}