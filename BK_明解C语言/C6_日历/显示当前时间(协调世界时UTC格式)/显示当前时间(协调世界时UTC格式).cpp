/*
�����ܣ���ʾ��ǰʱ�̵�Э������ʱ��UTC����
Э������ʱ(UTC)����һ������ԭ���ӣ���һ���̶��Ͼ����ӽ����ڵ�����ת������ʱ(UT)��ʱ�䡣����ʱ���Э������ʱ����8Сʱ��
gmtime:��currentָ�������ʱ��ת����Э������ʱ��ʾ�ķֽ�ʱ�䡣
��ע����������DevC++��VC++6.0����������������VS2017����ʾ����E0144��C2440
*/
#include<stdio.h>
#include<time.h>

void put_data(const struct tm *timer)
{
	char *wday_name[] = { "��","һ","��","��","��","��","��" };

	printf("%4d ��%02d��%02d��(%s)%02dʱ%02d��%02d��",
		timer->tm_year + 1900,		//��
		timer->tm_mon + 1,			//��
		timer->tm_mday,				//��
		wday_name[timer->tm_wday],	//����
		timer->tm_hour,				//ʱ
		timer->tm_min,				//��
		timer->tm_sec				//��
	);
}

int main()
{
	time_t current;		//����ʱ�䣨�������������ͣ�VS2017��Ϊ typedef long time_t��
	struct tm *timer;	//�ֽ�ʱ��(�ṹ��)

	time(&current);		//��ȡ��ǰʱ��
	timer = (gmtime(&current));	//ת���ɷֽ�ʱ�䣨Э������ʱ��

	printf("��ǰʱ���������UTC��ʾ��");
	put_data(timer);
	printf("��\n");

	getchar(); getchar();
	return 0;
}