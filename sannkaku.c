#include<stdio.h>

int main(void)

{
   int num1,num2,num3;//変数num1,num2,num3を宣言する。

   printf("底辺＝＞");//(底辺＝＞)を出力させる。

   scanf("%d" , &num1);//num1の数字をキーボードから取得する。

   printf("高さ＝＞");//(高さ＝＞)を出力させる。

   scanf("%d" , &num2);//num2の数字をキーボードから取得する。

   num3 = num1*num2/2;//num3を計算する。(num1×num2÷2)

   printf("面積=%d \n",num3);//(面積=)とnum3の結果を出力させる。

   return 0;
}
