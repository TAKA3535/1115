// P319
// char ste[] = "Hello"; 
// str = "Goodbye"; 配列に左のような代入は通常できない
// ↓は↑とは違って別の場所にある文字列をさすように変換できる
// char *ste = "Hello"; 
// str = "Goodbye";　

#include <stdio.h>

int main(void){
    char str[3][20] ={"Hello", "Goodbye", "Thankyou"};
    int i;

    for ( i = 0; i < 3; i++){
        printf("文字列は%sです。\n", str[i]);
    }
    
    return 0;
}