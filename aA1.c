#include <stdio.h>

int main(void)
{
   char num1,num2;

   printf("���͕�������");
   scanf("%c", &num1);

   if (num1 >= "A" && num1 <= "Z")
    {
       num2 = num1 - "A" + "a";
       printf("�����u%c�v�͑啶���ł�.�������́u%c�v�ł�.", num1,num2);
    }
    else if(num1 >= "a" && num1 <= "z")
    {
       num2 = num1 - "a" + "A";
       printf("�����u%c�v�͏������ł�.�啶���́u%c�v�ł�.", num1,num2);
    }
    else
    {
       printf("�A���t�@�x�b�g�ȊO�ł�.\n");
    }
    return 0;
}
