/*
�����ܣ���ʮ�����ƺͶ�������ʾ�������֡���ĸ�����֡�
isprintf(c):�ж�c�Ƿ�Ϊ���пհ��ַ�(' ')����ʾ�ַ���
��ע��Ŀǰ���ֲ���GB18030���뷽�����е��ֽڡ�˫�ֽڡ����ֽڷֶα��롣
*/
#include<stdio.h>
#include<limits.h>
#include<ctype.h>

void strdump(const char *s)
{
	while (*s)
	{
		int i;
		unsigned char x = (unsigned char)*s;

		printf("%c  ", isprint(x) ? x : ' ');			//�ַ�
		printf("%0*X  ", (CHAR_BIT + 3) / 4, x);		//ʮ��������
		for (i = CHAR_BIT - 1; i >= 0; i--)				//��������
			putchar(((x >> i) & 1U) ? '1' : '0');		/*�÷����ɣ������*/
		putchar('\n');
		s++;
	}
}
void ASC(void)
{
	printf("ASCII���\n");
	printf("��ֵ   ");
	printf("����   \n");
	int i;
	for (i = 0; i <= 50; i++)
	{
		printf("%3d   %3c", i, i);
		putchar('\n');
	}
}

int main()
{
	puts("����");
	strdump("����");
	putchar('\n');
	puts("12�й���AB");
	strdump("12�й���AB");
	putchar('\n');

	ASC();

	getchar();
	getchar();
	return 0;
}