/*
�����ܣ��ҳ����������ظ������֣��ظ�10�Σ���ȡʵʱ�������룬���´𰸻����ϸ��Ǵ���𰸡�

˼·������ getch ʵ�ּ�ʱ��ȡ��getch ������ conin.h �ڡ�

˵���������볢�Ե���ͬĿ¼���Խ���ͷ�ļ� getputch.h �����ڰ���ͷ�ļ� conin.h �������� getputch.h ����ʵ�� getch ���ܡ�
������ getputch.h ��д��2�պ��� init_getputch �� term_getputch ��Դ�ļ��ڵ��á�

*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
#include"getputch.h"	//����ͬĿ¼����д��ͷ�ļ�

#define MAX_STAGE 10	//��Ϸ����
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)	//������
int main()
{
	int i, j, stage;
	int dgt[9] = { 1,2,3,4,5,6,7,8,9 };	//����������
	int a[10];	//��������
	double times;
	clock_t start, end;

	init_getputch();	//���õ� getputch.h �ڵĺ���
	srand(time(NULL));

	printf("�����ظ������֡�\n");
	printf("���¿ո�ʼ��\n");
	fflush(stdout);

	while (getch() != ' ')	//���¿ո�ʼ
		;

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++)
	{
		int x = rand() % 9;
		int no;

		i = j = 0;
		while (i < 9)
		{
			a[j++] = dgt[i];
			if (i == x)		//����ʱ�ظ�dgt[x]
				a[j++] = dgt[i];
			i++;
		}
		for (i = 9; i > 0; i--)	//������������
		{
			j = rand() % (i + 1);
			if (i != j)
			{
				swap(int, a[i], a[j]);
			}
		}
		for (i = 0; i < 10; i++)
			printf("%d ", a[i]);	//��ʾ����Ԫ��
		printf(" : ");
		fflush(stdout);

		do {
			no = getch();
			if (isprint(no))	//�����ȡ������ʾ�ַ�
			{
				putch(no);	//��ʾ���µļ�(�ַ�)��ע��putch ����
				if (no != dgt[x] + '0')
					putch('\b');	//����ش���󣬹����һ��
				else
					printf("\n");
				fflush(stdout);
			}
		} while (no != dgt[x]+'0');	//noΪ�ַ��Ͷ�Ӧ��ֵ���˴���ת��
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

	term_getputch();

	getchar(); getchar();
	return 0;
}