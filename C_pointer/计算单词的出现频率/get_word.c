/*
������:��ȡ�ַ���,���д�ӡ�ַ����ڵĵ���
*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int get_word(char *buf, int buf_size, FILE *fp)
{
	int len;
	int ch;
	
	/*������ȡ�հ��ַ�*/
	while((ch=getc(fp)) != EOF && !isalnum(ch))
		;
	if(ch==EOF)
		return EOF;
		
	/*��ʱ, ch�б����˵��ʵĳ�ʼ�ַ�*/
	len=0;
	do{
		buf[len]=ch;
		len++;
		if(len>=buf_size)
		{
			/*���ڵ���̫������ʾ����*/
			fprintf(stderr, "word too long.\n");
			/* ���� stderr stdin stdout ˵���� get_word_note.c */
			exit(1);
		}
	}while((ch=getc(fp)) != EOF && isalnum(ch));
	buf[len]= '\0';
	
	return len;
}

int main()
{
	char buf[256];  //�޶����ʵ���󳤶�
	
	while(get_word(buf, 256, stdin) !=EOF)
	{
		printf("<<%s>>\n",buf);
	}
	
	getchar();
	return 0;
}
