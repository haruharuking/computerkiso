#include <stdio.h>

int main(void)
{
   int a[9][9];//�񎟌��z��int�^�̒l��9�R���L���ł���z���錾
   int num1,num2;//�ϐ�num1,num2�̐錾

   for(num1 = 0;num1 <= 8;num1++)//�J��Ԃ�(�ϐ�num1��0����8�����ƂȂ�܂�)
      {
      for(num2 = 0;num2 <= 8;num2++)//�J��Ԃ�(�ϐ�num2��0����8�����ƂȂ�܂�)
         {
         a[num1][num2] = (num1+1)*(num2+1);//�z��a�v�f��num1,num2�̓񎟌��z��(num1�~1)�~(num2+1)
         }
      }
   for(num1 = 0;num1 <= 8;num1++)//�J��Ԃ�(�ϐ�num1��0����8�����ƂȂ�܂�)
      {
      for(num2 = 0;num2 <= 8;num2++)//�J��Ԃ�(�ϐ�num2��0����8�����ƂȂ�܂�)
         {
   printf("%4d",a[num1][num2]);//�ϐ���a�v�f��num1,num2�̒l���o��
         }
   printf("\n");//���s�̏o��
      }
return 0;
}
