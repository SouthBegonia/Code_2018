#include<stdio.h>
int main()
{
	int i=2,j=6,t;
	int a[]={1,2,3,4,5,6,7,8,9,10};//��δ�涨�����СʱҪ��ʼ�� 
	while(i<j)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
 } 
