#include <stdio.h>

int main(void)
{
   int res;//変数resを宣言する。

   printf("数＝＞");//数＝＞を表示する。
   scanf("%d", &res);//resの数字をキーボードによって取得する。

  if((res % 2) == 0)//ifを用いてresの数字が偶数か確かめる。
     printf("偶数です. \n", res);//偶数ですを表示する。
  else//その他、数字が奇数とする。
     printf("奇数です. \n", res);//奇数ですを表示する。

  return 0;
}
