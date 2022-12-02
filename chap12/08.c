// ファイルの基本操作する
#include <stdio.h>

int main(void){
// ファイルポインタ
    FILE *fp;
//  fopenはファイルをオープンする、"test1.tex"はファイル名指定、"w"はオープンモード
// オープンモードの種類P404
    fp = fopen("test1.tex", "w");

    if (fp == NULL){
        printf("ファイルをオープンできませんでした。\n");
        return 1;
    }
    else{
        printf("ファイルをオープンしました。\n");
    }

    fclose(fp);
    printf("ファイルをクローズしました。\n");

    return 0;
}