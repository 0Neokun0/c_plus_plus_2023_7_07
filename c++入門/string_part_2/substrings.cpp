/*
Substrings - substr()
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Start from below
    string s1 { "This is a test"};
    cout << s1.substr(0,4) << endl; // This
    cout << s1.substr(5,2) << endl; // is
    cout << s1.substr(10,4) << endl; //test

    return 0;
}