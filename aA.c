#include<stdio.h>

int main(void)

{
   char num1,num2;//�ϐ�num1,num2��錾����B

   printf("�p���̏���������͂��Ȃ�������");//(�p���̏���������͂��Ȃ�������)���o�͂�����B

   scanf("%c", &num1);//num1�̕������L�[�{�[�h����擾����B

   num2 = num1-32;//num2���v�Z����B(num1�|32)���́|32�ɂ���ĉp���̏�������啶���̕ϊ�����B 

   printf("�p�啶������%c \n",num2);//(�p�啶������)��num2�̌��ʂ��o�͂���B

   return 0;
}
