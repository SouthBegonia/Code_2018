/*
�����ܣ���ʾ�������ͳ�����ʽ������

������
argc: argument count ��������,���ճ���������ʽ�������ܸ�����
argv: argument vecotor ��������������Ϊ"ָ��char�͵�ָ������"��argv[0]ָ���������֮��Ԫ��ָ�������ʽ������
		char *argv[] �ȼ��� char **argv
*/
#include<stdio.h>

int main(int argc , char *argv[])	// main()��������2������ argc �� argv (�����������)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("argv[%d] = \"%s\"\n", i, argv[i]);

	getchar();
	return 0;
}
/* ���ַ���Ϊ��λ���������в���
int main(int argc , char **argv)
{
int i;
while(argc-->0)
printf("argv[%d] = \"%s\"\n", i++, *argv);

getchar();
return 0;
}
*/

/* ���ַ���Ϊ��λ���������в���
int main(int argc,int **argv)
{
	int i = 0;
	char c;

	while (argc-- > 0)
	{
		printf("argv[%d] = \"", i++);
		while (c = *(*argv)++)
			putchar(c);
		argv++;
		printf("\"\n");
	}
	getchar();
	return 0;
}
*/