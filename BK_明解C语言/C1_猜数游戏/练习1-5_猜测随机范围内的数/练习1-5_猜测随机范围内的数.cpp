/*
�����ܣ��²����֡������˷�ΧΪ�����(min,max)֮�������
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define RAND_MAX 32767

int main()
{
	int min, max, t = 0;
	int no;
	int ans, num;
	int n = 1, stage = 0;						//n��ʼֵΪ1����ʾ���㷶Χ��ֻ��1������Ҳ������Ҫ��1�� 
	srand(time(NULL));
	min = rand() % RAND_MAX;
	max = rand() % RAND_MAX;
	if (min>max)								//������Χ 
	{
		t = min;
		min = max;
		max = t;
	}

	ans = min + rand() % (max - min + 1);				//����Ŀ��ֵ 

	num = max - min;
	while (num != 1)							//������ʵĲ������� n 
	{
		num = num / 2;
		n++;
	}
	printf("��һ����%d~%d֮�������\n", min, max);
	do
	{
		printf("��ʣ��%d�λ��ᣬ�������", n - stage);
		scanf_s("%d", &no);					//����²��� 
		stage++;							//�������Ϊ3�ı���ʱ�������� 
		if (no>ans)
			printf("����ƫ��\n");
		else if (no<ans)
			printf("����ƫС\n");
	} while (no != ans && stage<n);
	if (no != ans)
		printf("���ź������ǣ�%d", ans);
	else {
		printf("��ȷ��\n");
		printf("������%d�β���\n", stage);
	}
	return 0;
}
