#include<stdio.h>
#include<string.h>
#define N 40
int main()
{
	char str[N],ch='Y';
	int i;
	int len;
	printf("Input a string: ");
	while(scanf("%s",&str)==1)     
	{
	len=strlen(str);             //��Ч�ַ����� 
	for(i=0;i<len;i++)
		if(str[i]!=str[len-1-i])
		{
			ch='N';
			break;
		}     //�ڲ�ѭ��
		if(ch=='Y')
		     printf("%s��һ��������\n",str);
		else printf("%s����һ��������\n",str);
    printf("Please input a string again: ");
	}      //whileѭ��
}  
