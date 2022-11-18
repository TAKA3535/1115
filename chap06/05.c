// P157 while文
#include <stdio.h>
int main(void){
    int i = 1;

    while (i <= 5)
    {
        printf("%d番目の繰り返しです。\n", i);
        i++;
    }

    printf("繰り返しが終わりました。\n");
    
    return 0;
}

//上は02.cでやったことと同じ
// #include <stdio.h>
// int main(void)
// {
//     int i;

//     for ( i = 1; i <= 5; i++){
//         printf("%d番目の繰り返しです。\n", i);
//         // 繰り返しのたびに値が1増える
//     }
//     printf("繰り返しが終わりました。\n");

//     return 0;
// }