/*
�����ܣ�����asctime()����ʵ���ض���ʽʱ�����ʾ��
asctime:�ѽṹ��ķֽ�ʱ��ת�������Ƹ�ʽ���ַ����� sun sep 16 01:03:49 1990\n\0
asctime2�� sun sep 16 01:03:49 1990\0
ע�⣺����asctime������ʾʱ�䣬��ĩβ�ǻ��з��Ϳ��ַ���һ��26���ַ�
��ע��VS�³���C4996����֪asctime()��������ȫ����Ԥ��������������� _CRT_SECURE_NO_DEPRECATE ���ɡ�
*/
#include<stdio.h>
#include<time.h>

/*---����asctime�����ѷֽ�ʱ��ת�����ַ���������ӻ��з���---*/
char *asctime2(const struct tm *timeptr)
{
	const char wday_name[7][4] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };		//ע��ÿ��Ԫ��4�ֽ�
	const char mon_name[12][4] = { "Jan","Feb","Mar","Apr","May","Jun",
								"Jul","Aug","Sep","Oct","Nov","Dec" };
	static char result[25];		//���ڴ����ַ����Ŀռ仹�Ǿ�̬�ռ�

	sprintf(result, "%0.3s %.3s %02d %02d:%02d:%02d %4d",
		wday_name[timeptr->tm_wday],
		mon_name[timeptr->tm_mon],
		timeptr->tm_mday,
		timeptr->tm_hour,
		timeptr->tm_min,
		timeptr->tm_sec,
		timeptr->tm_year + 1900
	);
	return result;
}

int main()
{
	time_t current = time(NULL);		//��ȡ��ǰʱ��
	printf("��ǰ���ں�ʱ�䣺%s", asctime(localtime(&current)));		//�˴������е���asctime2()����ʵ�����ض�����
	
	getchar(); getchar();
	return 0;
}
