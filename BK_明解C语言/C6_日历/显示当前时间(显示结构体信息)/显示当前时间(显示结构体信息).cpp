/*
�����ܣ���ʾ��ǰʱ�̵�ʱ�䣨�����շ����ܼ�����

˵���������ڲ���ϸ��ʾ �ֽ�ʱ��ṹ��tm �ĸ���Ա�����

��ע����������DevC++��VC++6.0����������������VS2017����ʾ����E0144��C2440
ʱ��ṹʾ��ͼ�� \Code_2018\BK_����C����\C6_����\��ʾ��ǰʱ��(��ʾ�ṹ����Ϣ).jpg
*/
#include<stdio.h>
#include<time.h>

void put_data(const struct tm *timer)
{
	char *wday_name[] = { "��","һ","��","��","��","��","��" };

	printf("%4d��%02d��%02d��(%s)%02dʱ%02d��%02d��",
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
	/*
	tm:�ֽ�ʱ��Ľṹ�����ͣ�ʾ�����£�
	struct tm {
		int tm_sec;		//�루0~61��
		int tm_min;		//�֣�0~59��
		int tm_hour;	//ʱ��0~23��
		int tm_mday;	//�գ�0~31��
		int tm_mon;		//��1�¿�ʼ���·ݣ�0~11��
		int tm_year;	//��1900��ʼ�����
		int tm_wday;	//���ڣ�������~��������0~6��
		int tm_yday;	//��1��1�տ�ʼ��������0~365��
		int tm_isdst;	//����ʱ��־
	};
	*/
	time(&current);		//��ȡ��ǰʱ��
	timer = (localtime(&current));	//ת���ɷֽ�ʱ�䣨����ʱ�䣩

	printf("��ǰ��ʱ����");
	put_data(timer);
	printf("��\n");

	getchar(); getchar();
	return 0;
}
