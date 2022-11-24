//  max関数の定義,関数の定義を別ファイルに記述する
int max(int x, int y){
    if (x > y){
        return x;
    }
    else{
        return y;
    }
}

// P270　練習５
int power(int x, int y){
    int i;
    int pow = 1;

    for ( i = 1; i <= y ; i++){
        pow = pow * x;
    }

    return pow;
}