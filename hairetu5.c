#include <stdio.h>

int main(void)
{
    int num[10];//�ϐ���num�v�f��[10]�̐錾
    int a, b, c, d, tmp;//�ϐ�a,b,c,d,tmp�̐錾
    int max;//�ϐ�max�̐錾
	
    printf("���ёւ��O : ");//(���ёւ� : )���o�͂���
    for(a = 0; a < 10; a++)//�J��Ԃ�(�ϐ�a��0�`10�����ƂȂ�܂�)
    {
        scanf("%d",&num[a]);//num[a]�̒l���L�[�{�[�h����擾����
    }
    for(b = 0; b < 9; b++)//�J��Ԃ�(�ϐ�b��0����9�����ƂȂ�܂�)
    {
         max = num[b];//max = num[b]�Ƃ���
	 for(c = b + 1; c < 10; c++)//�J��Ԃ�(�ϐ�c��b�{1�`10�����ƂȂ�܂�)
         {
             if (num[c] > max)//��������(num[c]��max���傫���ꍇ)
             { 
                 max = num[c];//max�ő�l���������o���Ă����B      
                 d = c;//d�͍ő�l�������Ă�num�̉��Ԗڂ����o���Ă����B
             }
          }
          tmp = num[b];//b��ۑ�
          num[b] = num[d];//b��max������ē��ւ��B
          num[d] = tmp;//d��b�����ǂ��B
    }
        printf("���ёւ��� :");//(���ёւ��� : )���o�͂���
	for(a = 0; a < 10; a++)//�J��Ԃ�(�ϐ�a��0�`10�����ƂȂ�܂�)
        {
        printf("% d",num[a]);//num[a]���o�͂���
	}
return 0;
}
