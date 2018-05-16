/*
�����ܣ���ʵ����Ϸ����ѵ���Ļ����ϣ����ѡ��ȼ�(λ��)���ܡ�Ҫ������λ������3~20λ��
˼·�������ͣ�����ֻ��Ϊ unsigned long int(���4294967295)��Ϊ10λ���ʱ��Ĳ����ַ�����¼���֡�
������ɵ�����ת��Ϊ�ַ����洢���ַ������飬��ȡ���������ַ�����ʽ��ȡ�������ñȽ��ַ�������strcmp()�Աȡ�
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STAGE 10			//�ؿ���(��������)
#define LEVEL_MIN 3				//��͵ȼ�(λ��)
#define LEVEL_MAX 20			//��ߵȼ�(λ��)

/*---�ȴ�x����---*/
int sleep(unsigned long x)
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
	int i, stage;
	int level;
	int right = 0;
	clock_t start, end;

	srand(time(NULL));

	printf("��ֵ����ѵ����\n");
	do {
		printf("Ҫ��ս�ĵȼ�(%d~%d): ", LEVEL_MIN, LEVEL_MAX);	//���ѡ����ս�ȼ�
		scanf("%d", &level);
	} while (level<LEVEL_MIN || level>LEVEL_MAX);

	printf("������һ��%dλ����ֵ�ѡ�(�س���ʼ)", level);
	getchar();
	getchar();

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++)
	{
		char no[LEVEL_MAX + 1];			//��Ҫ��������ִ����ַ���ĩβ+1
		char x[LEVEL_MAX + 2];			//�Ѷ�ȡ�����ִ����ַ���ĩβ+1��ͬʱ���ǵ���ҿ��ܴӼ������볬��20λ��ֵ+1

		no[0] = '1' + rand() % 9;		//��ͷ�ַ��� '1'~'9'
		for (i = 1; i < level; i++)
			no[i] = '0' + rand() % 10;
		no[level] = '\0';				//�ַ���ĩβ�ǿ� '\0'

		printf("%s", no);
		fflush(stdout);
		sleep(125 * level);

		printf("\r%*c\r�����룺 ", level, ' ');		//��Ӧλ���Ŀո������
		scanf("%s", x);

		if (strcmp(no, x) != 0)			//�Ƚ� no �� x �ַ����Ƿ����
			printf("�ش����\n");
		else {
			printf("�ش���ȷ��\n");
			right++;
		}
	}
	end = clock();
	
	printf("%d����������%d�Ρ�\n", MAX_STAGE, right);
	printf("��ʱ%.1f�롣\n", (double)(end - start) / CLOCKS_PER_SEC);

	getchar();
	getchar();
	return 0;
}