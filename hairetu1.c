#include <stdio.h>

int main(void)
{
   int a[10]={2,-8,5,-4,6,5,7,-3,-9,1};//int�^�̒l��10�L���ł���z���錾
   int num1,num2=0,num3=0,num4=0;//�ϐ�num1,num2=0,num3=0,num4=0�̐錾

   for(num1=0;num1<10;num1++)//�J��Ԃ�(�ϐ�num1��0����10�ƂȂ�܂�)
   {
   if(a[num1]%2 == 0)num3++;//��������B��̏ꍇ�B(�z��a��num1�̗v�f����2==0)�~num3++
   if(a[num1]%2!= 0)num2++;//��������B�����̏ꍇ�B(�z��a��num1�̗v�f����2!=0)�~num2++
   if(a[num1]<0)num4++;//��������B���̐��̏ꍇ�B(�z��a��num1�̗v�f��<0)�~num4++
   }
   printf("���%d�R \n",num2);//(���num2�R)�̏o��
   printf("������%d�R \n",num3);//(������num3�R)�̏o��
   printf("���̐���%d�R \n",num4);//(���̐���num4�R)�̏o��

return 0;
}
