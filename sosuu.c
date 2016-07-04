#include <stdio.h>

int main(void)
{
   int num1,num2;//変数num1,num2を宣言する。
   int num3 = 0;//判定。

   printf("2以上の数を入力してください＝＞");//(2以上の数を入力してください＝＞)を出力する。
   scanf("%d",&num2);//num2の値をキーボードから取得する。

   for(num1 = 2; num1 < num2; ++num1)//繰り返し。素数かどうかを判定。
   {
   if(num2 % num1 == 0)//条件分岐
   {
      num3 = 1;//num3を1とする。
   break;
   }
   }

   if(num3 == 0)//条件分岐。
    printf("%dは素数です. \n",num2);
   else//その他。
    printf("%dは素数ではありません。\n",num2);//num2の結果を出力する。

return 0;
}
