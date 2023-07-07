#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "\nfor Loop" << "\n-----------------------------------" << endl;
    string s1 = {"Apple"};
    for (size_t i{0}; i < s1.length(); ++i)
        cout << s1.at(i); // or s1[i] Apple
    cout << endl;

    cout << "\nRanged-based for Loop" << "\n-----------------------------------" << endl;

    // Range-based for loop
    for (char c: s1)
        cout << c;
    cout << endl;
}