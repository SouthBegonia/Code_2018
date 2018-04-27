/*

*/
#include<stdio.h>
int main()
{
	int n, m, i, k;
	int u[8], v[8], w[8];
	// int u[8] = { 0,1,1,2,2,3,4,5 }, v[8] = { 0,2,5,3,5,4,5,3 }, w[8] = { 0,2,10,3,7,4,5,6 };
	int first[6] = { 0 }, next[8];
	int dis[6] = { 0 }, book[6] = { 0 };
	int que[101] = { 0 }, head = 1, tail = 1;
	int inf = 999999;

	scanf_s("%d %d", &n, &m);
	for (i = 1; i <= n; i++)								// ��ʼ�� dis ���飬��ʾ1�Ŷ��㵽i�Ŷ���ĳ�ʼ����
		dis[i] = inf;
	dis[1] = 0;
	for (i = 1; i <= n; i++)								// ��ʼ�� book ���飬��ʾ��ʼʱ�����ڶ�����
		book[i] = 0;
	for (i = 1; i <= n; i++)								// ��ʼ�� first ���飬��ʾ1~n�Ŷ�����ʱ��û�б�
		first[i] = -1;

	for (i = 1; i <= m; i++)
	{
		scanf_s("%d %d %d", &u[i], &v[i], &w[i]);
		next[i] = first[u[i]];								// �����ڽӱ�
		first[u[i]] = i;
	}

	que[tail] = 1;											// 1�Ŷ������
	tail++;
	book[1] = 1;											// ���1�Ŷ����Ѿ����

	while (head < tail)
	{
		k = first[que[head]];								// ��ǰ��Ҫ����Ķ��׶���
		while (k != -1)										// ɨ�赱ǰ�������еı�
		{
			if (dis[v[k]] > dis[u[k]] + w[k])				// �ж��Ƿ��ɳڳɹ�
			{
				dis[v[k]] = dis[u[k]] + w[k];				// ���¶���1�Ŷ��� v[k] �ľ���
				if (book[v[k]] == 0)						// �ж϶��� v[k] �Ƿ��ڶ�����
				{
					que[tail] = v[k];						// v[k] �������
					tail++;
					book[v[k]] = 1;							// ��� v[k] �����Ѿ����
				}
			}
			k = next[k];
		}
		book[que[head]] = 0;								// ����
		head++;
	}
	for (i = 1; i <= n; i++)
		printf("dis[%d]=%d ", i, dis[i]);

	getchar();
	getchar();
	return 0;
}