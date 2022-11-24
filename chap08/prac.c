// 練習１　P270
// #include <stdio.h>

// int min(int x, int y){
//     if (x < y){
//         return x;
//     }
//     else{
//         return y;
//     }
// }

// int main(void){
//     int num1, num2, ans;

//     printf("1番目の整数を入力してください。\n");
//     scanf("%d", &num1);

//     printf("2番目の整数を入力してください。\n");
//     scanf("%d", &num2);
    
//     ans = min(num1, num2);
//     printf("最小値は%dです。\n", ans);

//     return 0;
// }

// 練習２
// #include <stdio.h>

// int square(int x){
//     return x*x;
// }

// int main(void){
//     int num, ans;

//     printf("整数を入力してください。\n");
//     scanf("%d", &num);

//     ans = square(num);
//     printf("%dの2乗は%dです。\n", num, ans);

//     return 0;
// }

// 練習３
// #include <stdio.h>

// int power(int x, int y){
//     int i;
//     int pow = 1;

//     for ( i = 1; i <= y ; i++){
//         pow = pow * x;
//     }

//     return pow;
// }

// int main(void){
//     int num1, num2, ans;

//     printf("1番目の整数を入力してください。\n");
//     scanf("%d", &num1);

//     printf("2番目の整数を入力してください。\n");
//     scanf("%d", &num2);
    
//     ans = power(num1, num2);
//     printf("%dの%d乗は%dです。\n", num1, num2, ans);

//     return 0;
// }

// 練習４
// #include <stdio.h>
// #define SQUARE(x)(x * x)

// int main(void){
//     int num, ans;

//     printf("整数を入力してください。\n");
//     scanf("%d", &num);

//     ans = SQUARE(num);
//     printf("%dの2乗は%dです。\n", num, ans);

//     return 0;
// }

// 練習５
#include <stdio.h>
#include "myfunc.c"

int main(void){
    int num1, num2, ans;

    printf("1番目の整数を入力してください。\n");
    scanf("%d", &num1);

    printf("2番目の整数を入力してください。\n");
    scanf("%d", &num2);
    
    ans = power(num1, num2);
    printf("%dの%d乗は%dです。\n", num1, num2, ans);

    return 0;
}