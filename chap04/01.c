// 式と演算子(operator:+や-等)
// #include <stdio.h>
// int main(void)
// {
//     printf("1+2は%dです。\n", 1+2);
//     printf("3*4は%dです。\n", 3*4);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int num1 = 2;
//     int num2 = 3;
//     int sum = num1+num2;

//     printf("変数num1の値は%dです。\n", num1);
//     printf("変数num2の値は%dです。\n", num2);
//     printf("num1+num2の値は%dです。\n", sum);

//     num1 = num1+1;
//     printf("変数num1の値に1を足すと%dです。\n", num1);
//     return 0;

// }

// キーボードから入力した値を足し算する
#include <stdio.h>
int main(void)
{
    int num1, num2;
    printf("整数1を入力してください。\n");
    scanf("%d", &num1);
    printf("整数2を入力してください。\n");
    scanf("%d", &num2);
    printf("足し算の結果は%dです。\n", num1+num2);

    return 0;
}