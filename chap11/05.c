#include <stdio.h>
// 構造体型struct Carの宣言
typedef struct Car{
    int num;
    double gas;
}Car;

int main(void){
    Car car1 = {1234, 25.5};
    Car car2 = {5678, 50.5};
    
    printf("car1車のナンバーは%d:ガソリン量は%fです。\n",car1.num, car1.gas);
    printf("car2車のナンバーは%d:ガソリン量は%fです。\n",car1.num, car1.gas);

    car2 = car1;

    printf("car1をcar2に代入しました。\n");
    printf("car2車のナンバーは%d:ガソリン量は%fです。\n",car2.num, car2.gas);

    return 0;
}