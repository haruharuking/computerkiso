#include <stdio.h>

int main(void)
{
  int num1,days;//�ϐ�num1,days�̐錾�B
      num1=1;//num1��1�Ƃ���B
      days=1;//days��1�Ƃ���B

  while(num1 <= 10000)//�J��Ԃ��B
    {
     days++;//days++�̃u���b�N�������ɌJ��Ԃ��B

     num1 = num1*2;//num1�̌v�Z�B
    }
    printf("1���ڂ�1�~�A2���ڂ�2�~�A3���ڂ�4�~�Ƃ����悤�ɁA�O����2�{�̂��������������炤�Ƃ��A����ɂ��炤�z���P���~������̂�%d���ځB \n",days);
    /*���ʂ̏o��*/

return 0;
}
