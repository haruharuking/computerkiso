#include <stdio.h>
#include <math.h>

int main(void)
{
   int num1,r,h,n;//�ϐ�num1,r,h,n��錾����B
   double s,v,V;//�ϐ�s,v,V��錾����B

   printf("��ӂ̔��a r����",r);//(��ӂ̔��a r����)���o�͂���B
   scanf("%d",&r);//r�̒l���L�[�{�[�h����擾����B
   printf("���� h����",h);//(���� h����)���o�͂���B
   scanf("%d",&h);//h�̒l���L�[�{�[�h����擾����B
   printf("������ n����",n);//(������ n����)���o�͂���B
   scanf("%d",&n);//n�̒l���L�[�{�[�h����擾����B

   for(num1 = 1; num1 < n; num1++)//�J��Ԃ��B
   {

   s = (double)(n-num1)/n*r;//s�̌v�Z�B
   v = (double)s*s*M_PI*h/n;//v�̌v�Z�B
   V += v;//V += v�Ƃ���B
   }

   printf("�̐ρ�%.2lf \n",V);//(�̐ρ�)��V�̒l���o�͂���B

return 0;
}
