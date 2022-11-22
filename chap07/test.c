/*
 * C言語のサンプルプログラム - 
 * - 配列に格納した数値を昇順ソート -
 */
// #include <stdio.h>
  
// int main(void)
// {
 
//   int i, j, tmp;
 
//   /* 数値を格納する配列 */
//   int number[100];
 
//   /* 数値の総数を入力 */
//   int total;
//   printf("入力する数値の総数 = ");
//   scanf("%d", &total);
 
//   /* 配列に格納する数値を入力 */
//   printf("%d個の数値を入力 \n", total);
//   for (i=0; i<total; ++i)
//     scanf("%d", &number[i]);
 
//   /* 数値を昇順にソート */
//   for (i=0; i<total; ++i) {
//     for (j=i+1; j<total; ++j) {
//       if (number[i] > number[j]) {
//         tmp =  number[i];
//         number[i] = number[j];
//         number[j] = tmp;
//       }
//     }
//   }
 
//   /* 昇順ソートした数値を出力 */
//   printf("昇順ソートした数値\n");
//   for (i=0; i<total; ++i)
//     printf("%d\n", number[i]);
// }


// 昇順ソート　https://monozukuri-c.com/langc-funclist-bubblesort/
// #include <stdio.h>

// int main(void)
// {
// 	int i, j;
// 	int num[5] = {7, 1, 3, 8, 5};
// 	int tmp;

// 	//	昇順ソートのプログラム
// 	for (i = 0; i < 5; i++)
// 	{
// 		for (j = i + 1; j < 5; j++)
// 		{
// 			if (num[i] > num[j])
// 			{
// 				tmp = num[i];
// 				num[i] = num[j];
// 				num[j] = tmp;
// 			}
// 		}
// 	}

// 	//	並べ替え結果の表示
// 	for (i=0 ; i < 5 ; i++)
// 	{
// 		printf("%d \n", num[i]);
// 	}

// 	return 0;
// }

// 降順ソート
#include <stdio.h>

int main(void)
{
	int i, j;
	int num[5] = {7, 1, 3, 8, 5};
	int tmp;

	//	降順ソートのプログラム
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (num[i] < num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	//	並べ替え結果の表示
	for (i=0 ; i < 5 ; i++)
	{
		printf("%d \n", num[i]);
	}

	return 0;
}