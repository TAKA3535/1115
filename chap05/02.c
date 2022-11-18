// P129 if~ else if~ else
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
    else if(res == 2){
    // 2を入力すると↓のブロック内の処理が行われる
        printf("2が入力されました。\n");
        printf("2を選択しました。\n");
    }
    else{
    // 1または２以外を入力すると↓のブブロック内の処理が行われる
        printf("1か2を入力してください。\n");
    }
    
    printf("処理を終了します。\n");

    return 0;
}