#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "This is a test";
    cout << "s1 is : " << s1 << endl;

    s1.erase(0,5); //Erase This from s1 result in "is a test"
    cout << "s1 is now : " << s1 << endl;

}