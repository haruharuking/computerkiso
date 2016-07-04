#include <stdio.h>

int main(void)
{
   int num1,num2;//変数num1,num2の宣言。
   int fact;//変数factの宣言。
   fact = 1;//階乗。

   printf("n＝＞");//(n＝＞)を出力する。
   scanf("%d",&num2);//num2の値をキーボードから取得する。

   for(num1 = 1;num1 <= num2; ++num1)//繰り返し。
    {
    fact = fact*num1;//factの計算。
    }
    printf("%d!=%d \n",num2,fact);//num2,factの結果を出力する。

return 0;
}
