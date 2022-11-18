// P142
#include <stdio.h>
int main(void)
{
    int res;
    char ans;

    printf("何番目を選びますか?\n");
    printf("整数を入力してください。\n");
    scanf("%d", &res);

    // if (res == 1){
    //     ans = 'A';
    // }
    // else
    // {
    //     ans = 'B';
    // }

    // 条件演算子だと上と同じことが↓の方法でできる,「条件 ? 真のとき式1 : 偽のとき式2」P142
    ans = (res==1) ? 'A' : 'B';

    printf("%cコースを選択しました。\n", ans);

    return 0;
}