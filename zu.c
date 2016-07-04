#include <stdio.h>

int main(void)
{
   int a,b,c;//変数a,b,cの宣言。

   for(a=1; a<=5; a++)//繰り返し。
     {
     for(b=0; b<=5-a; b++)//繰り返し(左側のスペース数)。
     printf(" ");//スペースの出力。
      for(b=1; b<=a*2-1; b++)//繰り返し(*の数)。
     printf("*");//*の出力。
     printf("\n");//改行の出力。
    
  }
return 0;
}
