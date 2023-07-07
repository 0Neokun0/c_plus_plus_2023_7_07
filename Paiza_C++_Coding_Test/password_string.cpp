/*
ある金庫のパスワードは paiza です。入力された文字列 S がパスワードと一致するか調べてください。

入力例 1 の場合
NEKO
NEKO と paiza は一致しないので、答えには No と出力します。
No
と出力してください。
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string c{};
    string correct = "paiza";
    cin >> c;
    if ( c == correct )
        cout << "Yes";
    else
        cout << "No";

    return 0;
}