// P147 練習１
// #include <stdio.h>
// int main(void)
// {
//     int num1;

//     printf("整数を入力してください。\n");
//     scanf("%d", &num1);

//     if ((num1 % 2) == 0){
//         printf("%dは偶数です。\n", num1);
//     }
//     else{
//         printf("%dは奇数です。\n", num1);
//     }
    
//     return 0;
// }

// 練習2
// #include <stdio.h>
// int main(void)
// {
//     int num1;
//     int num2;

//     printf("2つの整数を入力してください。\n");
//     scanf("%d", &num1);
//     scanf("%d", &num2);

//     if (num1 > num2){
//         printf("%dより%dのほうが大きい値です。\n", num2, num1);
//     }
//     else if (num1 < num2){
//         printf("%dより%dのほうが大きい値です。\n", num1, num2);
//     }
//     else{
//         printf("2つの数は同じ値です。\n");
//     }
    
//     return 0;
// }

// 練習３
// #include <stdio.h>
// int main(void)
// {
//     int num1;

//     printf("0から10までの整数を入力してください。\n");
//     scanf("%d", &num1);

//     // if (0 <= num1 <= 10){の書き方だとダメ見たい
//     if (0 <= num1  && num1 <= 10){
//         printf("正解です。\n");
//     }
//     else{
//         printf("間違いです。\n");
//     }
    
//     return 0;
// }

// 練習４
// #include <stdio.h>
// int main(void)
// {
//     char str;

//     printf("A~Cまでのを入力してください。\n");
//     scanf("%c", &str);
//     // 文字には''をつけるのを忘れない
//     if (str == 'A' || str == 'B' || str == 'C'){
//         printf("正解です。\n");
//     }
//     else{
//         printf("間違いです。\n");
//     }

//     return 0;
// }

// 練習５
#include <stdio.h>
int main(void)
{
    int num1;

    printf("成績を入力してください。\n");
    scanf("%d", &num1);

    if (num1 == 1){
        printf("成績は1です。もっと頑張りましょう\n");
    }
    else if (num1 == 2){
        printf("成績は2です。もう少し頑張りましょう\n");
    }
    else if (num1 == 3){
        printf("成績は3です。さらに上を目指しましょう\n");
    }
    else if (num1 == 4){
        printf("成績は4です。たいへんよくできました\n");
    }
    else if (num1 == 5){
        printf("成績は5です。たいへん優秀です。\n");
    }
    else{
        printf("1~5を入力してください。\n");
    }
    
// switch分だと↓の方法でできる
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