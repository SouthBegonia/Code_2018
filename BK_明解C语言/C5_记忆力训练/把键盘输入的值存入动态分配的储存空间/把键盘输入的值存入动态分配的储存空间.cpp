/*
�����ܣ���ʵ�ְѼ���ֵ��������Ķ�̬����ռ䡣
���ģ�scanf()������Ϣ���洢��λ�á�
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *x;

	x = (int *)malloc(sizeof(int));		//���䣨ǿ��ת�����ͣ�

	if (x == NULL)
		puts("����ռ����ʧ�ܡ�");
	else {
		printf("Ҫ���� *x ��ֵ��");
		scanf("%d", x);			
		/*
		ע�⣬�˴��ǰ�scanf()��ȡ������ֵ���� calloc() Ϊ x ������Ŀռ䣻
		����д�� &x ���ʾ������ֵ������ָ�� x �Ŀռ䣬��ʱ x ����ֵ����д���޷�ָ��calloc()����Ŀռ䣬��free()��Ѳ���ȷ��ֵ(calloc����Ŀռ�ĵ�ַ�����ֵ)���ݸ�scanf()
		*/
		printf("*x = %d\n", *x);
		free(x);
	}
	getchar(); getchar();
	return 0;
}