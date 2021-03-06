/*
	程序功能：简单模拟炸弹人游戏情景。'#'表示墙，'G'表示怪物，'.'表示平地。
			  假设炸弹上下左右爆炸，爆炸距离无限（直到墙'#')，选取一平地做到消灭怪物最多。
		缺陷：得出的合理的放置可能不能抵达，即四周全封闭
	枚举应用：一一比较每一个平地，计算出消灭数。

*/
#include<stdio.h>
int main()
{	//地图：13*13
	char a[20][21] = {
		//0	  1   2   3   4   5   6   7   8   9   10  11  12
		{'#','#','#','#','#','#','#','#','#','#','#','#','#'},      //0
		{'#','G','G','.','G','G','G','#','G','G','G','.','#'},      //1
		{'#','#','#','.','#','G','#','G','#','G','#','G','#'},		//2
		{'#','.','.','.','.','.','.','.','#','.','.','G','#'},		//3
		{'#','G','#','.','#','#','#','.','#','G','#','G','#'},		//4
		{'#','G','#','.','#','#','#','.','#','.','G','G','#'},		//5
		{'#','G','#','.','#','G','#','.','#','.','#','#','#'},		//6
		{'#','#','G','.','.','.','G','.','.','.','.','.','#'},		//7
		{'#','G','#','.','#','G','#','#','#','.','#','G','#'},		//8
		{'#','.','.','.','G','#','G','G','G','.','G','G','#'},		//9
		{'#','G','#','.','#','G','#','G','#','.','#','G','#'},		//10
		{'#','G','G','.','G','G','G','#','G','.','G','G','#'},		//11
		{'#','#','#','#','#','#','#','#','#','#','#','#','#'}		//12
	};
	int i, j, sum, map = 0, p, q, x, y, n, m;

	for (i = 0; i <= 12; i++)                         //后行                   
	{
		for (j = 0; j <= 12; j++)                     //先列
		{
			if (a[i][j] == '.')                       //如果是平地，则计算         
			{
				sum = 0;                              // sum 消灭数
				x = i; y = j;                         // x, y 统计四个方向可消灭敌人数

				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
						sum++;
					x--;                              //x-- 向上统计
				}

				x = i;y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
						sum++;
					x++;                              //x++ 向下统计
				}

				x = i;y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
						sum++;
					y--;                             //y-- 向左统计
				}

				x = i; y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
						sum++;
					y++;                             //y++ 向右统计
				}

				if (sum > map)                       //map表示更新后待输出的消灭敌人数
				{
					map = sum;
					p = i;                           // p,q 表示更新后待输出的最佳平地
					q = j;
				}
			}
		}
	}

	printf("将炸弹反放置在 (%d,%d)，最多可以消灭敌人 %d 个\n", p, q, map);
	getchar();
	getchar();
	return 0;
}