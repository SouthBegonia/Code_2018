#include<stdio.h>

int main()
{
	int array[5];
	int i;
	
	/*Ϊ����array�ĸ�Ԫ����ֵ*/
	for(i=0;i<5;i++)
		array[i]=i;
		
    /*��������Ԫ�ص�ֵ*/
    for(i=0;i<5;i++)
		printf("%d\n",array[i]);

	/*��������Ԫ�صĵ�ַ*/
	for(i=0;i<5;i++)
		printf("&array[%d]...%p\n",i,&array[i]);
		
	getchar();
	return 0;
}
