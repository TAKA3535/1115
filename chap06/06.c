#include <stdio.h>
int main(void){
    int num = 1 ;

    while(num){
        printf("整数を入力してください。(0で終了)\n");
        scanf("%d", &num);
        printf("%dが入力されました。\n", num);
    }
    // P161　C言語では真と偽を内部的には整数値で処理している、0以外の整数値→真、0→偽
    printf("繰り返しが終わりました。\n");

// ↑と↓は同じ
// int num = 0 ;

//     while(!num){
//         printf("整数を入力してください。(0で終了)\n");
//         scanf("%d", &num);
//         printf("%dが入力されました。\n", num);
//     }
    return 0;
}