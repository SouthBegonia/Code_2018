/*
�����ܣ���һ��ӡ�ַ����е��ַ�����ӡ�������һ������ȥ��
���ģ�������һ��ȥ�Ĵ��� printf("\b \b")
*/
#include<stdio.h>
#include<time.h>
#include<string.h>

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
	char name[] = "Hello World!";
	int name_len = strlen(name);

	while (1)
	{
		for (i = 0; i < name_len; i++)				//��ͷ��ʼ��һ��ӡ
		{
			putchar(name[i]);					
			fflush(stdout);
			sleep(500);
		}
		for (i = 0; i < name_len; i++)				//��ĩβ��ʼ��һ��ȥ
		{
			printf("\b \b");						//ע�⣺���ƶ���굽��һλ�ã��ٴ�ӡ�հ׷������ƶ�
			fflush(stdout);
			sleep(500);
		}
		printf("Done!\n");
		getchar();
		getchar();
		return 0;
	}
}