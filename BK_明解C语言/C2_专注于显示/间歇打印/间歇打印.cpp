/*
�����ܣ���ӡ����ʱ��ÿ��һ���ӡһ���������ϸ�������
clock():����������ĳ�����������ѵ�ʱ�䣬�����Ϊִ�е�������ʱ�����ѻ��ѵ�ʱ�䡣
*/
#include<stdio.h>
#include<time.h>

int sleep(unsigned long x)								//�ȴ� x ����
{
	clock_t c1 = clock(), c2;
	do
	{
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0*(c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}
int main()
{
	int i;
	clock_t c;

	for (i = 11; i > 0; i--)					// ��10����
	{
		printf("\r%2d", i);						// '\r'�س����ص����п�ͷ
		fflush(stdout);							// ǿ����ջ��������ݣ�ʹ��������ӡ
		sleep(1000);
	}
	printf("\rFIRE!\n");

	c = clock();								// ��¼������������ʱ��
	printf("����ʼ���к󾭹���%.1f�롣\n", (double)c / CLOCKS_PER_SEC);
	getchar();
	return 0;
}