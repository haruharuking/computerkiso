#include <stdio.h>

int main(void)
{
   int num1,num2,num3;//変数num1,num2,num3を宣言する。

   printf("３つの整数＝＞");//(３つの整数＝＞)を出力する。

   scanf("%d", &num1);//キーボードからnum1の数字を取得する。
   scanf("%d", &num2);//キーボードからnum2の数字を取得する。
   scanf("%d", &num3);//キーボードからnum3の数字を取得する。

   if(num1 >= num2)//条件式。
   if(num1 >= num3)//条件式。
   if(num2 >= num3)//条件式。

   printf("大きい順に表示 %d,%d,%d \n",num1,num2,num3);//(大きい順の表示)とnum1,num2,num3の値を出力する。
   else//その他。
   printf("大きい順に表示 %d,%d,%d \n",num1,num3,num2);//(大きい順の表示)とnum1,num3,num2の値を出力する。

   if(num2 >= num1)//条件式。
   if(num2 >= num3)//条件式。
   if(num1 >= num3)//条件式。

   printf("大きい順に表示 %d,%d,%d \n",num2,num1,num3);//(大きい順に表示)とnum2,num1,num3の値を表示する。
   else//その他。
   printf("大きい順に表示 %d,%d,%d \n", num2,num3,num1);//(大きい順に表示)とnum2,num3,num1の値を表示する。

   if(num3 >= num1)//条件式。
   if(num3 >= num2)//条件式。
   if(num1 >= num2)//条件式。

   printf("大きい順に表示 %d,%d,%d \n", num3,num1,num2);//(大きい順に表示)とnum3,num1,num2の値を表示する。
   else//その他。
   printf("大きい順に表示 %d,%d,%d \n", num3,num2,num1);//(大きい順に表示)とnum3,num2,num1の値を表示する。

   return 0;
}
