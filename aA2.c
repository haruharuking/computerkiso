#include <stdio.h>

int main(void)
{
   char num1;//�ϐ�num1��錾����B

   printf("���͕�������");
   scanf("%c", &num1);//�L�[�{�[�h���當�����擾����B

   if (num1 >=65 && num1 <=90)//�啶���̃A���t�@�x�b�g�͈̔́B
   {
   num1 = num1+32;//�啶���̃A���t�@�x�b�g+32=�������̃A���t�@�x�b�g�B

   printf("�����u%c�v�͏������ł�. %c \n",num1);//�����u%c�v�͏������ł�.�ƌ��ʂ��o�͂���B
   }
   else if (num1 >= 97 && num1 <=122)//�������̃A���t�@�x�b�g�͈̔́B
   {
   num1 = num1-32;//�������̃A���t�@�x�b�g-32=�啶���̃A���t�@�x�b�g�B

   printf("�����u%c�v�͑啶���ł�. %c \n",num1);//�����u%c�v�͑啶���ł�.�ƌ��ʂ��o�͂���B
   }
   else//���̑��̏ꍇ�B
   {
   printf("�A���t�@�x�b�g�ȊO�ł�.\n");//�A���t�@�x�b�g�ȊO�ł�.���o�͂���B
   }

   return 0;
}
