#include<stdio.h>
#define N 3
int main()
{
	int i=1;
	long s1=0,s2=0;
	do
	{
		if(i%2==0) s1=s1+i;
		if(i%2!=0) s2=s2+i;
		i++; 
	}while(i<=N);   //����N 
	printf("�ڴ�1��%d(����%d)���ڵ������У�\n",N,N);
	printf("��%d������Ϊ��",N);
	for(i=1;i<=N;i++)
	    printf("%d ",i);
	putchar('\n');
	printf("ż����s1=%ld, ������s2=%ld\n",s1,s2);
	return 0;
}
