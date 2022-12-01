#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *str;
    int num, i;

    printf("何文字のaを用意しますか?\n");
    scanf("%d", &num);
// mallocとはvoid*型、型が決まっていないアドレス、char型にするために前に(char *)でキャストしている
// 
    str = (char *) malloc (sizeof(char) * (num+1));
    if(!str){
        printf("メモリが確保できませんでした。\n");
        // 異常終了した場合return 1が返す処理をする
        return 1;
    }

    for ( i = 0; i < num; i++){
        *(str+i) = 'a';
    }
    *(str+num) = '\0';
    printf("%sを用意しました。\n", str);
    free(str);

    return 0;
}