#include <stdio.h>
int main(void)
{
    int num1, num2;
    double div;

    num1 = 5;
    num2 = 4;
    // div = num1/num2;
    // ↑だとint型の値が出力されて1.25ではなく1.00000になるので↓のようにキャスト演算子をする
    div =(double)num1/num2;
    printf("5/4は%fです。\n", div);
    
    return 0;
}