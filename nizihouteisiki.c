#include <stdio.h>
#include <math.h>

int main(void)
{
   float a,b,c;//変数a,b,cを宣言する。
   float discriminant;//変数discriminantを宣言する。
   float kai1,kai2;//変数kai1,kai2を宣言する。
   float real,imag;//real,imagを宣言する。

   printf("２次方程式の係数a,b,c＝＞");//(2次方程式の係数a,b,c＝＞)を出力する。
   scanf("%f",&a);//キーボードからaの数字を取得する。
   scanf("%f",&b);//キーボードからbの数字を取得する。
   scanf("%f",&c);//キーボードからcの数字を取得する。

   discriminant = b*b-4*a*c;//discriminantの計算。

   if (discriminant > 0) { //条件式。

      kai1 = (-b+sqrt(discriminant))/(2*a);//kai1の計算。
      kai2 = (-b-sqrt(discriminant))/(2*a);//kai2の計算。

   printf("x=%.2f, %.2f \n",kai1,kai2);//(x=)とkai1,kai2の計算結果を出力する。
   }
   else if (discriminant == 0) { //条件式。

      kai1 = kai2 = -b/(2*a);//kai1,kai2の計算。

   printf("x=%.2f, %.2f \n",kai1,kai2);//(x=)とkai1,kai2の計算結果を出力する。
   }
   else { //その他。

       real = -b/(2*a);//realの計算。
       imag = sqrt(-discriminant)/(2*a);//imagの計算。

   printf("虚根です.\n");//(虚根です.)を出力する。
   }
return 0;
}
