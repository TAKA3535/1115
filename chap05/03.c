// swich文P133

// P129 if~ else if~ else
#include <stdio.h>
int main(void)
{
    int res;

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    switch (res){
    case 1:
        printf("1が入力されました。\n");
        printf("1を選択しました。\n");
        break;
    case 2:
        printf("2が入力されました。\n");
        printf("2を選択しました。\n");
        break;
    default:
        printf("1か2を入力してください。\n");
        break;
    }

    printf("処理を終了します。\n");

    return 0;
}