// P172  continue文
#include <stdio.h>
int main(void){
    int res;
    int i;

    printf("何番目の処理を飛ばしますか?\n");
    scanf("%d", &res);

    for ( i = 1; i <= 10; i++){
        if (i == res)
            continue;
            // 入力した番号の値番目では↓の処理されずに飛ばされて次の値番目に繰り返し処理される
        printf("%d番目の処理です。\n", i);
    }

    return 0;
}