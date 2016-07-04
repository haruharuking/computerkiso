#include<stdio.h>

int main(void)

{

   float num1,num2,num3,num4;//変数num1,num2,num3,num4を宣言する。

   printf("Ω１＝＞");//(Ω１＝＞)を出力させる。

   scanf("%f", &num1);//num1の数字をキーボードから取得する。

   printf("Ω２＝＞");//(Ω２＝＞)を出力させる。

   scanf("%f", &num2);//num2の数字をキーボードから取得する。

   num3 = num1+num2;//num3を計算する。(num1＋num2)

   printf("直列接続の合成抵抗(Ω)=%4.2f \n",num3);//(直列接続の合成抵抗(Ω)=)とnum3の結果出力させる。このときnum3は%4.2fにより小数点第２位まで計算する。

   num4 = (num1*num2)/(num1+num2);//num4を計算する。｛(num1×num2)｝÷｛(num1＋num2)｝

   printf("並列接続の合成抵抗(Ω)=%3.2f \n",num4);//(並列接続の合成抵抗(Ω)=)とnum4の結果を出力させる。このときnum4は%3.2fより小数点第２位まで計算する。

   return 0;
}
