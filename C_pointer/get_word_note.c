/*
��׼��:stdout, stdin, stderr �������ֱַ��� ��׼�������׼���� �� ��׼����
*/
#include<stdio.h>

int main()
{
	/*int printf(const char *format, ...) ���͸�ʽ���������׼��� stdout*/
	printf("printf(*s)\n");
	
	/*int fprintf(FILE *stream, const char *format, ...) ���͸�ʽ��������� stream ��
	�˴����� fprintf() ����� stdout �ȼ�������� printf()*/
	fprintf(stdout,"fprintf(stdout,\*s)\n");
	
	/*�˴����� fprintf() ����� stderr �ȼ�������� printf()*/
	fprintf(stderr,"fprintf(stderr,\*s)\n");

	putchar('\n');

	/* stderr �� stdout ����ʾĬ����ʾ��(�ն�), ����������
	stderr: û�л��壬�������
	stdout: Ĭ�����л��壬������ȷ���һ��buffer����,������ '\n'���������������*/
	fprintf(stdout,"Hello ");
	fprintf(stderr,"World!");
	/*��ӡ����ӦΪ "World!Hello "
	�������ҵĻ�����(GCC 6.3.0)��δ�������޻�������,�����*/
	
	putchar('\n');

	/*void perror (const char *);
	��һ�������Դ�����Ϣ�������׼���� stderr����������ַ��� str�����һ��ð�ţ�Ȼ����һ���ո�
	������ fprintf��stderr��char *�� ���� perror() �������������Ϣ */
	perror("Stderr Hello World!!\n");   //ĩβ�� : No error
	
	/*������뻺����*/
	fflush(stdin);
	
	getchar();
	return 0;
}
