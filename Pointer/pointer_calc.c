/*
��ָ����м�1����,,��ַ��ֵ�����ӵ�ǰָ����ָ���������͵ĳ���.(�����е�int 4�ֽ�)
*/
#include<stdio.h>
int main()
{
	int hoge;
	int *p;

    /*��ָ�� hoge ��ָ�븳��p*/
	p=&hoge;
	
	/*��� hoge ��ֵ*/
	printf("p...%p\n",p);
	
	/*�� p �� 1*/
	p++;
	
	/*��� hoge��ֵ*/
	printf("p...%p\n",p);
	
	/*��� hoge �ټ� 3 ���ֵ*/
	printf("p...%p\n",p+3);
	
	getchar();
	return 0;
}
