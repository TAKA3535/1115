// #include <stdio.h>

// int main(void){
//     int i;

//     for ( i = 0; i <= 10; i++){
//         printf("%d", i);
//     }
//     printf("\n");
//     for ( i = 0; i <= 10; i++){
//         // 3文字幅で出力
//         printf("%3d", i);
//     }
//     printf("\n");
//         for ( i = 0; i <= 10; i++){
//             // -をつけると左寄せで出力
//         printf("%-3d", i);
//     }
//     return 0;
// }
// 6章の練習問題の/tを-4dに変更
#include <stdio.h>
int main(void){
    int i, j;

    for ( i = 1; i <= 20; i++){
        for ( j = 1; j <= 20; j++){
            printf("%-4d", i*j);
        }
        printf("\n");
    }

    return 0;
}
