#include <stdio.h>

int main(void){
    FILE *fp;

    fp = fopen("test1.txt", "w");

    if (fp == NULL){
        printf("ファイルをオープンできませんでした。\n");
        return 1;
    }
    else{
        printf("ファイルをオープンしました。\n");
    }
// test1.txtファイルに出力
    fputs("HELLO!\n", fp);
    fputs("Goodbye!\n", fp);
    printf("ファイルに書き込みました。\n");

    fclose(fp);
    printf("ファイルをクローズしました。\n");

    return 0;
}