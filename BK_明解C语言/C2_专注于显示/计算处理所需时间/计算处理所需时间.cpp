/*
�����ܣ��趨3������������㣬������ֱֵ����ȷ������ù��̣���Ϊ����Ĺ��̣���ʱ��
ԭ���ڴ�����̵���ʼ�㡢�յ��趨������¼ʱ�䣨start=clock()��end=clock())����ʱ��Ϊ��ʱ��
clock_t��ͷ�ļ�<time.h>�ѷ���ֵ������clock_t�Ͷ���Ϊ��ͬ�������͡�
		�� typedef unsigned clock_t;�������Ϊ����������clock_t����ԭ����unsigned��
		����ͬ��̻����²�һ����unsigned��

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a, b, c;							//���мӷ�����������
	int x;									//��ȡ��ֵ
	clock_t start, end;						//��ʼʱ�䡢����ʱ��
	double req_time;						//����ʱ

	srand(time(NULL));						//�趨����
	a = rand() % 11;						//����0~10�������
	b = rand() % 11;
	c = rand() % 11;

	printf("%d + %d + %d = ",a,b,c);

	start = clock();						//��ʼ����
	while (1)
	{
		scanf_s("%d", &x);
		if (x == a + b + c)
			break;
		printf("�������������룺");
	}
	end = clock();							//�������
	req_time = (double)(end - start) / CLOCKS_PER_SEC;

	printf("������ʱ %.1f �롣\n", req_time);
	printf("start=%.2fs,end=%.2fs", (double)start / CLOCKS_PER_SEC, (double)end / CLOCKS_PER_SEC);
	getchar();
	getchar();
	return 0;
}