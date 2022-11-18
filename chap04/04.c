// 異なる方同士で演算
#include <stdio.h>
int main(void)
{
    int d = 2;
    double db =3.14;

    printf("直径が%dセンチの円の\n", d);
    printf("円周は%fセンチです。\n", d*db);
// int型の2がここではdouble型の2.0に変換されて掛け算される、式の値もdouble型の値で返される
    return 0;
}