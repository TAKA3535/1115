#include <stdio.h>
int main(void){
    // char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};　配列の初期化が可能、最後に"\0"をつける
    // char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};　配列の初期化が可能
    // char str[6] = "Hello";　　　""を使って初期化も可能
    // char str[6] = "Hello";　　　""を使って初期化も可能

    // P205　文字配列を出力,上の4種の書き方でもOK
    char str[6];

    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';

    printf("%sは文字列です。\n", str);

    return 0;
}