#include<stdio.h>

int main(void)

{
   int num1,num2,num3,num4,num5;//変数num1,num2,num3,num4,num5を宣言する。

   printf("x＝＞");//(x＝＞)を出力する。

   scanf("%d" , &num1);//num1の数字をキーボードから取得する。

   printf("y＝＞");//(y＝＞)を出力させる。

   scanf("%d" , &num2);//num2の数字をキーボードから取得する。

   printf("z＝＞");//(Z＝＞)を出力させる。

   scanf("%d" , &num3);//num3の数字をキーボードから取得する。

   num4 = num1*num2*num3;//num4を計算する。(num1×num2×num3)

   printf("体積=%d \n",num4);//(体積=)とnum4の結果を出力させる。

   num5 = num1*num2*2+num1*num3*2+num2*num3*2;//num5を計算する。(num1×num2×2＋num1×num3×2＋num2×num3×2)

   printf("表面積=%d \n",num5);//(表面積=)とnum5の結果を出力させる。

   return 0;
}
