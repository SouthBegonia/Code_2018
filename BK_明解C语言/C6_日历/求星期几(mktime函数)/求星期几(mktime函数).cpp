/*
�����ܣ���ȡ�����գ�������������ڼ���Ӧ��mktime()������

mktime():
ԭ�ͣ�time_t mktime(struct tm *timeptr)
�ѱ�ʾtimeptrָ��Ľṹ���еı���ʱ��ķֽ�ʱ��ת������time��������ֵ������ͬ������ʽ������ʱ��ֵ��
�书�ܿ��Լ����Ϊ���������趨�ı���ʱ��ķֽ�ʱ��Ľṹ��(t)ת���ɱ�׼��ʽ�ķֽ�ʱ��(�� \Code_2018\BK_����C����\C6_����\��ʾ��ǰʱ��(��ʾ�ṹ����Ϣ))

˼·���������趨���޸ķֽ�ʱ��ṹ�� tm �Ĳ����󣬵���mktime()���������ڲ��Զ��� tm �ڵ����������趨��(����� t.tm_wday)

��ע��1. C�����ṩ�Ĺ������ں�ʱ��Ŀⲻһ������ȷ����1970��1��1����ǰ�����ڡ�
2. VS2017�´���ָ�벢��ʼ���α�����������IDE���С�
*/

#include<stdio.h>
#include<time.h>

/*---��year��month��day�������ڼ�---*/
int dayofweek(int year, int month, int day)
{
	struct tm t;		//���ɷֽ�ʱ��(�ṹ��)

	t.tm_year = year - 1900;	//�������
	t.tm_mon = month - 1;		//�����·�
	t.tm_mday = day;	//������
	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0;
	t.tm_isdst = -1;
	
	if (mktime(&t) == (time_t)-1)
		return -1;
	return t.tm_wday;		
	/*����mktime()�Զ��޸��趨������,�ѷֽ�ʱ��ת����time_t�͵�ֵ�ñ�����ʽ
	����������mktime()��������t.tm_wdayΪnull���������Զ��趨*/
}

int main()
{
	int y, m, d, w;
	char *ws[] = { "��","һ","��","��","��","��","��" };

	printf("�����ڡ�\n");
	printf("�꣺ ");	scanf("%d", &y);
	printf("�£� ");	scanf("%d", &m);
	printf("�գ� ");	scanf("%d", &d);

	w = dayofweek(y, m, d);		//ע�Ⲣδʹ��time()��ȡ��ǰʱ�䴫�룬������dayofweek()���趨һ���ֽ�ʱ��ṹ�塣

	if (w != -1)
		printf("��һ������%s��\n", ws[w]);
	else
		printf("�޷�������ڡ�\n");

	getchar();
	return 0;
}