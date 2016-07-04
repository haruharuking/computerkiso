#include <stdio.h>

int main(void)
{
   char num1,num2;

   printf("入力文字＝＞");
   scanf("%c", &num1);

   if (num1 >= "A" && num1 <= "Z")
    {
       num2 = num1 - "A" + "a";
       printf("文字「%c」は大文字です.小文字は「%c」です.", num1,num2);
    }
    else if(num1 >= "a" && num1 <= "z")
    {
       num2 = num1 - "a" + "A";
       printf("文字「%c」は小文字です.大文字は「%c」です.", num1,num2);
    }
    else
    {
       printf("アルファベット以外です.\n");
    }
    return 0;
}
