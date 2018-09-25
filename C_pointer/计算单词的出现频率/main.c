#include<stdio.h>
#include<stdlib.h>
#include "get_word.h"
#include "word_manage_P.h"

#define WORD_LEN_MAX (1024)

int main(int argc, char **argv)
{
	char buf[WORD_LEN_MAX];
	FILE *fp;
	
	if(argc==1)
		fp = stdin;
	else{
		fp = fopen(argv[1],"r");
		if(fp == NULL) {
			fprintf(stderr,"%s:%s can not open.\n",argv[0],argv[1]);
			exit(1);
		}
	}

	/*��ʼ���������ʲ��֡�*/
	word_initialize();
	
	/*�߶�ȡ�ļ����߼��뵥��*/
	while(get_word(buf,WORD_LEN_MAX,fp) != EOF)
		add_word(buf);
		
	/*������ʵĳ���Ƶ��*/
	dump_word(stdout);
	
	/*�������ʲ��֡��Ľ�������*/
	word_finalize();
	
	getchar();
	return 0;
}
