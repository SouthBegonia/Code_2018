#include "stdio.h"
int main()
{
    int x=6;
    FILE *fp=fopen("text.txt","w");
    //FILE *fp=fopen("C:\\123\\text.txt","w");    ������ָ��·�� 
    fprintf(fp,"yes you are right ��\ny=4+%d",x);
    
	fclose(fp);  
	return 0;
} 
