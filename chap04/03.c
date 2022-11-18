// sizeof演算子  P92 ,P49で各型のバイト記載あり
#include <stdio.h>
int main(void)
{
    int a = 1;
    int b = 0;

    printf("short int型サイズは%dバイトです。\n", sizeof(short int));
    printf("int型サイズは%dバイトです。\n", sizeof(int));
    printf("long int型サイズは%dバイトです。\n", sizeof(long int));
    printf("float型サイズは%dバイトです。\n", sizeof(float));
    printf("double型サイズは%dバイトです。\n", sizeof(double));
    printf("long double int型サイズは%dバイトです。\n", sizeof(long double));
    printf("変数aのサイズは%dバイトです。\n", sizeof(a));
    printf("変数a+bのサイズは%dバイトです。\n", sizeof(a+b));

    return 0;
}