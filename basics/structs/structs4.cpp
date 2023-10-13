#include <iostream>
#include <vector>

using namespace std;

//ADT for employees
struct Employee{
    int id;
    string name;
    string jobTitle;
};

//ADT for buildings
struct Building{
    int buildingNumber;
    int numEmployees;
    vector<Employee*> employees;
};

int main(){
    int numBuildings;
    vector<Building*> buildings; //Container of Building pointers
    cout<<"Enter num Buildings: ";
    cin>>numBuildings; //Get number of buildings from user

    for(int i = 0; i < numBuildings; i++){
        Building *b = new Building; //Create new building (dynamic allocation)
        b->buildingNumber = i; //Set building number
        cout<<"Enter number of Employees for building "<<i<<":";
        cin>>b->numEmployees; //Read into numEmployees variable

        for(int j = 0; j < b->numEmployees; j++){
            Employee *e = new Employee;
            e->id = j; //Set employee's id
            cout<<"Employee "<<j<<" Name:";
            cin>>e->name; //Set employee's name
            cout<<"Employee "<<j<<" Job Title:";
            cin>>e->jobTitle; //Set employee's job title
            b->employees.push_back(e); //Assign employee to building's employee vect
            cout<<endl;
        }
        buildings.push_back(b);
    }
    //Print out employee info for each building
    for(int i =0; i < buildings.size(); i++){
        cout<<"Employee list for building #"<<buildings[i]->buildingNumber<<endl;
        for(int j = 0; j < buildings[i]->employees.size(); j++){
            cout<<"\tid: "<<" "<<buildings[i]->employees[j]->id<<endl;
            cout<<"\tname: "<<" "<<buildings[i]->employees[j]->name<<endl;
            cout<<"\tjob title: "<<" "<<buildings[i]->employees[j]->jobTitle<<"\n"<<endl;
        }
    }
}