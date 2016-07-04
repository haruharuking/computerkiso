#include <stdio.h>

int main(void)
{
  int num1,days;//変数num1,daysの宣言。
      num1=1;//num1を1とする。
      days=1;//daysを1とする。

  while(num1 <= 10000)//繰り返し。
    {
     days++;//days++のブロック内を順に繰り返す。

     num1 = num1*2;//num1の計算。
    }
    printf("1日目に1円、2日目に2円、3日目に4円というように、前日の2倍のおこずかいをもらうとき、一日にもらう額が１万円超えるのは%d日目。 \n",days);
    /*結果の出力*/

return 0;
}
