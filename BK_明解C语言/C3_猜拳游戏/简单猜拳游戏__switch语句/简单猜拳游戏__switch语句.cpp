/*
�����ܣ�ʵ�ּ򵥵Ĳ�ȭ��Ϸ��Ҫ����ʾ�˵�����(human)�͵��Ե�����(comp)�����ơ�
˼·���趨��������Ϊ0��1��2,�����жϹ�ʽ(human-comp + 3)%3���ó�����ֵ��0,��1��2����ʾΪʤ���������switch�����
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int human;			//�������
	int comp;			//��������
	int judge;			//ʤ���ж�
	int retry;			//�Ƿ��ٴ���Ϸ

	srand(time(NULL));
	printf("��ȭ��Ϸ��ʼ!\n");

	do
	{
		comp = rand() % 3;			//������ɵ�������
		do
		{
			printf("\nʯͷ������...(0)ʯͷ (1)���� (3)���� ");
			scanf_s("%d", &human);	//��ȡ�������
		} while (human < 0 || human>2);
		printf("�ҳ�");
		switch (comp)			//��ʾ���������
		{
		case 0: printf("ʯͷ");	break;
		case 1: printf("����");	break;
		case 2: printf("��");		break;
		}
		printf(",���");
		switch (human)			//��ʾ�������
		{
		case 0: printf("ʯͷ");	break;
		case 1: printf("����");	break;
		case 2: printf("��");		break;
		}
		printf("��\n");

		judge = (human - comp + 3) % 3;		//�ж�ʤ����ʽ������У�ʤ��(2) ��(1) ƽ��(0)
		switch (judge)
		{
		case 0: printf("ƽ�֡�");	break;
		case 1: printf("�����ˡ�");	break;
		case 2:	printf("��Ӯ�ˡ�");	break;
		}
		printf("\n����һ����...(0)�� (1)��:");
		scanf_s("%d", &retry);
	} while (retry == 1);
	printf("��Ϸ������");
	getchar();
	getchar();
	return 0;
}