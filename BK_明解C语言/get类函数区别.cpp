/*
�����ܣ�����getch/getchar/getche 

˵�������ܴ������飬�����ơ� 
*/ 
#include<stdio.h>
#include<conio.h>
#include<string.h>


/*getch(): ��ȡ���ַ�����ʱ��ȡ�������� */
void __getch(void)
{
 	char ch;
 	printf("���ͣ�getch()\n") ;
 	printf("����һ���ַ���");
 	ch=getch();
 	printf("\n��������ַ��ǣ�'%c'\n",ch);
	printf("sizeof = %d\n",sizeof(ch));
	//printf("strlen = %d\n",strlen(ch));    ������ԭ��strlen(const char*)
}

/*��getchar():��ȡ���ַ���Ҫ�س��ſɶ�ȡ������*/
void __getchar(void)
{
 	char ch;
 	printf("���ͣ�getchar()\n") ;
	printf("����һ���ַ���");
 	ch=getchar();		
	printf("\n��������ַ��ǣ�'%c'\n",ch); 
	printf("sizeof = %d\n",sizeof(ch));
}

/*getche(): ��ȡ���ַ�����ʱ��ȡ�һ��� */
void __getche(void)
{
 	char ch;
 	printf("���ͣ�getche()\n") ;
	printf("����һ���ַ���");
 	ch=getche();
 	printf("\n��������ַ��ǣ�'%c'\n",ch); 
 	printf("sizeof = %d\n",sizeof(ch));
}

/*gets(): ��ȡ�ַ������س���ȡ�һ���*/
void __gets(void)
{
	char ch[20];		//�������ȹ涨��Χ ����Ϊ����
	printf("���ͣ�gets()\n");
	printf("�����ַ�����");
	gets(ch);
	printf("��������ַ����ǣ�'%s'\n",ch);
	printf("strlen = %d\n",strlen(ch));
	printf("sizeof = %d\n",sizeof(ch));
}
int main()
{
	int type=0;
	int retry=1;
	do{
	puts("############################################");
	printf("ѡ������鿴�ĺ�������\n1.getch  2.getche  3.getchar  4.gets  0.�˳�\n");
	type=getch();
	type=type-'0';
	
	switch(type)
	{
		case 1: __getch();
			break;
		case 2: __getche();
			break;
		case 3: __getchar();
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
