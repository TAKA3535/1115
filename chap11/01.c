// いろいろな型、構造体の基本P350~
#include <stdio.h>
// 構造体型struct Carの宣言
struct Car{
    int num;
    double gas;
};

int main(void){
    struct Car car1;

    car1.num = 1234;
    car1.gas = 25.5;
    
    printf("車のナンバーは%d:ガソリン量は%fです。\n",car1.num, car1.gas);

    return 0;
}