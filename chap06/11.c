// swich文の中でbreakを使う
#include <stdio.h>
int main(void){
    int num1;

    printf("成績を入力してください。(1~5)\n");
    scanf("%d", &num1);

    switch (num1){
    case 1:
    case 2:
        printf("もう少し頑張りましょう\n");
        break;
    case 3:
    case 4:
        printf("この調子で頑張りましょう\n");
        break;
    case 5:
        printf("成績は5です。たいへん優秀です。\n");
        break;
    default:
        printf("1~5を入力してください。\n");
        break;
    }
// ↑と↓ではbreakで終了するところが違う
    // switch (num1){
    // case 1:
    //     printf("成績は1です。もっと頑張りましょう\n");
    //     break;
    // case 2:
    //     printf("成績は2です。もう少し頑張りましょう\n");
    //     break;
    // case 3:
    //     printf("成績は3です。さらに上を目指しましょう\n");
    //     break;
    // case 4:
    //     printf("成績は4です。たいへんよくできました\n");
    //     break;
    // case 5:
    //     printf("成績は5です。たいへん優秀です。\n");
    //     break;
    // default:
    //     printf("1~5を入力してください。\n");
    //     break;
    // }
    return 0;
}