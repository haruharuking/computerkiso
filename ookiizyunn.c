#include <stdio.h>

int main(void)
{
   int num1,num2;//�ϐ�num1,num2��錾���܂��B

   printf("�Q�̐�������");//�Q�̐����������o�͂��܂��B
   scanf("%d", &num1);//num1�̐������L�[�{�[�h����擾���܂��B
   scanf("%d", &num2);//num2�̐������L�[�{�[�h����擾���܂��B

   if (num1 < num2)//if��p����num1��num2���r����B
   {
      printf("�傫�����ɕ\�� %d%d \n",num2,num1);//�傫�����ɕ\����num2,num1���o�͂��܂��B
   }
   else//���̑��B 
   {

      printf("�傫�����ɕ\�� %d%d \n",num1,num2);//�傫�����ɕ\����num1,num2���o�͂��܂��B
   }

   return 0;
}
