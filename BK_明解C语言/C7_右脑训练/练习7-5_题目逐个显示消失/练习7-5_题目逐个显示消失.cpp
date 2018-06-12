/*
�����ܣ��ж�������Ĳ��ظ�����(1~9)�������ȱʧ��ĳһ���֡�
ÿ��������һ��ʾһ��ʱ�����ʧ������������ʾ���Ҫ������ȱʧ������Ҫ��ʱ���룬�ش���ȷ���ӡ��ȷ�𰸼�����������Ϣ��

˼·��ÿ����ʾһ�����֣����õȴ������ȴ������ÿհ׷����Ǹ����֡��ش���ȷ�����˵�������ǰ�濪ʼ��ӡ�������鼰�𰸡���ʱ�������getch������

ע�⣺getch������ȡ���������ַ�����������������ϵ�1������ȡֵΪ'1'������ֵ��49������Ҫ�Զ�ȡ��ֵת�������Լ�ȥ 48 ���߼�ȥ '0'
����ֵx(0~9) ---  x +'0' -->�����ַ�no('0'~'9')
����ֵx(0~9) <-- no -'0' ---�����ַ�no('0'~'9')
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

#define MAX_STAGE 10	//��Ϸ����
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)	//������

int sleep(unsigned long x)				//�ȴ� x ����
{
	clock_t c1 = clock(), c2;
	do
	{
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0*(c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}

int main()
{
	int i, j, stage;
	int dgt[9] = { 1,2,3,4,5,6,7,8,9 };	//����������
	int a[8];	//��������
	double times;
	clock_t start, end;

	srand(time(NULL));

	printf("�������һ��ʱ����ʾ 1~9 �����������(���ظ�)����������һ������ȱʧ��������ȱʧ�����֡�\n");
	printf("���ո����ʼ��\n");
	while (getch() != ' ')
		;

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++)
	{
		int x = rand() % 9;
		int no;

		i = j = 0;

		while (i < 9)
		{
			if (i != x)
				a[j++] = dgt[i];	//��������
			i++;
		}

		for (i = 7; i > 0; i--)	//������������
		{
			j = rand() % (i + 1);
			if (i != j)
			{
				swap(int, a[i], a[j]);
			}
		}

		for (i = 0; i < 8; i++)
		{
			printf("%d ", a[i]);
			sleep(1000);		//ÿ����ͣ��ʾ1000ms
			printf("\b\b%*c", 2, ' ');	//������(�ո������)
		}
		printf(" : ");

		do {
			no = getch();
		} while (no - '0' != dgt[x]);		//getch��ȡ��noΪ�ַ�������('1'Ϊ49��'a'Ϊ97)�������ȥ�ַ���'0'(Ϊ48)����ʾ����ֵ

		printf("\b\b%c\r",' ');		//����ǰ���ð��
		for (i = 0; i < 8; i++)
			printf("%d ", a[i]);	//�ش���ȷ����ͷ��ӡ��������

		printf(" : %c", no);	//����ӡ��ȷ��
		printf(" ��ȷ!\n");
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

	getchar();
	return 0;
}