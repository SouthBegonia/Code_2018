/*
�����ܣ���Ъ�Ը��Ǵ�ӡpritnf()��䡣
ԭ��'\r'�س���ʹ���ص�������ǰ�棬�µ��ַ������ϵ��ַ��������糤�̲�һ����ɲ���ȫ���ǡ�
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
	printf("My name is South.");
	fflush(stdout);
	sleep(2000);
	printf("\rHow do you do?");
	fflush(stdout);
	sleep(2000);
	printf("\rThanks!");
	/*
	ʹ�ûس���'\r'����Ƶ���λ��������������ӡֻ�����˵�һ��Ŀ�ǰ���֣�
	ԭ��������������printf()���ݳ��Ȳ�һ�����뽫������ĩβ��ӿհ׷����룬��ʵ����ȫ���ǡ�
	*/
	getchar();
	return 0;
}