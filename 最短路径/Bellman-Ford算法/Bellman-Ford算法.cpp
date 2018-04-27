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
	/*	u[]��v[]��w[]��ɵĸ����ߵ���Ϣ��˳������⣬��Ϊ��Ӱ���ɳڵĽ������������Ϣ�����Ӧ���� 2 3 2��1 2 -3 ��	*/
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
		/*
			���ݼ���ĸ�����Ϣ����30�еıȽ�Ϊ��
				dis[3]	dis[2]+2
				dis[2]	dis[1]-3
				dis[5]	dis[1]+5
				dis[5]	dis[4]+2
				dis[4]	dis[3]+3
			��Ҫ˵�����ǣ�ÿ���ɳڣ�dis[]ֵ��ı䣬���磺�ڽ��е�2�֣�k=2���ɳ�ʱ��33�����ɳ�dis[3]�������е�37��ʱ��dis[3]Ҳ��Ӧ�ı䡣
		*/
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