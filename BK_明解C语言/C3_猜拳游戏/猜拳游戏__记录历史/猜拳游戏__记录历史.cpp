/*
�����ܣ�����Ϸ����ָ�Ϊ����������Ҵ�ӡ����������������ʷ(˫�����Ƽ�ʤ�����)ʵ�ֲ�ȭ��Ϸ��
˼·���½�����洢ʤ�������˫�����Ƶ���ʷ����ע����Ϸ����������λ�ã���
�������ڵ���������£�
int main()
{
/*��ʼ����
do
{
/*���в�ȭ��Ϸ������¼˫������*/
/*��ʾ��������������*/
/*�ж�ʤ��������¼ʤ�����*/
/*���±�������(ʤ��ƽ����)*/
/*��ʾ�жϽ��*/
/*ȷ���Ƿ��ٴ���ս
/*��������+1
} while (retry == 1);
��ע����������ʱ�������� Microsoft Visual Studio Community 2017 �»������ʾ��E0144	"const char *" ���͵�ֵ�������ڳ�ʼ�� "char *" ���͵�ʵ�塣
��������Dev C++ ��Visual C++ 6.0 ������������
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int human;
int comp;
int win_no;
int lose_no;
int draw_no;
char *hd[] = { "ʯͷ","����","��" };

int n = 1;					//��¼��Ϸ����
int his_hum[1000];			//������Ƶ���ʷ
int his_com[1000];			//�������Ƶ���ʷ
int cout[1000];				//�洢ÿ����Ϸʤ����ֵ
char *end[] = { "ƽ��","ʧ��","ʤ��" };	//ʤ�����

/*---��ʼ����---*/
void initialize(void)
{
	win_no = 0;
	lose_no = 0;
	draw_no = 0;

	srand(time(NULL));
	printf("��ȭ��Ϸ��ʼ!\n");
}

/*---���в�ȭ��Ϸ(��ȡ/��������)---*/
void gesture(void)
{
	int i;
	comp = rand() % 3;
	his_com[n] = comp;
	do
	{
		printf("\nʯͷ������...");
		for (i = 0; i < 3; i++)
			printf("(%d)%s ", i, hd[i]);
		printf(":");
		scanf_s("%d", &human);
	} while (human < 0 || human>2);
	his_hum[n] = human;
	/*�����ڴ�n++����Ҫ����һ����ɵĶ�ȡ�����¡��жϺ�ſ�n++*/
}

/*---����ʤ��/ʧ��/ƽ�ִ���---*/
void count_no(int result)
{
	switch (result)
	{
	case 0:draw_no++;	break;
	case 1:lose_no++;	break;
	case 2:win_no++;	break;
	}
}

/*---��ʾ�жϽ��---*/
void disp_result(int result)
{
	switch (result)
	{
	case 0:
	{
		printf("ƽ�֡�");
		cout[n] = 0;
		break;
	}
	case 1:
	{
		printf("�����ˡ�");
		cout[n] = 1;
		break;
	}
	case 2:
	{
		printf("��Ӯ�ˡ�");
		cout[n] = 2;
		break;
	}
	}
}

/*---ȷ���Ƿ��ٴ���Ϸ---*/
int confirm_retry(void)
{
	int x;
	printf("����һ����...(0)�� (1)��: ");
	scanf_s("%d", &x);
	return x;
}

int main()
{
	int judge;
	int retry;
	int i;

	initialize();			//��ʼ����
	do
	{
		gesture();			//���в�ȭ��Ϸ
		printf("�ҳ�%s�����%s��\n", hd[comp], hd[human]);
		judge = (human - comp + 3) % 3;		//�ж�ʤ��
		count_no(judge);					//����ʤ��/ʧ��/ƽ�ִ���
		disp_result(judge);					//��ʾ�жϽ��
		retry = confirm_retry();			//ȷ���Ƿ��ٴ���Ϸ
		n++;								//���һ�α������̣�������һ��
	} while (retry == 1);
	printf("\n������ʷ��\n");
	printf("��    ����   ���\n");
	printf("-----------------\n");
	for (i = 1; i < n; i++)
	{
		printf("%-6s%-6s%-6s\n", hd[his_hum[i]], hd[his_com[i]], end[cout[i]]);
	}
	printf("-----------------\n");
	printf("\n�÷ֽ����%dʤ%d��%dƽ��\n", win_no, lose_no, draw_no);
	getchar();
	return 0;
}