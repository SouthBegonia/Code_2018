/*
�����ܣ���������4λ�������������Ҽ��䣬���ֽ���ʾһ˲��(0.5s)��������룬�ظ�10�Σ���ӡ����ԵĴ��������õ�ʱ�䡣
���ģ��ȴ�����sleep()�������Ĳ�����
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX_STAGE 10			//�ؿ���(��������)

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
	int stage;				//�������
	int right = 0;			//�������
	clock_t start, end;		//��ʼʱ��/����ʱ��

	srand(time(NULL));

	printf("���²�һ��4λ����ֵ��(���س���ʼ)\n");
	getchar();

	start = clock();
	for (stage = 0; stage < MAX_STAGE; stage++)
	{
		int x;				//��ȡ��ֵ
		int no = rand() % 9000 + 1000;		//4λ���������

		printf("%d", no);
		fflush(stdout);
		sleep(500);			//ֻ��ʾ0.5��

		printf("\r�����룺");	//����
		fflush(stdout);
		scanf_s("%d", &x);

		if (x != no)
			printf("�ش����\n");
		else
		{
			printf("�ش���ȷ��\n");
			right++;
		}
	}
	end = clock();
	printf("%d������¶���%d�Ρ�\n", MAX_STAGE, right);
	printf("��ʱ%.1f�롣\n", (double)(end - start) / CLOCKS_PER_SEC);

	getchar();
	getchar();
	return 0;
}