#include<stdio.h>
#include<string.h>
int main()
{
	//strlne��sizeof������ 
	char k[]="ABCD";
	printf("k=\"%s\"\n",k);
	printf("strlen(k)=%-3d\n",strlen(k)); //��������Ч�ַ���'\0'δ���� 
	printf("sizeof(k)=%d\n",sizeof(k));   //�������ַ� 
	
 } 
