#include<stdio.h>

int main(void)
{
   char a[12][13]={"January","February","March","April","May","June","July","August","September","October","November","December"};//�񎟌��z��a�v�f��[12],[13]�̐錾
   /*�񎟌��z��b�v�f��[12],[15]�̐錾*/
   char b[12][25]={"�K�[�l�b�g","�A���V�X�g","�A�N�A�}����","�_�C�������h","�G�������h","�p�[��","���r�[","�y���h�b�g","�T�t�@�C�A","�I�p�[��","�g�p�[�Y","�g���R��"};
   int num1;//�ϐ�num1�̐錾

   printf("�����ł������� ");//(�����ł�������)�̏o��
   scanf("%d",&num1);//num1�̒l���L�[�{�[�h����擾����

   printf("%d���̃X�y����%s�ł�.\n",num1,a[num1-1]);//(num1���̃X�y����a[num1-1])���o�͂���
   printf("�a���΂� %s �ł�.\n",b[num1-1]);//(�a���΂�b[num1-1])���o�͂���

return 0;
}
