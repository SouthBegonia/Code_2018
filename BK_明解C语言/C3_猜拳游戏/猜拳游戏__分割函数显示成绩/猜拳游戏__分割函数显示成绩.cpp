/*
�����ܣ�����Ϸ����ָ�Ϊ����������Ҵ�ӡ��������ʵ�ֲ�ȭ��Ϸ��
˼·���������ڵ���������£�
int main()
{
	/*��ʼ����
	do
{
	/*���в�ȭ��Ϸ*/
	/*��ʾ��������������*/
	/*�ж�ʤ��*/
	/*���±�������(ʤ��ƽ����)*/
	/*��ʾ�жϽ��*/
	/*ȷ���Ƿ��ٴ���ս
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
	do
	{
		printf("\nʯͷ������...");
		for (i = 0; i < 3; i++)
			printf("(%d)%s ", i, hd[i]);
		printf(":");
		scanf_s("%d", &human);
	} while (human < 0 || human>2);
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
	case 0:printf("ƽ�֡�");		break;
	case 1:printf("�����ˡ�");	break;
	case 2:printf("��Ӯ�ˡ�");	break;
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

	initialize();			//��ʼ����
	do
	{
		gesture();			//���в�ȭ��Ϸ
		printf("�ҳ�%s�����%s��\n", hd[comp], hd[human]);
		judge = (human - comp + 3) % 3;		//�ж�ʤ��
		count_no(judge);					//����ʤ��/ʧ��/ƽ�ִ���
		disp_result(judge);					//��ʾ�жϽ��
		retry = confirm_retry();			//ȷ���Ƿ��ٴ���Ϸ
	} while (retry == 1);
	printf("\n���������%dʤ%d��%dƽ��\n", win_no, lose_no, draw_no);
	getchar();
	return 0;
}