#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 {"Nishant"};
    cout << s1.length() << endl; // 7

    s1 += " Meher";
    cout << s1 << endl; // Nishant Meher
}