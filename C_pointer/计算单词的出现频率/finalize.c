#include<stdlib.h>
#include "word_manage_P.h"

/*
�����ʲ��ֵĽ�������
*/

void word_finalize(void)
{
	Word *temp;
	
	/*�����е�½�ĵ���free()*/
	while(word_header != NULL)
	{
		temp = word_header;
		word_header = word_header->next;
		
		free(temp->name);
		free(temp);
	}
}
