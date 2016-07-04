#include <stdio.h>

int main(void)
{
   int num1,num2,turu,kame;//変数num1,num2,turu,kameを宣言する。

   printf("頭の数＝＞");//(頭の数＝＞)を出力する。
   scanf("%d", &num1);//キーボードからnum1の値を取得する。

   printf("足の数＝＞");//(足の数＝＞)を出力する。
   scanf("%d", &num2);//キーボードからnum2の値を取得する。

   kame = (num2/2)-num1;//kameの計算。
   turu = num1-kame;//turuの計算。

   if((num1 == kame+turu) && (num2 == 2*turu+4*kame))//条件式。
   {
   printf("鶴＝%d羽 ",turu);//(鶴＝ 羽)とturuの計算結果を出力する。
   printf("亀＝%d匹 \n",kame);//(亀＝ 匹)とkameの計算結果を出力する。
   }
   else//その他
   {
   printf("計算できません. \n");//(計算できません)を出力する。
   }
return 0;
}
