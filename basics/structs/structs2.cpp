#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Account{
    string name;
    int age;
    float balance;
};

int main(int argc, char* argv[]){
    if(argc != 2){
        cout<<"usage: ./program_name <inputfilename>"<<endl;
        exit(-1);
    }
    vector<Account> accountVect;

    ifstream dataFile;
    dataFile.open(argv[1]);

    Account myAccount;
    while(dataFile >> myAccount.name >> myAccount.age >> myAccount.balance){
        accountVect.push_back(myAccount);
    }

    for(int i = 0; i < accountVect.size(); i++){
        cout<<"Name: "<<accountVect[i].name<<", ";
        cout<<"Age: "<<accountVect[i].age<<", ";
        cout<<"Balance: "<<accountVect[i].balance<<endl;
    }

    return 0;

}