#include<stdio.h>
#include<conio.h>

int main()
{
	int i[] = {10,20,30,40,50};
	int *p = i;
	
	printf("*p = %d  p = %p\n\n",*p,p);
	
	/* * �� ++ �����ȼ���ͬ���ʴ��ҵ��� */
	printf("*p++...%d\n",*p++);     //*(p++)
	printf("*p = %d  p = %p\n\n",*p,p);
	
	p = i;
	printf("*++p...%d\n",*++p);     //*(++p)
	printf("*p = %d  p = %p\n\n",*p,p);

	p = i;
	printf("++*p...%d\n",++*p);     //++(*p)
	printf("*p = %d  p = %p\n\n",*p,p);     //��*p�ĵ������㣬��Ӱ�� p
	
	getch();
	return 0;
}
