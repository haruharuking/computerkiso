#include <stdio.h>

int main(void)
{
   int a,b,c,num1;//�ϐ�a,b,c,num1��錾����B

   printf("���la����");//(���la����)���o�͂���B
   scanf("%d",&a);//a�̒l���L�[�{�[�h����擾����B
   printf("���lb����");//(���lb����)���o�͂���B
   scanf("%d",&b);//b�̒l���L�[�{�[�h����擾����B

   if(a<b)//��������a>b���m�F�B
   {
     num1 = a;//num1=a�Ƃ���B
     a = b;//a=b�Ƃ���B
     b = num1;//b=num1�Ƃ���B
   }//���[�N���b�h�̌ݏ��@
     c = a % b;//c = a��b�̌v�Z�B
   while(c!= 0)//�J��Ԃ��B
   {
     a = b;//a=b�Ƃ���B
     b = c;//b=c�Ƃ���B
     c = a % b;//c=a��b�̌v�Z�B
   }
   printf("�ő���񐔁� %d \n",b);//(�ő���񐔁���)��b�̒l�̌��ʂ��o�͂���B

return 0;
}
