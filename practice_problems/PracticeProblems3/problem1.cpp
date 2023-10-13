/**
 * Make a program that reads 3 words (strings) from
 * a user input. The program should then find the sum
 * of the  decimal values of each character in each 
 * string for each string. This means sum must be 
 * computed for each of the 3 strings. 
 * Then you should print out the string that has the biggest
 * sum as well as its sum.
*/

#include <iostream>
using namespace std;

int wordSum(string str) {
    int sum = 0;
    for(int i = 0; i < str.length(); i++) {
        sum += int(str[i]);
    }
    return sum;
}

int main() {
    string word;
    string result = "";
    for (int i = 0; i < 3; i++) {
        cout << "Enter a word and press enter: ";
        cin >> word;
        if (wordSum(result) < wordSum(word)) {
            result = word;
        }  
    }
    cout << "String with largest sum is '" << result << "', with a sum of " << wordSum(result) <<endl;

    return 0;
}