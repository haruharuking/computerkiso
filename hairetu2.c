#include <stdio.h>

int main(void)
{
   int a[9][9];//二次元配列int型の値を9コずつ記憶できる配列を宣言
   int num1,num2;//変数num1,num2の宣言

   for(num1 = 0;num1 <= 8;num1++)//繰り返し(変数num1が0から8未満となるまで)
      {
      for(num2 = 0;num2 <= 8;num2++)//繰り返し(変数num2が0から8未満となるまで)
         {
         a[num1][num2] = (num1+1)*(num2+1);//配列名a要素数num1,num2の二次元配列＝(num1×1)×(num2+1)
         }
      }
   for(num1 = 0;num1 <= 8;num1++)//繰り返し(変数num1が0から8未満となるまで)
      {
      for(num2 = 0;num2 <= 8;num2++)//繰り返し(変数num2が0から8未満となるまで)
         {
   printf("%4d",a[num1][num2]);//変数名a要素数num1,num2の値を出力
         }
   printf("\n");//改行の出力
      }
return 0;
}
