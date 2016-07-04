#include <stdio.h>
#include <math.h>

int main(void)
{
   int num1,r,h,n;//変数num1,r,h,nを宣言する。
   double s,v,V;//変数s,v,Vを宣言する。

   printf("底辺の半径 r＝＞",r);//(底辺の半径 r＝＞)を出力する。
   scanf("%d",&r);//rの値をキーボードから取得する。
   printf("高さ h＝＞",h);//(高さ h＝＞)を出力する。
   scanf("%d",&h);//hの値をキーボードから取得する。
   printf("分割数 n＝＞",n);//(分割数 n＝＞)を出力する。
   scanf("%d",&n);//nの値をキーボードから取得する。

   for(num1 = 1; num1 < n; num1++)//繰り返し。
   {

   s = (double)(n-num1)/n*r;//sの計算。
   v = (double)s*s*M_PI*h/n;//vの計算。
   V += v;//V += vとする。
   }

   printf("体積＝%.2lf \n",V);//(体積＝)とVの値を出力する。

return 0;
}
