//P110,練習１ 演算子の種類P82
// #include <stdio.h>
// int main(void)
// {
//     int num1 = 0-4;
//     int num2 = 30%7;
//     double db1 = 3.14*2;
//     double db2 = (double)5/3;
//     double db3 = (7+32)/(double)5;

//     // ↓は本の回答
//     // int num1, num2;
//     // double db1, db2, db3;

//     // num1 = 0-4;
//     // num2 = 30%7;
//     // db1 =3.14*2;
//     // db2 =5.0/3.0;
//     // db3 = (7+32)/(double)5;

//     printf("0-4は%dです。\n", num1);
//     printf("3.14*2は%fです。\n", db1 );
//     printf("5/3は%fです。\n", db2 );
//     printf("30%%7のあまりの数は%dです。\n", num2 );
//     printf("(7+32)/5は%fです。\n", db3);

//     return 0;
// }

// 練習２
// #include <stdio.h>
// int main(void)
// {
//     int num1;

//     printf("正方形の辺の長さを入力してください。\n");
//     scanf("%d", &num1);

//     printf("正方形の面積は%dです。\n", num1*num1);

//     return 0;
// }

// 練習３
// #include <stdio.h>
// int main(void)
// {
//     double num1, num2;

//     printf("三角形の高さを入力してください。\n");
//     scanf("%lf", &num1);
//     printf("三角形の底面を入力してください。\n");
//     scanf("%lf", &num2);
//     // double型の出力の場合は%lfを使う
//     printf("三角形の面積は%fです。\n", num1*num2/2);

//     return 0;
// }

// 練習４
// #include <stdio.h>
// int main(void)
// {
//     int num1;

//     printf("整数を入力してください。\n");
//     scanf("%d", &num1);

//     printf("正負を反転すると%dです。\n", -num1);

//     return 0;
// }

// 練習５
#include <stdio.h>
int main(void)
{
    int sum1;
    int num1;

    printf("科目1の点数を入力してください。\n");
    scanf("%d", &num1);
    sum1 += num1;

    printf("科目2の点数を入力してください。\n");
    scanf("%d", &num1);
    sum1 += num1;

    printf("科目3の点数を入力してください。\n");
    scanf("%d", &num1);
    sum1 += num1;

    printf("科目4の点数を入力してください。\n");
    scanf("%d", &num1);
    sum1 += num1;

    printf("科目5の点数を入力してください。\n");
    scanf("%d", &num1);
    sum1 += num1;

    printf("科目5の合計点は%dです\n", sum1);
    printf("科目5の平均点は%fです\n", (double)sum1/5);
    
    return 0;
}