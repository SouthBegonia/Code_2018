/*
�����ܣ��ҳ���������ȱʧ�����֣��ظ�10�Ρ�
˼·������������õ�ϴ��(Fisher-Yates)�㷨�������ꡣ
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX_STAGE 10	//��Ϸ����
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)	//������
int main()
{
	int i, j, stage;
	int dgt[9] = { 1,2,3,4,5,6,7,8,9 };	//����������
	int a[8];	//��������
	double times;
	clock_t start, end;

	srand(time(NULL));

	printf("����ȱʧ�����֡�\n");

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
		for (i = 7; i > 0; i--)	//��a[0]��a[i]�����ѡȡһ��Ԫ�أ���1��Ԫ����a[i]���н��������㷨Ϊϴ��(Fisher-Yates)�㷨
		{
			j = rand() % (i + 1);
			if (i != j)
			{
				swap(int, a[i], a[j]);
				/*	���к����������������ȼ���
				do {
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				} while (0);
				������swapֻ���滻�����ã��궨�岻�����ڴ档
				*/
			}
		}
		for (i = 0; i < 8; i++)
			printf("%d ", a[i]);
		printf(":");

		do {
			scanf_s("%d", &no);
		} while (no != dgt[x]);
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