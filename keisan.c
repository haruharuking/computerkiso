#include <stdio.h>

int main(void)
{
   float num1,num2,num3,num4,num5,num6;//変数num1,num2,num3,num4,num5,num6を宣言する。
   char res;//変数resを宣言する。

   printf("計算式＝＞");//(計算式＝＞)を出力する。
   scanf("%f",&num1);//キーボードからnum1の数字を取得する。
   scanf("%c",&res);//キーボードからresの文字を取得する。
   scanf("%f",&num2);//キーボードからnum2の数字を取得する。

   switch (res){
          case '+'://(+)が入力された場合に処理される。
                 num3 = num1+num2;//num3の計算。
                 printf("%.1f+%.1f=%.1f \n",num1,num2,num3);//足し算の計算式と結果を出力する。
                 break;
          case '-'://(-)が入力された場合に処理される。
                 num4 = num1-num2;//num4の計算。
                 printf("%.1f-%.1f=%.1f \n",num1,num2,num4);//引き算の計算式と結果を出力する。
                 break;
          case '*'://(*)が入力された場合に処理される。
                 num5 = num1*num2;//num5の計算。
                 printf("%.1f*%.1f=%.1f \n",num1,num2,num5);//かけ算の計算式と結果を出力する。
                 break;
          case '/'://(/)が入力された場合に処理される。
                 num6 = num1/num2;//num6の計算。
                 printf("%.1f/%.1f=%.1f \n",num1,num2,num6);//割り算の計算式と結果を出力する。
                 break;
              }
return 0;
}
