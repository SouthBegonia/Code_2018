/*
�����ܣ�atoi(),atol(),atof()������Ӧ�á�

atoi()����������ַ�����ʽ������תΪint�͡�
atol()����������ַ�����ʽ������ת��Ϊlong�͡�
atof()����������ַ�����ʽ������ת��Ϊdouble�͡�
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s[100];
	printf("atoi()����������ַ�����ʽ������תΪint��\natol()����������ַ�����ʽ������ת��Ϊlong��\natof()����������ַ�����ʽ������ת��Ϊdouble��\n\n");
	printf("�������ַ�����");
	while (scanf("%s", s) == 1)
	{
		printf("atoi()����������ַ���תΪint�ͣ� %d\n", atoi(s));
		printf("atol()����������ַ���ת��Ϊlong��: %ld\n", atol(s));
		printf("atof()����������ַ���ת��Ϊdouble��: %f\n", atof(s));
		printf("\n�������ַ�����");
	}
	getchar();
	getchar();
	return 0;
}