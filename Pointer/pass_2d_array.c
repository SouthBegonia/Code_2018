/*��3x4�Ķ�λ���鴫�ݸ�����func()��Ȼ����func()�н����������*/
#include<stdio.h>

void func(int (*hoge)[3])   //���ݵĶ�ά����
{
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("%d, ",hoge[i][j]);
		putchar('\n');
	}
}

int main()
{
	int hoge[][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9},
	{10,11,12},
	};
	
	func(hoge);
	
	getchar();
	return 0;
}
