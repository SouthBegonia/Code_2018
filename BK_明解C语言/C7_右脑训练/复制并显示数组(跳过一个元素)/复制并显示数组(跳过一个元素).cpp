/*
�����ܣ����Ʋ���ʾ����(����ĳһ��Ԫ��)
*/
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i, j, x;
	int dgt[9] = { 1,2,3,4,5,6,7,8,9 };
	int a[8] = { 0 };

	srand(time(NULL));

	x = rand() % 9;		//����趨������Ԫ��

	i = j = 0;
	while (i < 9)
	{
		if (i != x)
			a[j++] = dgt[i];	//����ʱ����dgt[x]
		i++;
	}
	for (i = 0; i < 8; i++)
		printf("%d  ", a[i]);

	putchar('\n');
	getchar();
	return 0;

}