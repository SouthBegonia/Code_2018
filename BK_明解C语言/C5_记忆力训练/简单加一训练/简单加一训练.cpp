/*
�����ܣ���һ�ļ���ѵ������������ֵ��������Щ��ֵ��һ���ֵ���ܹ�10���ؿ�����ѡ�ȼ���ÿ�����һ���ؿ���ӡ����Դ�����ͳ���ܴ��������ȫ���ؿ����������
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_STAGE 10			//�ؿ���
#define LEVEL_MIN 2				//��͵ȼ�����ֵ������
#define LEVEL_MAX 6				//��ߵȼ�����ֵ������

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0*(c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}

int main()
{
	int i, stage;
	int level;			//�ȼ�
	int right;			//�������
	int score[MAX_STAGE];		//��Ӧ�ؿ��������
	clock_t start, end;			//��ʱ����

	srand(time(NULL));

	printf("һ��ѵ����ʼ��\n");
	printf("������2λ������ֵ��\n");
	printf("������ԭ��ֵ��1�����ֵ��\n");

	do {
		printf("Ҫ��ս�ĵȼ�(%d~%d): ", LEVEL_MIN, LEVEL_MAX);		//��ȡ�ȼ�
		scanf("%d", &level);
	} while (level<LEVEL_MIN || level>LEVEL_MAX);

	right = 0;
	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++)
	{
		int no[LEVEL_MAX];			//Ҫ�������ֵ(��������)
		int x[LEVEL_MAX];			//�������ֵ
		int right_each = 0;			//���ؿ���Ե�����

		printf("\n��%d�ؿ�ʼ!\n", stage + 1);

		for (i = 0; i < level; i++)
		{
			no[i] = rand() % 90 + 10;
			printf("%d ", no[i]);		//����Ҫ�������ֵ
		}
		fflush(stdout);
		sleep(500 * level);			//�ȴ�
		printf("\r%*c\r", 3 * level, ' ');	//����
		fflush(stdout);

		for (i = 0; i < level; i++)
		{
			printf("��%d������ ", i + 1);
			scanf("%d", &x[i]);		//��ȡ��
		}
		for (i = 0; i < level; i++)		//�ж϶Դ�
		{
			if (x[i] != no[i] + 1)
				printf("N ");
			else {
				printf("Y ");
				right_each++;
			}
		}
		putchar('\n');

		for (i = 0; i < level; i++)		//��ʾ��ȷ��
			printf("%2d ", no[i]);
		printf("......�����%d����(�س�����)\n", right_each);
		score[stage] = right_each;		//��¼���ؿ������
		right += right_each;		//�����ܴ����
		getchar(); getchar();
	}
	end = clock();

	printf("%d���д����%d����\n", level*MAX_STAGE, right);
	for (stage = 0; stage < MAX_STAGE; stage++)
		printf("��%2d�ؿ���%d\n", stage + 1, score[stage]);
	printf("��ʱ%.1f�롣\n", (double)(end - start) / CLOCKS_PER_SEC);

	getchar(); getchar();
	return 0;
}