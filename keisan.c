#include <stdio.h>

int main(void)
{
   float num1,num2,num3,num4,num5,num6;//�ϐ�num1,num2,num3,num4,num5,num6��錾����B
   char res;//�ϐ�res��錾����B

   printf("�v�Z������");//(�v�Z������)���o�͂���B
   scanf("%f",&num1);//�L�[�{�[�h����num1�̐������擾����B
   scanf("%c",&res);//�L�[�{�[�h����res�̕������擾����B
   scanf("%f",&num2);//�L�[�{�[�h����num2�̐������擾����B

   switch (res){
          case '+'://(+)�����͂��ꂽ�ꍇ�ɏ��������B
                 num3 = num1+num2;//num3�̌v�Z�B
                 printf("%.1f+%.1f=%.1f \n",num1,num2,num3);//�����Z�̌v�Z���ƌ��ʂ��o�͂���B
                 break;
          case '-'://(-)�����͂��ꂽ�ꍇ�ɏ��������B
                 num4 = num1-num2;//num4�̌v�Z�B
                 printf("%.1f-%.1f=%.1f \n",num1,num2,num4);//�����Z�̌v�Z���ƌ��ʂ��o�͂���B
                 break;
          case '*'://(*)�����͂��ꂽ�ꍇ�ɏ��������B
                 num5 = num1*num2;//num5�̌v�Z�B
                 printf("%.1f*%.1f=%.1f \n",num1,num2,num5);//�����Z�̌v�Z���ƌ��ʂ��o�͂���B
                 break;
          case '/'://(/)�����͂��ꂽ�ꍇ�ɏ��������B
                 num6 = num1/num2;//num6�̌v�Z�B
                 printf("%.1f/%.1f=%.1f \n",num1,num2,num6);//����Z�̌v�Z���ƌ��ʂ��o�͂���B
                 break;
              }
return 0;
}
