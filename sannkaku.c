#include<stdio.h>

int main(void)

{
   int num1,num2,num3;//�ϐ�num1,num2,num3��錾����B

   printf("��Ӂ���");//(��Ӂ���)���o�͂�����B

   scanf("%d" , &num1);//num1�̐������L�[�{�[�h����擾����B

   printf("��������");//(��������)���o�͂�����B

   scanf("%d" , &num2);//num2�̐������L�[�{�[�h����擾����B

   num3 = num1*num2/2;//num3���v�Z����B(num1�~num2��2)

   printf("�ʐ�=%d \n",num3);//(�ʐ�=)��num3�̌��ʂ��o�͂�����B

   return 0;
}
