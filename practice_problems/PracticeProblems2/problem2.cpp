/**
 * Make a program that takes a word (string) from the
 * user and prints that word in reverse.
*/

#include <iostream>
using namespace std;

int main() {
    string word;
    string result = "";
    cout << "Enter a word: ";
    cin >> word;

    for(int i= word.length() - 1; i>=0; --i) {
        result += word[i];
    }

    cout << "reversed word = " << result <<endl;

    return 0;
}