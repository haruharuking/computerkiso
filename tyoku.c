#include<stdio.h>

int main(void)

{
   int num1,num2,num3,num4,num5;//�ϐ�num1,num2,num3,num4,num5��錾����B

   printf("x����");//(x����)���o�͂���B

   scanf("%d" , &num1);//num1�̐������L�[�{�[�h����擾����B

   printf("y����");//(y����)���o�͂�����B

   scanf("%d" , &num2);//num2�̐������L�[�{�[�h����擾����B

   printf("z����");//(Z����)���o�͂�����B

   scanf("%d" , &num3);//num3�̐������L�[�{�[�h����擾����B

   num4 = num1*num2*num3;//num4���v�Z����B(num1�~num2�~num3)

   printf("�̐�=%d \n",num4);//(�̐�=)��num4�̌��ʂ��o�͂�����B

   num5 = num1*num2*2+num1*num3*2+num2*num3*2;//num5���v�Z����B(num1�~num2�~2�{num1�~num3�~2�{num2�~num3�~2)

   printf("�\�ʐ�=%d \n",num5);//(�\�ʐ�=)��num5�̌��ʂ��o�͂�����B

   return 0;
}
