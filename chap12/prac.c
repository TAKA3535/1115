// P422 練習１
// #include <stdio.h>
// int main(void){
//     int i, j;

//     for ( i = 1; i <= 5; i++){
//         for ( j = 1; j <= 5; j++){
//             printf("%3d", i*j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     FILE *fp;

//     fp = fopen("result.txt", "w");

//     int i, j;

//     if (fp == NULL){
//         printf("ファイルをオープンできませんでした。\n");
//         return 1;
//     }
//     else{
//         printf("ファイルをオープンしました。\n");
//     }

//     for ( i = 1; i <= 5; i++){
//         for ( j = 1; j <= 5; j++){
//             fprintf(fp, "%-4d", i*j);
//         }
//         fprintf(fp, "\n");
//     }
//     printf("ファイルに書き込みました。\n");

//     fclose(fp);
//     printf("ファイルをクローズしました。\n");

//     return 0;
// }

// 練習3
#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fp;
    int i, j;

    if (argc != 2){
        printf("パラメータの数が違います。\n");
        return 1;
    }
    fp = fopen(argv[1], "w");

    if (fp == NULL){
        printf("ファイルをオープンできませんでした。\n");
        return 1;
    }
    else{
        printf("ファイルをオープンしました。\n");
    }

    for ( i = 1; i <= 5; i++){
        for ( j = 1; j <= 5; j++){
            fprintf(fp, "%-4d", i*j);
        }
        fprintf(fp, "\n");
    }
    printf("ファイルに書き込みました。\n");

    fclose(fp);
    
    return 0;
}