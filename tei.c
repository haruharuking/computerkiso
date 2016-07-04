#include <stdio.h>
#include <math.h>

int main(void)
{
   int num1;//変数num1の宣言。
   int kaijou = 1;//階乗。
   int number = 30;//繰り返す回数。
   double tei = 1.0;//底eの数。

   for(num1 = 1; num1 < number; num1++)//繰り返し。
   {
   kaijou *= num1;//kaijouの計算。
   tei+= 1.0/kaijou;//teiの計算。
}
   printf("e＝%.5f \n",tei);//(e＝)と計算結果(底の数)を出力する。

return 0;
}
