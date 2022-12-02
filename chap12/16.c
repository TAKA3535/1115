// コマンドライン引数を使う
#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fp;
    int ch;

    if (argc != 2){
        printf("パラメータの数が違います。\n");
        return 1;
    }
    fp = fopen(argv[1], "r");

    if (fp == NULL){
        printf("ファイルをオープンできませんでした。\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }

    fclose(fp);
    
    return 0;
}
//1. coderun実行、もしくはターミナル「.\16.c myfile.txt」実行で16.exeファイルが生成
//2. ターミナルで「.\16.exe myfile.txt」を実行 