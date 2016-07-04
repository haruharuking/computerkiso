#include <stdio.h>
#include <math.h>

int main(void)
{
   int num1;//変数num1を宣言する。
   double rad;//変数radを宣言する。

   for(num1 = 0; num1 <= 90; num1 += 1)//繰り返し0度から90度までを1度ずつ変動させる。
   {
   rad = num1*M_PI/180;//rad = num1×円周率(π)÷180の計算。

   printf("sin＝%lf cos＝%lf tan＝%lf \n",sin(rad),cos(rad),tan(rad));//sin,cos,tanの結果を出力する。
   }
return 0;
}
