// P347 練習１
// #include <stdio.h>
// // length関数の宣言
// int length(char str[]);

// int main(void){
//     char str[100];
//     int ans;

//     printf("文字列(英数字)を入力してください。\n");
//     scanf("%s", str);

//     ans = length(str);

//     printf("文字列の長さは%dです。\n", ans);

//     return 0;
// }

// int length(char str[]){
//     int i, c;
//     c = 0;

//     for ( i = 0; str[i] != '\0'; i++){
//         c++;
//     }

//     return c;
// }

// ↓は11.cでやった方法、やってることは練習１と同じ
// #include <stdio.h>
// #include <string.h>

// int main(void){
//     char str[100];
    
//     printf("文字列(英数字)を入力してください。\n");
//     scanf("%s", str);

//     printf("文字列の長さは%dです。\n", strlen(str));

//     return 0;
// }

// 練習２　chap08の練習４とやっていることは同じ

#include <stdio.h>

int search(char str[]);

int main(void){
    char str[100];
    int len;

    printf("文字列を入力してください。\n");
    scanf("%s", str);

    len = search(str);

        printf("%sの中にはaは%d個あります。\n", str, len);

    return 0;
}

int search(char str[]){
    int i, j;
    j = 0;

        for ( i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a'){
            j++;
        }
    }
}


// #include <stdio.h>
// int main(void){
//     char str[100];
//     int i, j;
//     j = 0;

//     printf("文字列を入力してください。\n");
//     scanf("%s", str);

//         for ( i = 0; str[i] != '\0'; i++){
//         if (str[i] == 'a'){
//             j++;
//         }
//     }

//     printf("%s[の中にはaは%d個あります。\n", str, j);

//     return 0;
// }