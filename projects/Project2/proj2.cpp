/**
 * PROJECT 2:
 * You are tasked to make a program that reads in 
 * from a text file, sorts the incoming data, and
 * then lets a user search for a specific name in 
 * that data.
 * 
 * The input file should contain a series of lines 
 * that are in the form of: name<string> age<int>
 * 
 * When your program is run, it should first read 
 * each line of the file into a string, then put 
 * each one of those strings into a vector or array.
 * This array/vector must end up in sorted order, so
 * it is up to you whether you want to attempt to 
 * sort the input as it is read-in from the file, or
 * just read in the entire file contents into the 
 * array/vector afterwards.
 * 
 * Your program should then ask the user to enter a 
 * name to search so an age for that name can be 
 * returned to the user.
 * Your program should use BINARY SEARCH to search
 * for the name.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <unordered_map>

using namespace std;

void insertionSort(vector<string> &nameVec, vector<int> &ageVec){
    int j;
    string tempName;
    int tempAge;
    for(int i = 0; i < nameVec.size() - 1; i++){
        if(nameVec[i] > nameVec[i+1]){
            j = i;
            while(j >= 0 && nameVec[j] > nameVec[j+1]){
                tempName = nameVec[j];
                nameVec[j] = nameVec[j+1];
                nameVec[j+1] = tempName;

                tempAge = ageVec[j];
                ageVec[j] = ageVec[j+1];
                ageVec[j+1] = tempAge;

                j--;
            }
        }
    }
}

int binarySearch(vector<string> &nameVec, string target){
    int start = 0;
    int end = nameVec.size() - 1;
    int mid;
    while(start <= end){
        mid = start + (end - start)/2;
        if(target < nameVec[mid]){
            end = mid - 1;
        } else if(target > nameVec[mid]){
            start = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

void lower(string &name){
    for(char &i:name){
        i = tolower(i);
    }
}

int main(int argc, char* argv[]){
    if(argc != 2){
        cout<<"usage: ./program_name <inputfilename>"<<endl;
        exit(-1);
    }
    string temp;
    string name;
    int age;
    vector<int> ageVect;
    vector<string> nameVect;
    

    ifstream dataFile;
    dataFile.open(argv[1]);
    while(!dataFile.eof()){
        getline(dataFile, name, ' ');
        nameVect.push_back(name);
        getline(dataFile, temp, '\n');
        age = stoi(temp);
        ageVect.push_back(age);
    }
    insertionSort(nameVect, ageVect);

    string targetName;
    int ageIndex;
    while(targetName!="quit"){
        cout<<"Enter a name to be searched in the database (or type 'quit'): "<<endl;
        cin>>targetName;
        lower(targetName);
        if(targetName=="quit"){
            break;
        }
        ageIndex = binarySearch(nameVect, targetName);
        if(ageIndex==-1){
            cout<<"The name "<<targetName<<" does nto exist in the database"<<endl;
        } else {
            cout<<"The age for "<<targetName<<" is "<<ageVect[ageIndex]<<endl;
        }
    }
    return 0;
}