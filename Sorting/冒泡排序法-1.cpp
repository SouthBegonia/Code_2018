//ð�������㷨
#include<stdio.h>
#define N 10
int main()
{
	int a[N],i,j,t;
	printf("Input 10 numbers: \n");
	for(i=0;i<N;i++)
	     scanf("%d",&a[i]);        //����N������������ 
	for(j=0;j<N-1;j++)                  //��ȡ����������Ԫ��:a[0]
		for(i=0;i<N-1-j;i++)
			if(a[i]>a[i+1])                 //��ǰԪ�ش��ں�Ԫ���򽻻� 
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			printf("The sorted numbes: \n");
			for(i=0;i<N;i++)
				printf("%d ",a[i]);
			printf("\n");
}
