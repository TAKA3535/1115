// P166 for文　if文組み合わせ
#include <stdio.h>
int main(void){
    int i, j ,ch;

    ch = 0;

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 4; j++){
            if (ch == 0){
                printf("ほげ");
                ch = 1;
            }
            else{
                printf("hoge");
                ch = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}