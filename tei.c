#include <stdio.h>
#include <math.h>

int main(void)
{
   int num1;//�ϐ�num1�̐錾�B
   int kaijou = 1;//�K��B
   int number = 30;//�J��Ԃ��񐔁B
   double tei = 1.0;//��e�̐��B

   for(num1 = 1; num1 < number; num1++)//�J��Ԃ��B
   {
   kaijou *= num1;//kaijou�̌v�Z�B
   tei+= 1.0/kaijou;//tei�̌v�Z�B
}
   printf("e��%.5f \n",tei);//(e��)�ƌv�Z����(��̐�)���o�͂���B

return 0;
}
