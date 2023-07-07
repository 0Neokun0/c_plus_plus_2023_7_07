/*
正三角形を判別する場合、3つの辺すべての長さが等しければ正三角形と判別できます。
3つの辺の長さ a, b, c が改行区切りで与えられるので正三角形なら "YES", 正三角形でなければ "NO" と出力してください。

例えば
10
10
10
と与えられた場合、全ての辺が等しいので正三角形となるので
YES
と出力するプログラムを作成してください。
*/
#include <iostream>
using namespace std;

int main()
{
    int a{}, b{}, c{};
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b && a == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}