// 176 練習１
// #include <stdio.h>
// int main(void){
//     int i;
    
//     printf("1~10までの偶数を出力します。\n");
    
//     for (i = 1; i <= 10; i++){
//         if ((i % 2) == 0){
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }

// 練習２
// #include <stdio.h>
// int main(void){
//     int num1, sum1;

//     while(num1){
//         printf("整数を入力してください。(0で終了)\n");
//         scanf("%d", &num1);
//         sum1 += num1;
//     }
    
//     printf("テストの合計点は%dです。\n", sum1);

//     return 0;
// }

// 練習3
// #include <stdio.h>
// int main(void){
//     int i, j;

//     for ( i = 1; i <= 9; i++){
//         for ( j = 1; j <= 9; j++){
//             printf("%d\t", i*j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 練習４
// #include <stdio.h>
// int main(void){
//     int i, j;

//     for ( i = 1; i <= 5; i++){
//         for ( j = 1; j <= i; j++){
//             printf("*");
//         }
//     printf("\n");
//     }
    
//     return 0;
// }

// 練習５
#include <stdio.h>
int main(void){
    int num1, i;

    printf("2以上の整数を入力してください。\n");
    scanf("%d", &num1);
// ↓のやり方理解できたけど、パッと思いつかなかった...
    if (2 <= num1){
        for ( i = 2; i <= num1; i++){
            if (i == num1){
                printf("%dは素数です。\n", num1);
            }
            else if ((num1 % i) == 0){
                printf("%dは素数ではありません。\n", num1);
                break;
            }
        }
    }
    else{
        printf("2以上の整数を入力してくださいね!!!!!\n");
    }
    
    return 0;
}