#include<stdio.h>

int main(void)

{

   float num1,num2,num3,num4;//�ϐ�num1,num2,num3,num4��錾����B

   printf("���P����");//(���P����)���o�͂�����B

   scanf("%f", &num1);//num1�̐������L�[�{�[�h����擾����B

   printf("���Q����");//(���Q����)���o�͂�����B

   scanf("%f", &num2);//num2�̐������L�[�{�[�h����擾����B

   num3 = num1+num2;//num3���v�Z����B(num1�{num2)

   printf("����ڑ��̍�����R(��)=%4.2f \n",num3);//(����ڑ��̍�����R(��)=)��num3�̌��ʏo�͂�����B���̂Ƃ�num3��%4.2f�ɂ�菬���_��Q�ʂ܂Ōv�Z����B

   num4 = (num1*num2)/(num1+num2);//num4���v�Z����B�o(num1�~num2)�p���o(num1�{num2)�p

   printf("����ڑ��̍�����R(��)=%3.2f \n",num4);//(����ڑ��̍�����R(��)=)��num4�̌��ʂ��o�͂�����B���̂Ƃ�num4��%3.2f��菬���_��Q�ʂ܂Ōv�Z����B

   return 0;
}
