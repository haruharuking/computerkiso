#include<stdio.h>

int main(void)

{
   int num1,num2,num3;//�ϐ�num1,num2,num3��錾����B

   printf("������");//(������)���o�͂�����B

   scanf("%d" , &num1);//num1�̐������L�[�{�[�h����擾����B

   num2 = (num1%100000)/1000;//num2���v�Z����B(num1%100000)��1000�ɂ���ď�Q�����v�Z����B

   printf("��Q��=%d\n",num2);//(��Q��=)��num2�̌��ʂ��o�͂�����B

   num3 = (num1%100000)%1000;//num3���v�Z����B(num1%100000)%1000�ɂ���ĉ��R�����v�Z����B

   printf("���R��=%d\n",num3);//(���R��=)��num3�̌��ʂ����o�͂�����B

   return 0;
}
