#include <stdio.h>

int main(void)
{
   int a[10]={2,-8,5,-4,6,5,7,-3,-9,1};//int型の値を10個記憶できる配列を宣言
   int num1,num2=0,num3=0,num4=0;//変数num1,num2=0,num3=0,num4=0の宣言

   for(num1=0;num1<10;num1++)//繰り返し(変数num1が0から10となるまで)
   {
   if(a[num1]%2 == 0)num3++;//条件分岐。奇数の場合。(配列名aのnum1の要素数÷2==0)×num3++
   if(a[num1]%2!= 0)num2++;//条件分岐。偶数の場合。(配列名aのnum1の要素数÷2!=0)×num2++
   if(a[num1]<0)num4++;//条件分岐。負の数の場合。(配列名aのnum1の要素数<0)×num4++
   }
   printf("奇数は%dコ \n",num2);//(奇数はnum2コ)の出力
   printf("偶数は%dコ \n",num3);//(偶数はnum3コ)の出力
   printf("負の数は%dコ \n",num4);//(負の数はnum4コ)の出力

return 0;
}
