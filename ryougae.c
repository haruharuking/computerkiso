#include <stdio.h>

int main(void)
{
   int num1,num2,num3,num4,sum;//変数num1,num2,num3,num4,sumを宣言する。
   num1 = 0;//num1を0とする。
   num2 = 0;//num2を0とする。
   num3 = 0;//num3を0とする。
   num4 = 100;//num4を100とする。
   sum = 0;//sumを0とする。

   printf("50円 10円 5円 1円 \n");//(50円 10円 5円 1円)を出力する。

   for(num1 = 0; num1 <= 2; num1++)//繰り返し。num1を50円として2枚で100円とする。
   {
      for(num2 = 0; num2 <= 10; num2++)//繰り返し。num2を10円として10枚で100円とする。
      {
         for(num3 = 0; num3 <= 20; num3++)//繰り返し。num3を5円として20枚で100円とする。
         {
             for(num4 = 100; num4 >= 0; num4--)//繰り返し。num4を1円玉を100として0枚とする。
             {
                if(num1*50+num2*10+num3*5+num4*1 == 100)//条件分岐。num1が50円、num2が10円、num3が5円、num4が1円、合計100円とする。
                {
                   printf("% d % d % d % d \n",num1,num2,num3,num4);//num1,num2,num3,num4の結果を出力する。

                   sum = sum + 1;//sum = sum + 1とする。sum++としてもできる。
                }
             }
          }
       }
   }
   printf("組み合わせの総数は%d通りです.", sum);//sumの結果を出力する。

return 0;
}
