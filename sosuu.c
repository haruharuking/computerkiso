#include <stdio.h>

int main(void)
{
   int num1,num2;//�ϐ�num1,num2��錾����B
   int num3 = 0;//����B

   printf("2�ȏ�̐�����͂��Ă�����������");//(2�ȏ�̐�����͂��Ă�����������)���o�͂���B
   scanf("%d",&num2);//num2�̒l���L�[�{�[�h����擾����B

   for(num1 = 2; num1 < num2; ++num1)//�J��Ԃ��B�f�����ǂ����𔻒�B
   {
   if(num2 % num1 == 0)//��������
   {
      num3 = 1;//num3��1�Ƃ���B
   break;
   }
   }

   if(num3 == 0)//��������B
    printf("%d�͑f���ł�. \n",num2);
   else//���̑��B
    printf("%d�͑f���ł͂���܂���B\n",num2);//num2�̌��ʂ��o�͂���B

return 0;
}
