/*
�����ܣ�ʵ���ַ����Ĺ�����ӡ�������ٶȿ��趨��
���ģ���������ҹ����������𣬹����ٶȵ��趨��
*/
#include<stdio.h>
#include<string.h>
#include<time.h>

int sleep(unsigned long x)					//�ȴ� x ����
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
	int cnt = 0;							//�ڼ����ַ�����ǰ��
	char name[] = "Hello World ";			//Ҫ��ʾ���ַ���
	int name_len = strlen(name);
	
	while (1)
	{
		putchar('\r');						//����Ƶ����п�ͷ
		for (i = 0; i < name_len; i++)
		{
			if (cnt + i < name_len)
				putchar(name[cnt + i]);
			else
				putchar(name[cnt + i - name_len]);
		}
		fflush(stdout);
		sleep(500);							//0.5���������һ��

		/*�������ҹ���
		if (cnt > 0)
			cnt--;
		else
			cnt = name_len - 1;
		*/

		/*�����������*/
		if (cnt < name_len - 1)
			cnt++;							
		else
			cnt = 0;						//�ַ�������������һ�Σ���һ�δ���ǰ����ַ���ʼ
	}
	getchar();
	getchar();
	return 0;
}