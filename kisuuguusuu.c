#include <stdio.h>

int main(void)
{
   int res;//�ϐ�res��錾����B

   printf("������");//��������\������B
   scanf("%d", &res);//res�̐������L�[�{�[�h�ɂ���Ď擾����B

  if((res % 2) == 0)//if��p����res�̐������������m���߂�B
     printf("�����ł�. \n", res);//�����ł���\������B
  else//���̑��A��������Ƃ���B
     printf("��ł�. \n", res);//��ł���\������B

  return 0;
}
