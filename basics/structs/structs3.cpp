#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Person{
    string name;
    int age;
    float weight;
};

int main(int argc, char* argv[]){
    if(argc != 2){
        cout<<"usage: ./program_name <inputfilename>"<<endl;
        exit(-1);
    }
    ifstream dataFile;
    dataFile.open(argv[1]);
    vector<Person*> personVect;
    Person* p = new Person;

    while(dataFile >> p->name >> p->age >> p->weight){
        personVect.push_back(p);
    }

    for(int i = 0; i < personVect.size(); i++){
        cout<<"Name: "<<personVect[i]->name<<", ";
        cout<<"Age: "<<personVect[i]->age<<", ";
        cout<<"Weight: "<<personVect[i]->weight<<endl;
    } 
}