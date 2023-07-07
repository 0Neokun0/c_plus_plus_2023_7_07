/*

*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
   string s1 = "The secret word is Boo";
   string word {};

   cout << "Enter the word to find : ";
   cin >> word;

   size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position : " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    cout << endl;

    


    return 0;
}