#include<stdio.h>
int strlength(char s[100]);    //����ԭ�� 
int main()
{
	int i=0,length;
	char s[100];
	printf("�������ַ���: ");
	gets(s);
	length=strlength(s);
	while(s[i]!='\0')
		i++;
	printf("�ַ���: ");
	puts(s);
	printf("�ַ������� length= %d   \n",length);
}
int strlength(char s[100])
{
	int i=0;
	while(s[i]!='\0')       //whileѭ�����Ӧ�� 
		i++;
	return i;
}
