/*
�����ܣ���дbput(const char*s,int d,int e,int n)����ʵ���ַ���s��ʾd�������ʧe���룬�ظ�n�κ󷵻ص��÷���
���ģ�ע���ַ������뺯���ĸ�ʽ����ʾ��ͣ����ӡ��ʱ�䣬��ʧ���հ����ݸ��ǵ�ʱ�䡣
ע�⣺puts()��printf()��ӡ�ַ�������puts()����ĩβ���'\n'
*/
#include<stdio.h>
#include<string.h>
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

void bput(const char *s, int d, int e, int n)
{
	int i, s_len;
	s_len = strlen(s);
	do
	{
		putchar('\r');							//���ص��������
		printf("%s", s);
		/*ע�⣺�˴���ӡs[]������puts()����Ϊputs()����ĩβ���'\n'*/
		fflush(stdout);
		sleep(d);								//����ʾd����
		putchar('\r');
		for (i = 0; i < s_len; i++)				//�հ׷�����
			putchar(' ');
		fflush(stdout);
		sleep(e);								//��ʧe����
		n--;
	} while (n != 0);
	return;
}

int main()
{
	int a, b, c;
	char k[] = "Hello";
	printf("����������ʾʱ��(ms)����ʧʱ��(ms)���ظ�������");
	scanf_s("%d %d %d", &a, &b, &c);
	bput(k, a, b, c);
	printf("\rDone!\n");
	getchar();
	getchar();
	return 0;
}

