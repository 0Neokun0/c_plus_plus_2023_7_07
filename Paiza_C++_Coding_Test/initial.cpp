/*
あなたは半角アルファベットの苗字と名前からそれぞれ 1文字目を取りイニシャルを作ることにしました。
半角スペース区切りで苗字と名前が入力されるので、1文字目を取り "." (半角ドット)で区切った文字列を出力してください。

例えば以下の様な入力の場合
Paiza Tarou
以下の様に出力してください
P.T
*/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char s [100]{};
    char t [100]{};
    cin >> s >> t;

    for (char uppercase1 : s) {
        if (isupper(uppercase1)) {
            cout << uppercase1 << ".";
        }
    }
    for (char uppercase2 : t) {
        if (isupper(uppercase2)) {
            cout << uppercase2;
        }
    }
    


    return 0;
}