/*
������:�򵥱�ʾc����ָ��

int *p;
�����ı����� p ,p ��������"ָ��int��ָ��"
*/ 
#include<stdio.h>
int main()
{
	int hoge=5;
	int piyo=10;
	int *p;     //���� "ָ��int��ָ��"���͵ı��� p
	
	/*���ÿ�������ĵ�ַ*/
	printf("&hoge...%p\n",&hoge);
	printf("&piyo...%p\n",&piyo);
	printf("&p......%p\n",&p);
	
	/*��hoge�ĵ�ַ����p*/
	p=&hoge;    //ָ�����p��������һ������hoge�ĵ�ַ,����ʾ "pָ��hoge"
	printf("p.......%p\n",p);
	
	/*ͨ��p���hoge������*/
	printf("*p......%d\n",*p);
	
	/*ͨ��p�޸�hoge������*/
	*p=10;     //��Ϊ p ָ�� hoge,���� *p �� hoge ��ʾͬһ����(�����,�ȼ��� hoge = 10;)
	printf("hoge....%d\n",hoge);
	
	getchar();
	return 0; 
 } 
