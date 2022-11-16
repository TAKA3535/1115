// 演算子の種類
// #include <stdio.h>
// int main(void)
// {
//     int num1 = 10;
//     int num2 = 5;

//     printf("num1とnum2にいろいろな演算を行います。\n");
//     printf("num1+num2は%dです。\n", num1+num2);
//     printf("num1-num2は%dです。\n", num1-num2);
//     printf("num1*num2は%dです。\n", num1*num2);
//     printf("num1/num2は%dです。\n", num1/num2);
//     printf("num1%%num2は%dです。\n", num1%num2);
// // ↑はnum1/num2=10/5=2あまり0の0の部分が出力する
//     return 0;
// }

// 代入演算子
#include <stdio.h>
int main(void)
{
    int sum = 0;
    int num = 0;

    printf("1番目の整数を入力してください。\n");
    scanf("%d", &num);
    sum += num;

    printf("2番目の整数を入力してください。\n");
    scanf("%d", &num);
    sum += num;

    printf("3番目の整数を入力してください。\n");
    scanf("%d", &num);
    sum += num;

    printf("3の数の合計は%dです。\n", sum);
    // 合計は8
    return 0;
}