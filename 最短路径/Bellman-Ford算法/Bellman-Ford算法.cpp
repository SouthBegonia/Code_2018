/*
	�����ܣ�������и�Ȩ�ߵ�ͼ���ߵ�ȨֵΪ������
	Ballman-Ford�㷨�������еı߽���n-1�Ρ��ɳڡ�������
	����ͼ�� C code\Code_2018\���·��\Bellman-Ford�㷨\Ballman-Ford�㷨.jpg
*/
#include<stdio.h>
int main()
{
	int dis[10] = { 0,0,999999,999999,999999,999999 };
	int bak[10], i, k;
	int n = 5, m = 5;
	int u[10] = { 0,2,1,1,4,3 }, v[10] = { 0,3,2,5,5,4 }, w[10] = { 0,2,-3,5,2,3 };
	int check, flag;
	int inf = 999999;

	/*	��ʼ�����̣�u[],v[],w[],dis[]�Ѿ��趨��������Ŀɲο����´���
	for (i = 1; i <= m; i++)
		scanf_s("%d %d %d", &u[i], &v[i], &w[i]);
	for (i = 1; i <= n; i++)
		dis[i] = inf;
	dis[1] = 0;
	*/
	for (k = 1; k <= n - 1; k++)							// ���� n-1 ���ɳ�
	{
		for (i = 1; i <= n; i++)							// ��dis���鱸����bak������
			bak[i] = dis[i];
		for (i = 1; i <= m; i++)							// ���� 1 ���ɳ�
			if (dis[v[i]] > dis[u[i]] + w[i])
				dis[v[i]] = dis[u[i]] + w[i];
		check = 0;
		for(i=1;i<=n;i++)									// ���dis����û�и��£��ɳڣ�������ǰ�˳�
			if (bak[i] != dis[i])
			{
				check = 1;
				break;
			}
	}
	flag = 0;
	for (i = 1; i <= m; i++)								// ��⸺Ȩ��·
		if (dis[v[i]] > dis[u[i]] + w[i])
			flag = 1;
	if (flag == 1)
		printf("��ͼ���и�Ȩ��·��\n");
	else
	{
		for (i = 1; i <= n; i++)
			printf("%d ", dis[i]);
	}
	getchar();
	getchar();
	return 0;
}