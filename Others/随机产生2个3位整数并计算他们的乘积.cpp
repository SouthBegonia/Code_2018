#include<stdio.h>
#include<stdlib.h> //����randomize����ʱҪ�Ӵ��� 
#include<time.h>  //����randomize ������random����ʱ����Ӵ��� 
int main()
{
	int a,b,i;
	long int x;
	a=rand()%11;
	b=rand()%11;    //����0~��11-1���е�������� 
	x=(long)a*b;
	printf("%d * %d= %ld\n",a,b,x);
	getchar();     //�ȴ�����س���ʼ��һ�д��� 
	printf("Generate 10 random Numbers\n");
	for(i=0;i<10;i++)
	    printf("%-3d ",rand()%11);
	return 0; 
}
