#include <stdio.h>

int main(void)
{ 
   int a[10] = {125814,225547,132254,224321,352124,342214,382154,321014,112254,153789};//�z��a�v�f��[10]�̐錾
   int b[9] = {};//�z��b�v�f��[9]�̐錾
   int c[9] = {10000,5000,1000,500,100,50,10,5,1};//�z��c�v�f��[9]�̐錾
   int d,e;//�ϐ�d,e�̐錾
   

   for(d = 0;d < 10;d++)//�J��Ԃ�(�ϐ�d��0����10�����ƂȂ�܂�)
      {
      for(e = 0;e < 9;e++)//�J��Ԃ�(�ϐ�e��0����9�����ƂȂ�܂�)
         {

  b[e] += a[d] / c[e];//�����̐� += ���� / �����̋��z�B
  a[d] = a[d] % c[e];//�����̎c�� = ���� % ����
         }
      }
   for(d = 0;d < 9;d++)//�J��Ԃ�(�ϐ�d��0�`9�����ƂȂ�܂�)
  printf("%d�~ %d�� \n",c[d],b[d]);//(c[d]�~ b[d]��)�̏o��	

return 0;
}