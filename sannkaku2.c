#include <stdio.h>

int main(void)
{
   float num1,num2,num3,num4,num5;//変数num1,num2,num3,num4,num5を宣言する。

   printf("３辺の長さ＝＞");//(三辺の長さ＝＞)を出力させる。

   scanf("%f", &num1);//num1の数字をキーボードから取得する。
   scanf("%f", &num2);//num2の数字をキーボードから取得する。
   scanf("%f", &num3);//num3の数字をキーボードから取得する。

   if (num1+num2 > num3 && num2+num3 > num1 && num3+num1 > num2)//条件式。
   {
   num5 = (num1/2+num2/2+num3/2);//num5の計算。

   num4 = (num5*(num5-num1)*(num5-num2)*(num5-num3));//num4の計算。

   printf("面積＝ %3.2f \n",num5);//(面積＝)とnum5の値を出力する。
   }
   else //その他。
   {
   printf("三角形ではありません.\n");//(三角形ではありません)を出力する。
   }
   return 0;
}
