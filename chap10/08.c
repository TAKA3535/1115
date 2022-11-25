// ポインタで文字列を出力する
#include <stdio.h>

int main(void){
    char *str = "Hello";

    printf("文字列は%sです。\n", str);

    return 0;
}

// ７章は↓のやり方で出力していた
// #include <stdio.h>

// int main(void){
//     char str[] = "Hello";

//     printf("文字列は%sです。\n", str);

//     return 0;
// }