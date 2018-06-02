/*
�����ܣ���ӡĳ�����µ�������������ʾ���3���µ�������
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*---���µ�����---*/
int mday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

/*---��year��month��day�������ڼ�---*/
int dayofweek(int year, int month, int day)
{
	if (month == 1 || month == 2)
	{
		year--;
		month += 12;
	}
	return (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7;
}

/*---year��������ô(0������ƽ��/1����������)---*/
int is_leap(int year)
{
	return year % 4 == 0 && year != 0 || year % 400 == 0;
}

/*---year��month�µ�����(28~31)---*/
int monthday(int year, int month)
{
	if (month-- != 2)		//��month��2��ʱ
		return mday[month];
	return mday[month] + is_leap(year);	//��monthΪ2��ʱ
}

/*---��y��m�µ����������ά����s��---*/
void make_calendar(int y, int m, char s[7][22])
{
	int i, k;
	int wd = dayofweek(y, m, 1);		//y��m��1�ն�Ӧ������
	int mdays = monthday(y, m);			//y��m�µ�����
	char tmp[4];

	sprintf(s[0], "%10d / %02d      ", y, m);	//����(��/��)

	for (k = 1; k < 7; k++)		//�����������Ļ�����
		s[k][0] = '\0';			//ע����VS�� '\0' Ϊ'\000'  �������ַ�
	/*
	����sprintf��forѭ����Ҫ�ر�ע�⣺
	��ӡ���ַ�����С����Ϊ22�ֽ�(�洢��������ά����Ϊsbuf[3][7][22],������Ϣ��ĳ�д�СΪ22)
	��sprintf��forѭ������ӡ���ַ�����С�ڻ��ߵ���22�������������ӡ������롣
	������for()Ϊ3�ֽ�('\000')����sprintf()���Ϊ18�ֽڡ�
	*/
	k = 1;
	sprintf(s[k], "%*s", 3 * wd, "");	//��1��������Ͽհ��ַ�

	for (i = 1; i <= mdays; i++)
	{
		sprintf(tmp, "%3d", i);
		strcat(s[k], tmp);		//׷�ӵ�i�յ�����
		if (++wd % 7 == 0)		//������������
			k++;				//�ƶ�����һ��
	}
	if (wd % 7 == 0)
		k--;
	else {
		for (wd %= 7; wd < 7; wd++)		//�����һ�յ��Ҳ���ӿհ��ַ�
			strcat(s[k], "   ");
	}
	while (++k < 7)
		sprintf(s[k], "%21s", "");		//�ÿհ��ַ�����δʹ�õ���
}

/*---�Ѵ�����ά����sbuf�е�������������n������ʾ---*/
void print(char sbuf[3][7][22],int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		printf("%s   ", sbuf[i][0]);		//��ӡ����(��/��)
	putchar('\n');

	for (i = 0; i < n; i++)
		printf(" �� һ �� �� �� �� �� ");
	putchar('\n');

	for (i = 0; i < n; i++)
		printf("---------------------  ");
	putchar('\n');

	for (i = 1; i < 7; i++)		//�������������Ϊ7
	{
		for (j = 0; j < n; j++)
			printf("%s ", sbuf[j][i]);	//
		putchar('\n');
	}
	putchar('\n');
}

/*---��ʾ��y1��m1������y2��m2�µ�����---*/
void put_calendar(int y1, int m1, int y2, int m2)
{
	int y = y1;
	int m = m1;
	int n = 0;				//���ڻ�����������(����ӡ���·���)
	char sbuf[3][7][22];	//�����ַ����Ļ�����

	while (y <= y2)			//ѭ���ڼ�����
	{
		if (y == y2 && m > m2)		//����1�������
			break;
		make_calendar(y, m, sbuf[n++]);		//�Ѹ��µ����������ά����,�˴������� n++
		if (n == 3)			//�ۼ�3������ʾ
		{
			print(sbuf, n);
			n = 0;
		}
		m++;		//ת����һ����
		if (m == 13 && y < y2)		//ת����һ��
		{
			y++;
			m = 1;
		}
	}
	if (n)	//��n����3ʱ������1�µ�2�»���1�µ�11��(n=2)���������·�����Ϊ3�����޷����������if(n==3)�жϣ������Ҫ������ӡ
		print(sbuf, n);
}

int main()
{
	int y1, m1, y2, m2;

	printf("��ʾ������\n");
	printf("���뿪ʼ���¡�\n");
	printf("�꣺");	scanf("%d", &y1);
	printf("�£�");	scanf("%d", &m1);

	printf("����������¡�\n");
	printf("�꣺");	scanf("%d", &y2);
	printf("�£�");	scanf("%d", &m2);
	putchar('\n');

	put_calendar(y1, m1,y2,m2);		//��ʾy��m�µ�����

	getchar(); getchar();
	return 0;
}