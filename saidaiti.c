#include <stdio.h>

int main(void)
{
   int num1,num2,num3,max;//�ϐ�num1,num2,num3,max��錾����B

   printf("�R�̐�����");//�R�̐��������o�͂���B
   scanf("%d", &num1);//num1�̐������L�[�{�[�h�ɂ���Ď擾����B
   scanf("%d", &num2);//num2�̐������L�[�{�[�h�ɂ���Ď擾����B
   scanf("%d", &num3);//num3�̐������L�[�{�[�h�ɂ���Ď擾����B

   if (num1 > num2)//if��p����num1��num2���r���܂��B
   {
      max = num1;//max�̒l��num1�Ƃ���B
   }
   else//���̑��B
   {
      max = num2;//max�̒l��num2�Ƃ���B
   }
   if (num3 > max)//if��p����num3��max���r����B
   {
      max = num3;//max�̒l��num3�Ƃ���B
   }
   printf("�ő�l��%d \n", max);//�ő�l��%d���o�͂��܂��B

   return 0;
}
