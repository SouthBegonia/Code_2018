/*
�����ܣ����ڷ��ʿɱ�����ĺ���

��ע�������

<stdarg.h>
va_list�ͣ����ڷ��ʿɱ����������
va_start�꣺������ʿɱ����ǰ��װ������
va_arg�꣺������ʺ�һ���ɱ����
va_end�꣺���ƽ������ʿɱ����

*/
#include<stdio.h>
#include<stdarg.h>

/*---���ݵ�1�����������Ĳ����ĺ�---*/
double vsum(int sw, ...)
{
	double sum = 0.0;
	
	va_list ap;		
	/*���ڷ��ʵ��ú���ʱ�ѻ��Ĳ���*/

	va_start(ap, sw);	//��ʼ���ʿɱ䲿�ֵĲ���

	switch (sw)
	{
	case 0: sum += va_arg(ap, int);		//vsum(0,int,int)
		sum += va_arg(ap, int);
		break;
	case 1:sum += va_arg(ap, int);		//vsum(1,int,long)
		sum += va_arg(ap, long);
		break;
	case 2:sum += va_arg(ap, int);		//vsum(2,int,long,double)
		sum += va_arg(ap, long);
		sum += va_arg(ap, double);
		break;
		/*
		0����int�͵ĵ�2������int�͵ĵ�3�������
		1����int�͵ĵ�2������long�͵ĵ�3�������
		2����int�͵ĵ�2������long�͵ĵ�3�����Լ�double�͵ĵ�4�������
		*/
	}
	va_end(ap);		//�������ʿɱ䲿�ֵĲ���

	return sum;
}

int main()
{
	printf("10 + 2         = %.2f\n", vsum(0, 10, 2));
	printf("57 + 300000L   = %.2f\n", vsum(1, 57, 300000L));
	printf("98 + 2L + 3.14 = %.2f\n", vsum(2, 98, 2L, 3.14));

	getchar();
	return 0;
}