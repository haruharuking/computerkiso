#include <stdio.h>
#include <math.h>

int main(void)
{
   int num1;//�ϐ�num1��錾����B
   double rad;//�ϐ�rad��錾����B

   for(num1 = 0; num1 <= 90; num1 += 1)//�J��Ԃ�0�x����90�x�܂ł�1�x���ϓ�������B
   {
   rad = num1*M_PI/180;//rad = num1�~�~����(��)��180�̌v�Z�B

   printf("sin��%lf cos��%lf tan��%lf \n",sin(rad),cos(rad),tan(rad));//sin,cos,tan�̌��ʂ��o�͂���B
   }
return 0;
}
