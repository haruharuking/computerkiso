#include<stdio.h>

int main(void)

{
   int num1,num2,num3;//変数num1,num2,num3を宣言する。

   printf("数＝＞");//(数＝＞)を出力させる。

   scanf("%d" , &num1);//num1の数字をキーボードから取得する。

   num2 = (num1%100000)/1000;//num2を計算する。(num1%100000)÷1000によって上２桁を計算する。

   printf("上２桁=%d\n",num2);//(上２桁=)とnum2の結果を出力させる。

   num3 = (num1%100000)%1000;//num3を計算する。(num1%100000)%1000によって下３桁を計算する。

   printf("下３桁=%d\n",num3);//(下３桁=)とnum3の結果をを出力させる。

   return 0;
}
