#include<stdio.h>

int main()
{
    int num[10];//�ϐ���num�v�f��[10]�̐錾
    int tmp,a,b,c;//�ϐ�tmp,a,b,c�̐錾
	
    printf("���ёւ��O : ");//(���ёւ��O : )�̏o��
    for(a = 0; a < 10; a++)//�J��Ԃ�(�ϐ�a��0�`10�����ƂȂ�܂�)
    {
    scanf("%d",&num[a]);//num[a]�̒l���L�[�{�[�h����擾����
	}
	for(b = 0; b < 9; b++)//�J��Ԃ�(�ϐ�b��0�`9�����ƂȂ�܂�)
         {
		for(c = b + 1; c < 10; c++)//�J��Ԃ�(�ϐ�c��b�{1�`10�����ƂȂ�܂�)
                 {
			if(num[b] < num[c])//��������(num[b]��num[c]��菬�����ꍇ)
                        {
        tmp = num[b];//b��ۑ�
        num[b] = num[c];//���ւ�
        num[c] = tmp;//d��b��߂�
			}
		}
	}
	printf("���ёւ��� :");//(���ёւ��� : )�̏o��
	for(a = 0; a < 10; a++)//�J��Ԃ�(�ϐ�a��0�`10�����ƂȂ�܂�)
        {
		printf("% d",num[a]);//num[a]�̒l���o�͂���
	}

	return 0;
}
