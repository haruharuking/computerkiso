#include <stdio.h>

int main(void)
{
   int num1,num2,turu,kame;//�ϐ�num1,num2,turu,kame��錾����B

   printf("���̐�����");//(���̐�����)���o�͂���B
   scanf("%d", &num1);//�L�[�{�[�h����num1�̒l���擾����B

   printf("���̐�����");//(���̐�����)���o�͂���B
   scanf("%d", &num2);//�L�[�{�[�h����num2�̒l���擾����B

   kame = (num2/2)-num1;//kame�̌v�Z�B
   turu = num1-kame;//turu�̌v�Z�B

   if((num1 == kame+turu) && (num2 == 2*turu+4*kame))//�������B
   {
   printf("�߁�%d�H ",turu);//(�߁� �H)��turu�̌v�Z���ʂ��o�͂���B
   printf("�T��%d�C \n",kame);//(�T�� �C)��kame�̌v�Z���ʂ��o�͂���B
   }
   else//���̑�
   {
   printf("�v�Z�ł��܂���. \n");//(�v�Z�ł��܂���)���o�͂���B
   }
return 0;
}
