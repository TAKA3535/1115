// P386 練習１
// typedefを使う
// #include <stdio.h>
// // 構造体型struct Carの宣言
// typedef struct Person{
//     int age;
//     double weight;
//     double height;
// }Per;

// int main(void){
//     Per p1 = {0, 0.0, 0.0};
//     Per p2 = {0, 0.0, 0.0};

//     printf("年齢を入力してください。\n");
//     scanf("%d", &p1.age);

//     printf("体重を入力してください。\n");
//     scanf("%lf", &p1.weight);

//     printf("身長を入力してください。\n");
//     scanf("%lf", &p1.height);

//     printf("年齢を入力してください。\n");
//     scanf("%d", &p2.age);

//     printf("体重を入力してください。\n");
//     scanf("%lf", &p2.weight);

//     printf("身長を入力してください。\n");
//     scanf("%lf", &p2.height);

//     printf("体重%d:体重%f:身長%fです。\n", p1.age, p1.weight, p1.height);
//     printf("体重%d:体重%f:身長%fです。\n", p2.age, p2.weight, p2.height);

//     return 0;
// }


// // 練習２
// #include <stdio.h>
// // 構造体型struct Carの宣言
// typedef struct Person{
//     int age;
//     double weight;
//     double height;
// } Per;

// int main(void){
//     Per ps[2];
//     int i, j;

//     for (i = 0; i < 2; i++){
//         printf("年齢を入力してください。\n");
//         scanf("%d", &ps[i].age);

//         printf("体重を入力してください。\n");
//         scanf("%lf", &ps[i].weight);

//         printf("身長を入力してください。\n");
//         scanf("%lf", &ps[i].height);
//     }

//     for ( j = 0; j < 2; j++){
//         printf("体重%d:体重%f:身長%fです。\n", ps[j].age, ps[j].weight, ps[j].height);

//     }

//     return 0;
// }

// 練習３
#include <stdio.h>
// 構造体型struct Carの宣言
typedef struct Person{
    int age;
    double weight;
    double height;
}Per;
// show関数の宣言
void aging(Per *p);

int main(void){
    Per p1 = {0, 0.0, 0.0};
    Per p2 = {0, 0.0, 0.0};

    printf("年齢を入力してください。\n");
    scanf("%d", &p1.age);

    printf("体重を入力してください。\n");
    scanf("%lf", &p1.weight);

    printf("身長を入力してください。\n");
    scanf("%lf", &p1.height);

    printf("年齢を入力してください。\n");
    scanf("%d", &p2.age);

    printf("体重を入力してください。\n");
    scanf("%lf", &p2.weight);

    printf("身長を入力してください。\n");
    scanf("%lf", &p2.height);

    printf("年齢%d:体重%f:身長%fです。\n", p1.age, p1.weight, p1.height);
    printf("年齢%d:体重%f:身長%fです。\n", p2.age, p2.weight, p2.height);

    aging(&p1);
    aging(&p2);


    printf("1年経過しました。\n");
    printf("年齢%d:体重%f:身長%fです。\n", p1.age, p1.weight, p1.height);
    printf("年齢%d:体重%f:身長%fです。\n", p2.age, p2.weight, p2.height);

    return 0;
}
// show関数の定義
void aging(Per *p){
    p->age++;
}