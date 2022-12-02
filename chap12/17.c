#include <stdio.h>
// マクロを定義
#define DEBUG

int main(void){
    int i;
    int sum = 0;
    for ( i = 1; i <= 5; i++){
        #ifdef DEBUG
        // マクロが定義されている場合に、↓のコードをコンパイルする
        fprintf(stderr, "変数sumの値は%dとなっています。\n", sum);
        #endif
        sum = i + sum;
    }
    printf("1～5までの合計値は%dです。\n", sum);

    return 0;    
}