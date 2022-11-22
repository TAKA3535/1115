// P212 練習１
// #include <stdio.h>
// #define num 5

// int main(void){
//     int test[num];
//     int max;
//     int i,j;
//     // max = 0;

//     printf("テストの点数を入力してください。\n");
//     for ( i = 0; i < num; i++){
//         scanf("%d", &test[i]);
//         if (max < test[i]){
//             max = test[i];
//         }
        
//     }
    
//     for ( j = 0; j < num; j++){
//         printf("%d番目の人の点数は%dです。\n", j+1, test[j]);
//     }

//     printf("最高点は%dです。\n", max);

//     return 0;
// }

// 練習２
// #include <stdio.h>
// #define NUM 5

// int main(void){
//     int test[NUM];
//     int num;
//     int i, j;
//     num = 0;

//     printf("テストの点数を入力してください。\n");
//     for ( i = 0; i < NUM; i++){
//         scanf("%d", &test[i]);
//         if (test[i] >= 70){
//             num++;
//         }
//     }

//     for (j = 0; j < NUM; j++){
//     printf("%d番目の人の点数は%dです。\n", j+1, test[j]);
//     }

//     printf("70点以上の学生は%d人です。\n", num);

//     return 0;
// }

// 練習３
// #include <stdio.h>

// int main(void){
//     char str[100];
//     int i, j;

//     j = 0;

//     printf("文字列を入力してください。\n");
//     scanf("%s", str);

//     for ( i = 0; str[i] != '\0'; i++){
//         j++;
//     }

//     printf("文字列の長さは%dです。\n", j);

//     return 0;
// }

// 練習４
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

// 練習５
// #include <stdio.h>
// int main(void){
//     char str[100];
//     int i;
    
//     printf("文字列を入力してください。\n");
//     scanf("%s", str);

//     for ( i = 0; str[i] != '\0'; i++){
//         if (str[i] == 'a'){
//             str[i] = 'b';
//         }
//     }

//     printf("%sに置き換えました。\n", str);

//     return 0;
// }

