// P168 処理の流れを強制的に終了し、そのブロックから抜ける
#include <stdio.h>
int main(void){
    int res;
    int i;

    printf("何番目でループを中止しますか?(1~10)\n");
    scanf("%d", &res);

    for ( i = 1; i < 10; i++){
        printf("%d番目の処理です。\n", i);
        // ↓は入力した数字の値の番目で強制的に終了してブロックから抜ける
            if(i == res)
            break;
        }
    
    return 0;
}