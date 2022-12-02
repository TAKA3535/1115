#include <stdio.h>
#define NUM 5

int main(void){
    FILE *fp;
    int test[NUM];
    int i, j;
// バイナリファイルを読み込みようにオープン
    fp = fopen("test1.bin", "rb");

    if (fp == NULL){
        printf("ファイルをオープンできませんでした。\n");
        return 1;
    }

    for ( i = 0; i < NUM; i++){
// fread(読み込む領域へのポインタ,データサイズ,個数ファイルポインタ)
        fread(&test[i], sizeof(int), 1, fp);
    }

    for ( j = 0; j < NUM; j++){
        printf("%d\n", test[j]);
    }

    fclose(fp);
    
    return 0;
}