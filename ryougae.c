#include <stdio.h>

int main(void)
{
   int num1,num2,num3,num4,sum;//�ϐ�num1,num2,num3,num4,sum��錾����B
   num1 = 0;//num1��0�Ƃ���B
   num2 = 0;//num2��0�Ƃ���B
   num3 = 0;//num3��0�Ƃ���B
   num4 = 100;//num4��100�Ƃ���B
   sum = 0;//sum��0�Ƃ���B

   printf("50�~ 10�~ 5�~ 1�~ \n");//(50�~ 10�~ 5�~ 1�~)���o�͂���B

   for(num1 = 0; num1 <= 2; num1++)//�J��Ԃ��Bnum1��50�~�Ƃ���2����100�~�Ƃ���B
   {
      for(num2 = 0; num2 <= 10; num2++)//�J��Ԃ��Bnum2��10�~�Ƃ���10����100�~�Ƃ���B
      {
         for(num3 = 0; num3 <= 20; num3++)//�J��Ԃ��Bnum3��5�~�Ƃ���20����100�~�Ƃ���B
         {
             for(num4 = 100; num4 >= 0; num4--)//�J��Ԃ��Bnum4��1�~�ʂ�100�Ƃ���0���Ƃ���B
             {
                if(num1*50+num2*10+num3*5+num4*1 == 100)//��������Bnum1��50�~�Anum2��10�~�Anum3��5�~�Anum4��1�~�A���v100�~�Ƃ���B
                {
                   printf("% d % d % d % d \n",num1,num2,num3,num4);//num1,num2,num3,num4�̌��ʂ��o�͂���B

                   sum = sum + 1;//sum = sum + 1�Ƃ���Bsum++�Ƃ��Ă��ł���B
                }
             }
          }
       }
   }
   printf("�g�ݍ��킹�̑�����%d�ʂ�ł�.", sum);//sum�̌��ʂ��o�͂���B

return 0;
}
