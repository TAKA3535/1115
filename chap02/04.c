#include <stdio.h>
int main(void)
{
    printf("%cは文字です。\n", 'A');
    printf("%dは整数です。\n", 123);
    printf("%fは少数です。\n", 10.5);
    // ""で囲ったものは文字列、''で囲ったものは文字

    printf("円記号を表示します。:%c\n", '\\');
    // printf("円記号を表示します。:\\\n");

    printf("アポストロフィを表示します。:%c\n", '\'');
    // printf("アポストロフィを表示します。:\'\n");


    return 0;
}
