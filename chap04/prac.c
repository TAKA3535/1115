// P73練習1 
// #include <stdio.h>
// int main(void)
// {
//     int num;
//     printf("あなたは何歳ですか？\n");
//     scanf("%d", &num);
//     printf("あなたは%d歳です。\n", num);

//     return 0;
// }

// 練習2
// #include <stdio.h>
// int main(void)
// {
//     double num;
//     printf("円周率の値はいくつですか？\n");
//     scanf("%lf", &num);
//     printf("円周率の値は%fです。\n", num);

//     return 0;
// }

// 練習３
// #include <stdio.h>
// int main(void)
// {
//     char ch;
//     printf("アルファベットの最初の文字は何ですか？\n");
//     ch = getchar();
//     printf("アルファベットの最初の文字は%cです。\n", ch);

//     return 0;
// }

// 練習４
// #include <stdio.h>
// int main(void)
// {
//     double db1, db2;
//     printf("身長を入力してください。\n");
//     scanf("%lf", &db1);
//     printf("体重を入力してください。\n");
//     scanf("%lf", &db2);
//     printf("身長は%fセンチです。\n", db1);
//     printf("体重は%fキロです。\n", db2);

//     return 0;
// }

// 練習５
#include <stdio.h>
int main(void)
{
    double db1, db2;
    printf("身長と体重を入力してください。\n");
    scanf("%lf", &db1);
    scanf("%lf", &db2);
    printf("身長は%fセンチ:体重は%fキロです\n", db1, db2);

    return 0;
}