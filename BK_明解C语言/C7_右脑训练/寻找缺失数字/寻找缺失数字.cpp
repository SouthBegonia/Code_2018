/*
�����ܣ��ҳ�����ȱʧ�����֣��ظ�10�Ρ�
˼·���趨һ���������������ʱ������
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_STAGE 10	//��Ϸ����

int main()
{
	int i, j, stage;
	int dgt[9] = { 1,2,3,4,5,6,7,8,9 };	//����������
	int a[8];	//��������
	double times;
	clock_t start, end;

	srand(time(NULL));

	printf("Ѱ��ȱʧ���֡�\n");

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++)
	{
		int x = rand() % 9;		//��������� 0~8
		int no;		//��Ҵ�
		
		i = j = 0;
		while (i < 9)
		{
			if (i != x)
				a[j++] = dgt[i];	//��������ʱ����dgt[x]
			i++;
		}
		for (i = 0; i < 8; i++)
			printf("%d ", a[i]);
		printf(": ");

		do
		{
			scanf("%d", &no);
		} while (no != dgt[x]);
	}
	end = clock();

	times = (double)difftime(end, start) / CLOCKS_PER_SEC;	
	/* start �� end ��λΪ���룬Ϊlong�͡�����ȼ��� times = (double)(start - end) / CLOCK_PER_SEC */

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