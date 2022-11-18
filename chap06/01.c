// for文　P150
// sam1
#include <stdio.h>
int main(void)
{
    int i;

    for ( i=1; i<=5; i++){
        printf("繰り返しています。\n");
    }
    // 式1に従って変数を初期化する、条件が真であれば、ブロック内の分を処理して次の式2を処理する、条件が偽になるまで繰り返す
    printf("繰り返しが終わりました。\n");

    return 0;
}