/*
�����ܣ�����10��Ԫ�ص����飬������10�����ֶ������飬����10��Ԫ�غ�����������Ԫ��ǰ��һλ��ĩβ����Ԫ�أ��������ơ�
˵����Ч�ʵͣ�������1000��Ԫ����Ҫ�ƶ�999λ��
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int i;
	int a[MAX];
	int cnt = 0;
	int retry;

	printf("������������\n");
	do {
		if (cnt >= MAX)
		{
			for (i = 0; i < MAX - 1; i++)
				a[i]=a[i + 1];
		}
		printf("��%d�������� ", cnt + 1);
		scanf("%d", &a[cnt < MAX ? cnt : MAX - 1]);
		cnt++;

		printf("�Ƿ������(YES...1/NO...0): ");
		scanf("%d", &retry);
	} while (retry == 1);
	putchar('\n');
	if (cnt <= MAX)
		for (i = 0; i < cnt; i++)
			printf("��%2d����%d\n", i + 1, a[i]);
	else
		for (i = 0; i < MAX; i++)
			printf("��%2d����%d\n", cnt - MAX + i, a[i]);
	getchar(); getchar();
	return 0;
}