#include <stdio.h>

int main(void)
{
   int a,b,c,num1;//変数a,b,c,num1を宣言する。

   printf("数値a＝＞");//(数値a＝＞)を出力する。
   scanf("%d",&a);//aの値をキーボードから取得する。
   printf("数値b＝＞");//(数値b＝＞)を出力する。
   scanf("%d",&b);//bの値をキーボードから取得する。

   if(a<b)//条件分岐a>bを確認。
   {
     num1 = a;//num1=aとする。
     a = b;//a=bとする。
     b = num1;//b=num1とする。
   }//ユークリッドの互除法
     c = a % b;//c = a÷bの計算。
   while(c!= 0)//繰り返し。
   {
     a = b;//a=bとする。
     b = c;//b=cとする。
     c = a % b;//c=a÷bの計算。
   }
   printf("最大公約数＝ %d \n",b);//(最大公約数＝＞)とbの値の結果を出力する。

return 0;
}
