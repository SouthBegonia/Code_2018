/*
�����ܣ���ȡ��ҴӼ���������ַ������س���ʾ��

getch:ֱ�ӴӼ��̶�ȡ�ַ��������ԣ����ض�ȡ���ַ���ֵ
putch:�ڽ�������ʾ�ַ�c

��ע�����ṩ��Visual C++��MS-Windows/MS-DOS����������

*/
#include<stdio.h>
#include<conio.h>	//�ṩgetch��putch��
#include<ctype.h>	//�ṩisprint

int main()
{
	int ch;
	int retry;

	do {
		printf("�밴����");
		ch = getch();

		printf("\n���µļ���%c��ֵ��%d��\n", isprint(ch) ? ch : ' ', ch);

		printf("����һ�Σ�(y/n): ");
		retry = getch();
		if (isprint(retry))	//ֻ�е�retry����ʾ�ַ�ʱ����ʾ
			putch(retry);
		putchar('\n');
	} while (retry == 'y' || retry == 'Y');

	getchar();
	return 0;
}