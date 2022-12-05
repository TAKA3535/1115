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