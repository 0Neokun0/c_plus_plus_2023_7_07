#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 { "Apple" };
    string s2 { "Banana" };
    string s3 = "Watermelon";
    cout << "\nConcatenation" << "\n-------------------------------------" << endl;

    s3 = s1 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;

}