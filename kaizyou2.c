#include <stdio.h>

int main(void)
{
   int num1,num2;//�ϐ�num1,num2�̐錾�B
   int fact = 1;//�K��B

   printf("n����");//(n����)���o�͂���B
   scanf("%d",&num2);//num2�̒l���L�[�{�[�h����擾����B

   while(num2>1)//�J��Ԃ��B
     {
     for(num1 = 1; num1 <= num2; ++num1)//�J��Ԃ��B
     {
      fact = fact*num1;//fact�̌v�Z�B
     }
     printf("%d!=%d \n",num2,fact);//num2,fact�̌��ʂ��o�͂���B

     fact = 1;//fact���P�ɂ���B

     printf("n����");//(n����)���o�͂���B
     scanf("%d",&num2);//num2�̒l���L�[�{�[�h����o�͂���B
   }

return 0;
}
