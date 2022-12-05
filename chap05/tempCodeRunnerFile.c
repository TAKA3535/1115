#include <stdio.h>
int main(void)
{
    char str;

    printf("A~Cまでのを入力してください。\n");
    scanf("%c", &str);
    // 文字には''をつけるのを忘れない
    if (str == 'A' || str == 'B' || str == 'C'){
        printf("正解です。\n");
    }
    else{
        printf("間違いです。\n");
    }

    return 0;
}