// P297 練習１
// #include <stdio.h>

// int main(void){
//     int a = 5;

//     printf("変数aのアドレスは%pです。\n", &a);

//     return 0;
// }
// ①×、環境によってアドレスは変わるはず
// ②○
// ③×

// 練習２
// #include <stdio.h>

// int main(void){
//     int a;
//     int *pA;

//     a = 5;
//     pA = &a;

//     printf("変数aの値は%dです。\n", a);
//     printf("変数aのアドレスは%pです。\n", &a);
//     printf("ポインタpAの値は%pです。\n", pA);
//     // printf("pAの値は%dです。\n", *pA);

//     return 0;
// }

// 練習３
#include <stdio.h>

// add関数の宣言
void add(int *x1, int *x2, int a);

int main(void){
    int num1 = 0;
    int num2 = 0;
    int ad = 0;

    printf("２科目分の点数を入力してください。\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("加算する点数を入力してください。\n");
    scanf("%d", &ad);

    add(&num1, &num2, ad);

    printf("%d点加点しましたので\n", ad);
    printf("科目1は%d点となりました。\n", num1);
    printf("科目2は%d点となりました。\n", num2);

    return 0;
}
// add関数の定義
void add(int *x1, int *x2, int a){
    *x1 += a;
    *x2 += a; 
}
