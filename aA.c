#include<stdio.h>

int main(void)

{
   char num1,num2;//変数num1,num2を宣言する。

   printf("英字の小文字を入力しなさい＝＞");//(英字の小文字を入力しなさい＝＞)を出力させる。

   scanf("%c", &num1);//num1の文字をキーボードから取得する。

   num2 = num1-32;//num2を計算する。(num1－32)この－32によって英字の小文字を大文字の変換する。 

   printf("英大文字＝＞%c \n",num2);//(英大文字＝＞)とnum2の結果を出力する。

   return 0;
}
