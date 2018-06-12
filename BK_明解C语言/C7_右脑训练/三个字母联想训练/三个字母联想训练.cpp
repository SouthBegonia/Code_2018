/*
�����ܣ�����趨3�����������ֻ���ĸ�������������һ��������ж����ص��ַ�

˼·���趨3���ַ�(��СдӢ�ģ�����)���趨3�������(�ַ����ࡢ�ַ���ʼλ�á�����λ��)
*/
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#include"getputch.h"		//�ڰ���conio.h��Ϊ�˵���getch��Ҳ��ֱ�ӵ���conio.h

#define MAX_STAGE 10	//��Ϸ����

int main()
{
	char *qstr[] = { "0123456789",	//����
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ",	//��дӢ����ĸ
	"abcdefghijklmnopqrstuvwxyz",	//СдӢ����ĸ
	};

	int chmax[] = { 10,26,26 };
	int i, stage;
	int key;	//��ȡ��ֵ
	double times;	//��ʱ
	clock_t start, end;

	init_getputch();	//getputch.h���޹��ܵĿպ���

	srand(time(NULL));	//�趨�����������

	printf("_______________________________________________\n");
	printf("| ������������3�����ֻ�Ӣ����ĸ�б���ȥ���ַ���\n");
	printf("| ������ʾA*C:��������B\n");
	printf("|\n");
	printf("| ���¿ո�ʼ��\n");
	printf("______________________________________________\n");
	while (getch() != ' ')
		;

	start = clock();

	for (stage = 0; stage < MAX_STAGE; stage++)
	{
		int qtype = rand() % 3;		//0:���� /1:��д��ĸ /2:Сд��ĸ
		int nhead = rand() % (chmax[qtype] - 2);	//��ͷ�ַ����±�
		int x = rand() % 3;		//�����ַ������

		putchar('\r');
		for (i = 0; i < 3; i++)		//��ʾ��Ŀ
		{
			if (i != x)
				printf("  %c", qstr[qtype][nhead + i]);
			else
				printf("  *");
		}
		printf(" : ");
		fflush(stdout);

		do {
			key = getch();
			if (isprint(key))	//������ʾ�ַ�����ʾ
			{
				putch(key);
				if (key != qstr[qtype][nhead + x])
					putch('\b');	//���ش�������˸񸲸�
			}
		} while (key != qstr[qtype][nhead + x]);
		putch('\n');
	}
	end = clock();
	times = (double)difftime(end, start) / CLOCKS_PER_SEC;

	printf("��ʱ%.1f�롣\n", times);
	if (times > 25.0)
		printf("̫���ˡ�\n");
	else if (times > 20.0)
		printf("��Ӧ�е�������\n");
	else if (times > 17.0)
		printf("��Ӧ���аɡ�\n");
	else printf("��Ӧ�ܿ졣\n");

	term_getputch();		//getputch.h�ڵĿպ���

	getchar(); 
	return 0;
}