#include<stdio.h>
#include<string.h>
int main()
{
	//strcmp�������Ƚ����ַ�������
	//strcat����: ����һ���ַ����ӵ�ǰһ���ַ������� 
	char a[20],b[20];
	gets(a);
	gets(b);
	printf("\n");
	puts(a);
	puts(b);
	printf("\n");
	if(strcmp(a,b)>0)   //��a��b�� 
	   strcat(a,b);     //��b�ӵ�a���� 
	else strcat(b,a);  
	puts(a);
	puts(b);
	
 } 
