// P162 do ~ while文
#include <stdio.h>
int main(void){
    int i = 1;

    // while (i <= 5)
    // {
    //     printf("%d番目の繰り返しです。\n", i);
    //     i++;
    // }
// while文では繰り返し処理の最初に条件が偽であればブロック内処理されないが、do~while文では最低1回必ずブロック内処理が行われる
    printf("繰り返しが終わりました。\n");
    
    do{
        printf("%d番目の繰り返しです。\n", i);
        i++;
    } while (i <= 5);
    
    return 0;
}