/*
�����ܣ�����puts/putch/putchar 

˵�������ܴ������飬�����ơ� 
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	char c='A';
	char s[]={"12345"};
	
	printf("##########\n");
	puts(s);				//ĩβ�Դ�'\n' 
	puts("puts�ַ���") ;	//ĩβ�Դ�'\n' 
	printf("##########\n\n");
	
	printf("##########\n");
	putch(c);			// ��ĸ 'A' 
	putch('m');			// ��ĸ 'm' 
	putch(97);			// ��ĸ 'a' 
	printf("##########\n\n");
	
	printf("##########\n");
	putchar(c);			// ��ĸ'A' 
	putchar('n');		// ��ĸ'n' 
	putchar(98);		//��ĸ 'b' 
	printf("##########\n\n");
	
	return 0;
} 
