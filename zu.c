#include <stdio.h>

int main(void)
{
   int a,b,c;//�ϐ�a,b,c�̐錾�B

   for(a=1; a<=5; a++)//�J��Ԃ��B
     {
     for(b=0; b<=5-a; b++)//�J��Ԃ�(�����̃X�y�[�X��)�B
     printf(" ");//�X�y�[�X�̏o�́B
      for(b=1; b<=a*2-1; b++)//�J��Ԃ�(*�̐�)�B
     printf("*");//*�̏o�́B
     printf("\n");//���s�̏o�́B
    
  }
return 0;
}
