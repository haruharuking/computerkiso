#include <stdio.h>
#include <math.h>

int main(void)
{
   float a,b,c;//�ϐ�a,b,c��錾����B
   float discriminant;//�ϐ�discriminant��錾����B
   float kai1,kai2;//�ϐ�kai1,kai2��錾����B
   float real,imag;//real,imag��錾����B

   printf("�Q���������̌W��a,b,c����");//(2���������̌W��a,b,c����)���o�͂���B
   scanf("%f",&a);//�L�[�{�[�h����a�̐������擾����B
   scanf("%f",&b);//�L�[�{�[�h����b�̐������擾����B
   scanf("%f",&c);//�L�[�{�[�h����c�̐������擾����B

   discriminant = b*b-4*a*c;//discriminant�̌v�Z�B

   if (discriminant > 0) { //�������B

      kai1 = (-b+sqrt(discriminant))/(2*a);//kai1�̌v�Z�B
      kai2 = (-b-sqrt(discriminant))/(2*a);//kai2�̌v�Z�B

   printf("x=%.2f, %.2f \n",kai1,kai2);//(x=)��kai1,kai2�̌v�Z���ʂ��o�͂���B
   }
   else if (discriminant == 0) { //�������B

      kai1 = kai2 = -b/(2*a);//kai1,kai2�̌v�Z�B

   printf("x=%.2f, %.2f \n",kai1,kai2);//(x=)��kai1,kai2�̌v�Z���ʂ��o�͂���B
   }
   else { //���̑��B

       real = -b/(2*a);//real�̌v�Z�B
       imag = sqrt(-discriminant)/(2*a);//imag�̌v�Z�B

   printf("�����ł�.\n");//(�����ł�.)���o�͂���B
   }
return 0;
}
