/*kbhit()����������*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char ch;
	
	while(ch!=27)   //ESC��
	{
		printf("HelloWorld\n");

		if(kbhit()) //����м�������
			ch=getch(); //��ȡ��������
	}
	printf("End!\n");
	getchar();
	return 0;
}
