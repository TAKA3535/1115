// 1から100までの数字が偶数であるか、奇数であるか判断するプログラムを作成する
#include <stdio.h>
int main(void)
{
    int i;

    for (i = 1; i <=100; i++){
        if ((i % 2) == 0){
        printf("%dは偶数です。\n", i);
        }
        else{
        printf("%dは奇数です。\n", i);
        }
    }
    return 0;
}