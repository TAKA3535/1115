#include <stdio.h>
int main(void)
{
    int num1;
    int i;

    printf("いくつ*を出力しますか？\n");
    scanf("%d", &num1);

    for ( i = 1; i <=num1; i++){
        printf("*");
    }

    printf("\n");
    
    return 0;
}