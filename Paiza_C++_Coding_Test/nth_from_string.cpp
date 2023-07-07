/*
半角アルファベット文字列 s と 整数 n が入力されます。

文字列 s の1番左の文字を 1 文字目とし n 文字目のアルファベットを出力して下さい。

例えば
paiza 3
と入力された場合
i
と出力して下さい。
*/
#include <iostream>
#include <string>

int main() {
    std::string s;
    int n;
    std::cin >> s >> n;

    char result = s[n - 1];
    std::cout << result << std::endl;

    return 0;
}