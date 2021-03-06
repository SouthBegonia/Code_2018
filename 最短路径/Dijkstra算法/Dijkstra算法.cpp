/*
	程序功能：计算指定一个点（源点）到其他顶点的最短路径，也叫“单源最短路径”。
	Dijkstra算法：每次找到离源点最近的一个顶点，然后以该点为中心进行扩展，最终得到源点到其余所有点的最短路径。
	概念图：C code\Code_2018\最短路径\Dijkstra算法\Dijkstra算法.jpg
*/
#include<stdio.h>
int main()
{
	int dis[10], book[10], i=1, j=1, n=6, m=9, t1, t2, t3, u, v, min;
	int inf = 999999;
	int e[10][10] = {
		{0,		0,		0,		0,	   0,	  0,	 0},
		{0,		0,		1,	   12,999999,999999,999999},
		{0,999999,		0,		9,	   3,999999,999999},
		{0,999999, 999999,		0,999999,     5,999999},
		{0,999999, 999999,		4,	   0,	 13,    15},
		{0,999999, 999999, 999999,999999,	  0,     4},
		{0,999999, 999999, 999999,999999,999999,     0},
	};
	/* 
	读入顶点个数 n ，边的条数 m ,已经预设为 6 9
	scanf_s("%d %d",&n,&m);

	初始化，e[10][10]已经提前预设无序再输入，如需要自行设置参考一下代码
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j)
				e[i][j] = 0
			else
				e[i][j] = inf;
	读入边得信息
	for (i = 1; i <= m; i++)
	{
		scanf_s("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
	}
	*/
	for (i = 1; i <= n; i++)							// dis数组用来储存源点到其余各顶点的路程
		dis[i] = e[1][i];
	for (i = 1; i <= n; i++)
		book[i] = 0;
	book[1] = 1;										// 标记源点
	printf("更新前dis[10]为：\n");
	for (i = 1; i <= n; i++)
		printf("%7d", dis[i]);
	for (i = 1; i <= n - 1; i++)
	{
		min = inf;
		for (j = 1; j <= n; j++)
		{
			if (book[j] == 0 && dis[j] < min)
			{
				min = dis[j];
				u = j;
			}
		}
		book[u] = 1;
		for (v = 1; v <= n; v++)
		{
			if (e[u][v] < inf)
			{
				if (dis[v] > dis[u] + e[u][v])
					dis[v] = dis[u] + e[u][v];
			}
		}
		/*
			46~66行代码解释：找到离源点（1）最近的点，首先是2(u=2)号点，
								将2号点看作中转点，执行57~65行，进行类似Floyd-Warshall的算法过程，检查该中转点(u=2)是否能使得源点到某点的距离缩短；
								如果能（63行)，则更新dis[]。
							前后依次找到离源点最近的点（3、4、5、6）作为中转点，算上2号点共执行 n-1次循环（注意57行的标记）。
							基本思路在于：依次找中转点，能缩短距离则更新。
		*/
	}
	printf("\n更新后的dis[10]为：\n");
	for (i = 1; i <= n; i++)
		printf("%7d", dis[i]);

	getchar();
	getchar();
	return 0;
}