#include <stdio.h>

int main(void)
{
   int num1,num2,num3;//�ϐ�num1,num2,num3��錾����B

   printf("�R�̐�������");//(�R�̐�������)���o�͂���B

   scanf("%d", &num1);//�L�[�{�[�h����num1�̐������擾����B
   scanf("%d", &num2);//�L�[�{�[�h����num2�̐������擾����B
   scanf("%d", &num3);//�L�[�{�[�h����num3�̐������擾����B

   if(num1 >= num2)//�������B
   if(num1 >= num3)//�������B
   if(num2 >= num3)//�������B

   printf("�傫�����ɕ\�� %d,%d,%d \n",num1,num2,num3);//(�傫�����̕\��)��num1,num2,num3�̒l���o�͂���B
   else//���̑��B
   printf("�傫�����ɕ\�� %d,%d,%d \n",num1,num3,num2);//(�傫�����̕\��)��num1,num3,num2�̒l���o�͂���B

   if(num2 >= num1)//�������B
   if(num2 >= num3)//�������B
   if(num1 >= num3)//�������B

   printf("�傫�����ɕ\�� %d,%d,%d \n",num2,num1,num3);//(�傫�����ɕ\��)��num2,num1,num3�̒l��\������B
   else//���̑��B
   printf("�傫�����ɕ\�� %d,%d,%d \n", num2,num3,num1);//(�傫�����ɕ\��)��num2,num3,num1�̒l��\������B

   if(num3 >= num1)//�������B
   if(num3 >= num2)//�������B
   if(num1 >= num2)//�������B

   printf("�傫�����ɕ\�� %d,%d,%d \n", num3,num1,num2);//(�傫�����ɕ\��)��num3,num1,num2�̒l��\������B
   else//���̑��B
   printf("�傫�����ɕ\�� %d,%d,%d \n", num3,num2,num1);//(�傫�����ɕ\��)��num3,num2,num1�̒l��\������B

   return 0;
}
