/*
�����ܣ���ӡ�����������Ȼ����
���ģ���̬���䴢��ռ䡣
malloc(size_t n,size_t size):Ϊn����СΪsize�ֽڵĶ�����䴢��ռ䣬�ÿռ��ڵ�����λ�����ʼ��Ϊ0
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *x;
	int n;

	printf("Ҫ���䴢��ռ�������Ԫ�ظ�����");
	scanf("%d", &n);

	x = (int *)calloc(n, sizeof(int));		// ����

	if (x == NULL)
		puts("����ռ����ʧ�ܡ�");
	else {
		int i;

		printf("��ʼ����\n");
		for (i = 0; i < n; i++)
			printf("x[%d] = %d\n", i, x[i]);
		
		printf("\n��ֵ��\n");
		for (i = 0; i < n; i++)			//��ֵ
			x[i] = i;
		for (i = 0; i < n; i++)
			printf("x[%d] = %d\n", i, x[i]);
		free(x);			//�ͷ�
	}
	getchar(); getchar();
	return 0;
}