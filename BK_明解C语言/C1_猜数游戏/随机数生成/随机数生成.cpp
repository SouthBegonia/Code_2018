/*
�����ܣ��²�ָ����Χ�ڵ������������ӡ���²������
rand():ͷ�ļ�<stdlib.h>
��ʽ��int rand(void);
���ܣ�����α���������������ֵ(seed,Ĭ��Ϊ1)�������ض��������ɵ��������

srand():�ļ�<stdlib.h>
��ʽ��void srand(unsigned seed);
���ܣ����������õ�rand()��������(seed)�����������µ�α��������С�

srand(time(NULL))�������г���ʱ���ʱ�䵱����(seed)��
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX_STAGE 10						//��������������� 

int main()
{
	int i;
	int stage;								//������Ĵ��� 
	int no;									//�µ��� 
	int ans;								//������� 
	int num[MAX_STAGE];						//�洢�µ�������ʷ��¼ 
	srand(time(NULL));						//�趨����������� 
	ans = rand() % 1000;						//����0~999������� 

	printf("���һ��0~999��������\n");
	stage = 0;
	do
	{
		printf("��ʣ�� %d �λ��ᡣ������� ", MAX_STAGE - stage);
		scanf_s("%d", &no);
		num[stage++] = no;					//�µ�������һ�������� 
		if (no>ans)
			printf("��Сһ�㡣\n");
		else if (no<ans)
			printf("�ٴ�һ�㡣\n");
	} while (no != ans && stage < MAX_STAGE);
	if (no != ans)
		printf("���ź�����ȷ���� %d��\n", ans);
	else {
		printf("�ش���ȷ��\n");
		printf("������ %d �β����ˡ�\n", stage);
	}
	puts("\n--- �����¼ ---");
	for (i = 0; i<stage; i++)
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);

	return 0;
}