// 変数をループ内で使う　P153
#include <stdio.h>
int main(void)
{
    int i;

    for ( i = 1; i <= 5; i++){
        printf("%d番目の繰り返しです。\n", i);
        // 繰り返しのたびに値が1増える
    }
    printf("繰り返しが終わりました。\n");

    return 0;
}