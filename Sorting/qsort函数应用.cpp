//qsort����
#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)      // ������򣨰������ţ�
{
   return  *(int*)a-*(int*)b;         //a-b����b-a���� 
}

int main()
{
   int  a[6]={1,2,3,4,5,6},i;
   
   qsort(a,6,sizeof(int),cmp);      
   //a�Ǳ����������   
   //6������Ԫ�صĸ���        
   //sizeof��int����ÿ��Ԫ����ռ���ֽ���       
   //cmp���������
   
   for(i=0;i<6;i++)                 //���
	  printf("%d ",a[i]);
    return 0;
}
 
