/*
�����ܣ�������򻯶�switch���Ĳ�ȭ��Ϸ��
˼·�������������Ƶ����飬ÿ�δ�ӡĳ������ʱ�����ɵ������飨��ֵ��Ӧ���ƺ�������ţ�����ֵ��Ӧ���Ƶ����ģ���
��ע����������ʱ�������� Microsoft Visual Studio Community 2017 �»������ʾ��E0144	"const char *" ���͵�ֵ�������ڳ�ʼ�� "char *" ���͵�ʵ�塣
��������Dev C++ ��Visual C++ 6.0 ������������
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int i;
	int human;			//�������
	int comp;			//��������
	int judge;			//ʤ���ж�
	int retry;			//�Ƿ��ٴ���Ϸ
	char *hd[10]= { "ʯͷ","����","��" };			//ָ������洢���ƣ�Ҳ���ö�ά���飩�������

	srand(time(NULL));

	printf("��ȭ��Ϸ��ʼ��\n");
	do
	{
		comp = rand() % 3;
		do
		{
			printf("\nʯͷ������...");
			for (i = 0; i < 3; i++)
				printf("(%d)%s", i, hd[i]);			//���β���ָ����ֵ
			printf(": ");
			scanf_s("%d", &human);
		} while (human < 0 || human>2);
		printf("�ҳ�%s�����%s��\n", hd[comp], hd[human]);	//�ٴ�ʹ��ָ������

		judge = (human - comp + 3) % 3;		//�ж�ʤ��

		switch (judge)
		{
		case 0:puts("ƽ��");		break;
		case 1:puts("������");	break;
		case 2:puts("��Ӯ��");	break;
		}
		printf("����һ����...(0)�� (1)�ǣ�");
		scanf_s("%d", &retry);
	} while (retry == 1);

	getchar();
	getchar();
	return 0;
}