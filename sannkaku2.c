#include <stdio.h>

int main(void)
{
   float num1,num2,num3,num4,num5;//�ϐ�num1,num2,num3,num4,num5��錾����B

   printf("�R�ӂ̒�������");//(�O�ӂ̒�������)���o�͂�����B

   scanf("%f", &num1);//num1�̐������L�[�{�[�h����擾����B
   scanf("%f", &num2);//num2�̐������L�[�{�[�h����擾����B
   scanf("%f", &num3);//num3�̐������L�[�{�[�h����擾����B

   if (num1+num2 > num3 && num2+num3 > num1 && num3+num1 > num2)//�������B
   {
   num5 = (num1/2+num2/2+num3/2);//num5�̌v�Z�B

   num4 = (num5*(num5-num1)*(num5-num2)*(num5-num3));//num4�̌v�Z�B

   printf("�ʐρ� %3.2f \n",num5);//(�ʐρ�)��num5�̒l���o�͂���B
   }
   else //���̑��B
   {
   printf("�O�p�`�ł͂���܂���.\n");//(�O�p�`�ł͂���܂���)���o�͂���B
   }
   return 0;
}
