/*
�����ܣ���ȡ��ҴӼ���������ַ������س���ʾ��

��ע�������ṩ��Curses��� UNIX/LINUS/OS ����������

*/
#include<stdio.h>
#include<curses.h>	//�ṩgetch
#include<ctype.h>	//�ṩisprint

int main()
{
	int ch;
	int retry;

	initscr();	//������Ļ����ʼ���⡣ʹ��curses��ʱ�������ȵ��õĺ���
	cbreak();	//��ֹ�л���
	noecho();	//��ֹ����ַ���ʾ�ڻ�����
	refresh();	//ˢ�»���

	do {
		printf("�밴����");
		ddlush(stdout);

		ch = getch();

		printf("\n\r���µļ���%c��ֵ��%d��\n\r", isprint(ch) ? ch : ' ', ch);

		printf("����һ�Σ�(y/n): ");
		fflush(stdout);
		retry = getch();
		if (isprint(retry))	//ֻ�е�retry����ʾ�ַ�ʱ����ʾ
			putch(retry);
		putchar('\n');
		fflush(stdout);
	} while (retry == 'y' || retry == 'Y');

	endwin();	//ʹ�ÿ�ʱ������β�ĺ�����ʹ��curses����������õĺ���

	return 0;
}