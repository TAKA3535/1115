// if文 118~
#include <stdio.h>
int main(void)
{
    int res;

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    if (res == 1){
    // 1を入力すると↓のブロック内の処理が行われる
        printf("1が入力されました。\n");
        printf("1を選択しました。\n");
    }
    else{
    // 1以外を入力すると↓のブロック内の処理が行われる
        printf("1以外が入力されました。\n");
    }
    
    printf("処理を終了します。\n");

    return 0;
}