/*
����ԭ��: int fprintf(FILE *stream, const char *format, ...) �ɱ����
	stream -- ָ�� FILE �����ָ��
	format -- C �ַ�����������Ҫ��д�뵽�� stream �е��ı�
����:���͸�ʽ��������� stream ��,�ɹ��򷵻�д����ַ���,ʧ���򷵻ظ���
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE * fp;

   fp = fopen ("file.txt", "w+");   //�����ɶ�д�ļ� file.txt
   fprintf(fp, "%s %s %s %d", "We", "are", "in", 2018);

   fclose(fp);

   getchar();
   return(0);
}
