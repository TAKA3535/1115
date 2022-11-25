// 文字列strのNULL文字を除く長さ返します length
size_t strlen(const char *str);
// 文字列str2をstr1の領域にコピーしてstr1を返します copy
char *strcpy(char *restrict str1, const char *restrict str2);
// 文字列str2を文字列str1の末尾に追加してstr1を返します concat~
char *strcat(char *restrict str1, const char *restrict str2);
// 文字列str1と文字列str2を比較し、     compare
// 文字列str1が文字列str2より小さいとき:負の値
// 文字列str1が文字列str2と等しいとき:0
// 文字列str1が文字列str2より大きいとき:正の値
int strcmp(const char *str1, const char *str2); 
