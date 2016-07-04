#include <stdio.h>

int main(void)
{
    int num[10];//変数名num要素数[10]の宣言
    int a, b, c, d, tmp;//変数a,b,c,d,tmpの宣言
    int max;//変数maxの宣言
	
    printf("並び替え前 : ");//(並び替え : )を出力する
    for(a = 0; a < 10; a++)//繰り返し(変数aが0～10未満となるまで)
    {
        scanf("%d",&num[a]);//num[a]の値をキーボードから取得する
    }
    for(b = 0; b < 9; b++)//繰り返し(変数bが0から9未満となるまで)
    {
         max = num[b];//max = num[b]とする
	 for(c = b + 1; c < 10; c++)//繰り返し(変数cがb＋1～10未満となるまで)
         {
             if (num[c] > max)//条件分岐(num[c]がmaxより大きい場合)
             { 
                 max = num[c];//max最大値じたいを覚えておく。      
                 d = c;//dは最大値が入ってるnumの何番目かを覚えておく。
             }
          }
          tmp = num[b];//bを保存
          num[b] = num[d];//bにmaxをいれて入替え。
          num[d] = tmp;//dにbをもどす。
    }
        printf("並び替え後 :");//(並び替え後 : )を出力する
	for(a = 0; a < 10; a++)//繰り返し(変数aが0～10未満となるまで)
        {
        printf("% d",num[a]);//num[a]を出力する
	}
return 0;
}
