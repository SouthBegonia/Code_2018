#include<stdio.h>
#include<conio.h>

int main()
{
	int a=100, b=200;
	
	const int *p = &a;      // *p ���ɸ�
	int * const q = &b;     // q ���ɸ�
	
	printf(" a = %d &a = %p  ,  b = %d  &b = %p\n",a,&a,b,&b);
	printf("*p = %d  p = %p  , *q = %d   q = %p\n\n",*p,p,*q,q);

	/*������*p����޸�a��ֵ
    *p = b;q */
	/*�����Խ�ָ��pָ����һ�������ĵ�ַ*/
	p = &b;
	printf("a = %d, *p = %d, p = %p\n\n",a,*p,p);
	
	/*�����Ը���ָ��qָ����һ�������ĵ�ַ
	q = &a */
	/*������ʹ��qָ�����޸ı��� b ��ֵ*/
	*q = 300;
	printf("b = %d, *q = %d, q = %p\n",b,*q,q);
	
	getch();
	return 0;
}
