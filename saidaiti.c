#include <stdio.h>

int main(void)
{
   int num1,num2,num3,max;//変数num1,num2,num3,maxを宣言する。

   printf("３つの数＝＞");//３つの数＝＞を出力する。
   scanf("%d", &num1);//num1の数字をキーボードによって取得する。
   scanf("%d", &num2);//num2の数字をキーボードによって取得する。
   scanf("%d", &num3);//num3の数字をキーボードによって取得する。

   if (num1 > num2)//ifを用いてnum1とnum2を比較します。
   {
      max = num1;//maxの値をnum1とする。
   }
   else//その他。
   {
      max = num2;//maxの値をnum2とする。
   }
   if (num3 > max)//ifを用いてnum3とmaxを比較する。
   {
      max = num3;//maxの値をnum3とする。
   }
   printf("最大値＝%d \n", max);//最大値＝%dを出力します。

   return 0;
}
