/*
	�����ܣ����� n �����У�m ����·������ͼ��֮��·����Ϊ1��1��ת����Ҫ��������ʼ���յ���У������������ת��������
	������ȱ������ҳ���㵽�յ����ٵı�����������Ϊ������ת��������
					����������������������б�Ȩֵ��ͬ�������Ѱ����ֵֻ�迴����������
*/
#include<stdio.h>
struct note
{
	int x;												// ���б��
	int s;												// ת������
};
int main()
{
	struct note que[2501];
	int e[51][51] = { 0 }, book[51] = { 0 };
	int head, tail;
	int i, j, a, b, cur, flag=0;
	int n, m;											// n�� ���У�m ��·��
	int start, end;										// �����к��յ����

	/*
	�����ĳ��к��ߵ�ͼ����Codes_2018/ͼ/ת������.jpg
	*/
	printf("�����������������·�����������С��յ���У�");
	scanf_s("%d %d %d %d", &n, &m, &start, &end);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = 999999;

	for (i = 1; i <= m; i++)							// �����ض�����·�ߵ�ת������ 1
	{
		scanf_s("%d %d", &a, &b);
		e[a][b] = 1;
		e[b][a] = 1;									// ����ͼ�������б�Ȩ����ͬ
	}

	head = 1, tail = 1;
	que[tail].x = start;
	que[tail].s = 0;
	tail++;
	book[1] = start;

	while (head < tail)
	{
		cur = que[head].x;								// ��ǰ�������׳��еı��
		for (j = 1; j <= n; j++)
		{
			if (e[cur][j] != 999999 && book[j] == 0)
			{
				que[tail].x = j;						// ����������j�ų������
				que[tail].s = que[head].s + 1;			// ת������+1
				tail++;
				book[j] = 1;							// ��� j �������ڶ�����
				/*
					������ȱ�������Ҫ���α������е㣬����ȡ����ǣ������ܷ���ĳһ�㡣
				*/
			}
			if (que[tail - 1].x == end)					// ����Ŀ�ĵس��У��˳�ѭ��
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
		head++;											// ������һ��չ��
	}

	printf("�ӳ��� %d �� %d ������ת�� %d ��", start, end, que[tail - 1].s);
	getchar();
	getchar();
	return 0;
}
/*
	���룺 5 7 1 5
		   1 2
		   1 3
		   2 3
		   2 4
		   3 4
		   3 5
		   4 5
	������ӳ��� 1 �� 5 ������ת�� 2 ��
*/