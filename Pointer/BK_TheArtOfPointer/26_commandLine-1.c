#include<stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("argc = %d\n",argc);
	
	for(i=0;i<argc;i++)
		printf("argv[%d]  = %s\n",i,argv[i]);
	printf("*(argv[2]+2)  = %c\n",*(argv[2]+2));
	printf("*((argv+2)+2) = %c\n",*(*(argv+2)+2));
	
	getchar();
	return 0;
}
/*������ 26_commandLine-1.exe��Ŀ¼��ʹ��������ʾ��(������c�̸�Ŀ¼)
C:\>26_commandLine-1 hello world
argc = 3
argv[0]  = exam
argv[1]  = hello
argv[2]  = world
*(argv[2]+2)  = r
*((argv+2)+2) = r  */
