/*
�����ܣ�����10��Ԫ�ص����飬������10�����ֶ������飬����10��Ԫ�غ���Ԫ��ȡ����λԪ�أ�����һԪ��ȡ����2λԪ�أ��������ƣ����ѭ���ṹ��
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
		printf("��%d�������� ", cnt + 1);
		scanf("%d", &a[cnt++%MAX]);				//���Ĵ���
		
		printf("�Ƿ������(YES...1/NO...0): ");
		scanf("%d", &retry);
	} while (retry == 1);

	i = cnt - MAX;
	if (i < 0)
		i = 0;
	for (; i < cnt; i++)
		printf("��%2d���� %d\n", i + 1, a[i%MAX]);

	getchar(); getchar();
	return 0;
}