/*
�����ܣ�����Ŀ�����֣�Ŀ��������һ����3~999֮���3�ı���������
�������������3�ı���ʱ������²��������Ҫ���������롣��Ҫ�����������²���n��
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int no;
	int ans, num;
	int n = 1, stage = 0;						//n��ʼֵΪ1����ʾ���㷶Χ��ֻ��1������Ҳ������Ҫ��1�Σ�stage �Ѿ��²�Ĵ��� 
	srand(time(NULL));						//�趨��������� 
	ans = ((1 + rand() % 333) * 3);					//����Ҫ���趨������� 
	num = 999 / 3;
	while (num != 1)							//������ʵĲ������� n 
	{
		num = num / 2;
		n++;
	}
	printf("��һ����3~999֮����Ϊ3�ı���������\n");
	do
	{
		printf("��ʣ��%d�λ��ᣬ�������", n - stage);
		scanf_s("%d", &no);					//����²��� 
		if (no % 3 != 0)
		{
			printf("�������\n");
		}
		else {
			stage++;						//�������Ϊ3�ı���ʱ�������� 
			if (no>ans)
				printf("����ƫ��\n");
			else if (no<ans)
				printf("����ƫС\n");
		}
	} while (no != ans && stage<n);

	if (no != ans)
		printf("���ź������ǣ�%d", ans);
	else {
		printf("��ȷ��\n");
		printf("������%d�β���\n", stage);
	}
	return 0;
}