#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string s0;
    string s1 { "Apple" };
    string s2 { "Banana" };
    string s3 { "Kiwi" };
    string s4 { "apple" };
    string s5 {s1}; // Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // X 10 times 

    cout << "\nComparison" << "\n--------------------------------------" << endl;
    cout << boolalpha;
    cout << "True is 0, False is 1\n"; 
    cout << s1 << " == " << s5 << ":" << (s1 == s5) << endl; // True
    cout << s1 << " == " << s2 << ":" << (s1 == s2) << endl; // False
    cout << s1 << " != " << s2 << ":" << (s1 != s2) << endl; // True
    cout << s1 << " <  " << s2 << ":" << (s1 < s2) << endl;  // True
    cout << s2 << " > " << s1 << ":" << (s2 > s1) << endl;  // True
    cout << s4 << " < " << s5 << ":" << (s4 < s5) << endl;  // False
    cout << s1 << " == " << "Apple" << ":" << (s1 == "Apple") << endl; // True
}