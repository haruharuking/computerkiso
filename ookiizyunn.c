#include <stdio.h>

int main(void)
{
   int num1,num2;//変数num1,num2を宣言します。

   printf("２つの整数＝＞");//２つの整数＝＞を出力します。
   scanf("%d", &num1);//num1の数字をキーボードから取得します。
   scanf("%d", &num2);//num2の数字をキーボードから取得します。

   if (num1 < num2)//ifを用いてnum1とnum2を比較する。
   {
      printf("大きい順に表示 %d%d \n",num2,num1);//大きい順に表示とnum2,num1を出力します。
   }
   else//その他。 
   {

      printf("大きい順に表示 %d%d \n",num1,num2);//大きい順に表示とnum1,num2を出力します。
   }

   return 0;
}
