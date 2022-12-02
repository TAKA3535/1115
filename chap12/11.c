#include <stdio.h>
#define NUM 20

int main(void){
    FILE *fp;
    int str1[NUM];
    int str2[NUM];

    fp = fopen("test1.txt", "r");

    if (fp == NULL){
        printf("ファイルをオープンできませんでした。\n");
        return 1;
    }
    else{
        printf("ファイルをオープンしました。\n");
    }
//               20-1
    fgets(str1, NUM-1, fp);
    fgets(str2, NUM-1, fp);
    
    printf("ファイルに書き込まれている文字列は\n");
    printf("%s", str1);
    printf("%s", str2);

    fclose(fp);
    printf("ファイルをクローズしました。\n");

    return 0;
}