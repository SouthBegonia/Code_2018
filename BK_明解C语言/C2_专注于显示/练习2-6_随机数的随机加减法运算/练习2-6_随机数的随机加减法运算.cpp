/*
�����ܣ����n�μ򵥵���Ԫһ�η��̵ļӼ������㣬3������Ϊ�����������ļӼ���Ҳ�����
˼·������2�����ţ��ӻ��߼�������if()Ƕ�����г����п���(4��)������ͨ���������0~1֮��ȡ��
�ɻ󣺱���������п��ܽ�Ϊ��׾�������������ڶ����޷������switch()Ҳ���㡣��Ҫ���Ӽ����Ĵ��롣
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int a, b, c, i;									
	int n = 5;										//�ظ��������
	int x;											//����ֵ
	int sg_1, sg_2;									//���Ҳ���ţ�0Ϊ���ţ�1Ϊ�Ӻţ�
	clock_t start, end;								//��¼��ʱ
	srand(time(NULL));				
	start = clock();

	for (i = 1; i <= n; i++)						
	{
		a = rand() % 11;							//ȡ3��0~10�������	
		b = rand() % 11;
		c = rand() % 11;
		sg_1 = rand() % 2;							//��0��1֮�����ѡȡ
		sg_2 = rand() % 2;
		if (sg_1 == 0)								//��
		{
			if (sg_2 == 0)							//��+�ָ�
			{
				printf("%2d - %2d - %2d = ", a, b, c);
				do
				{
					scanf_s("%d", &x);
					if (x == a - b - c)
						break;
					printf("�ش�������������룺");
				} while (1);
			}
			else
			{
				printf("%2d - %2d + %2d = ", a, b, c);
				do                                  //��+����
				{
					scanf_s("%d", &x);
					if (x == a - b + c)
						break;
					printf("�ش�������������룺");
				} while (1);
			}
		}
		else										//����
		{
			if (sg_2 == 0)							//����+�Ҹ�
			{
				printf("%2d + %2d - %2d = ", a, b, c);
				do
				{
					scanf_s("%d", &x);
					if (x == a + b - c)
						break;
					printf("�ش�������������룺");
				} while (1);
			}
			else
			{
				printf("%2d + %2d + %2d = ", a, b, c);
				do                                  //����+����
				{
					scanf_s("%d", &x);
					if (x == a + b + c)
						break;
					printf("�ش�������������룺");
				} while (1);
			}
		}

	}
	end = clock();
	printf("Over!\n");
	printf("��ʱΪ��%.1f��\n", double(end - start) / CLOCKS_PER_SEC);
	getchar();
	getchar();
	return 0;
}