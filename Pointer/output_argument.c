#include<stdio.h>

void func(int *a, double *b)    //��ָ����ָ��ı�����ֵ
{
	*a=5;
	*b=3.5;
}

int main()
{
	int a;
	double b;
	
	func(&a,&b);
	printf("a...%d  b...%f\n",a,b);
	
	getchar();
	return 0;
}
