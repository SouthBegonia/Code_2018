/*
�����ܣ�����getch/getchar/getche 

˵�������ܴ������飬�����ơ� 
*/ 
#include<stdio.h>
#include<conio.h>

void __getch(void)
{
 	char ch;
 	printf("���ͣ�getch()\n") ;
 	printf("����һ���ַ���");
 	ch=getch();			//��ʱ��ȡ�������� 
 	printf("\n��������ַ��ǣ�'%c' '%d'\n",ch,ch); 
}

void __getchar(void)
{
 	char ch;
 	printf("���ͣ�getchar()\n") ;
	printf("����һ���ַ���");
 	ch=getchar();		//��Ҫ�س��ſɶ�ȡ������ 
	printf("\n��������ַ��ǣ�'%c'\n",ch); 
}

void __getche(void)
{
 	char ch;
 	printf("���ͣ�getche()\n") ;
	printf("����һ���ַ���");
 	ch=getche();		//��ʱ��ȡ�һ��� 
 	printf("\n��������ַ��ǣ�'%c'\n",ch); 
}

void __gets(void)
{
	char ch[20];		//�������ȹ涨��Χ 
	printf("���ͣ�gets()\n");
	printf("�����ַ�����");
	gets(ch);			//�س���ȡ�һ��� 
	printf("��������ַ����ǣ�'%s'\n",ch);
}
int main()
{
	int type=0;
	int retry=1;
	do{
	puts("############################################");
	printf("ѡ������鿴�ĺ�������\n1.getch  2.getchar  3.getche  4.gets  0.�˳�\n");
	type=getch();
	type=type-'0';
	
	switch(type)
	{
		case 1: __getch();
			break;
		case 2: __getchar();
			break;
		case 3: __getche();
			break;
		case 4: __gets();
			break;
		case 0: retry=0;
			break;
	}
	
	puts("############################################\n");
	}while(retry!=0);
	
	printf("Done!\n");
	return 0;
}
