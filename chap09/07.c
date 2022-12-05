#include <stdio.h>
// swap関数の宣言
void swap(int *pX, int *pY);

int main(void){
    int num1 = 5;
    int num2 = 10;

    printf("\n----関数呼び出し前----\n");
    printf("変数num1の値は%dです。\n", num1);
    printf("変数num1のアドレスは%pです。\n\n", &num1);

    printf("変数num2の値は%dです。\n", num2);
    printf("変数num2のアドレスは%pです。\n\n", &num2);

// ここで渡しているのはnum1とnum2のアドレスを渡している,参照渡し
    swap(&num1, &num2);

    printf("\n----関数呼び出し後----\n");
    printf("変数num1の値は%dです。\n", num1);
    printf("変数num2の値は%dです。\n", num2);

    return 0;
}

//swap関数の定義
// 12行目のnum1とnum2のアドレスが渡された、*をつけるとアドレスの値がわかる
void swap(int *pX, int *pY){
    int tmp;

    printf("\n----交換直前----\n");
    printf("pXの値(num1のアドレス)は%pです。\n", pX);
   printf("pXを間接参照した値は%dです。\n\n", *pX);

    printf("pYの値(num2のアドレス)は%pです。\n", pY);
    printf("pYを間接参照した値は%dです。\n\n", *pY);

    tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}


