#include<stdio.h>

int main()
{
	int array[5];
	int *p;
	int i;
	
	/*������array�ĸ�Ԫ����ֵ*/
	for(i=0;i<5;i++)
		array[i]=i;

	/*���� &array[5] */
	for(i=0;i<5;i++)
		printf("&array[%d]...%p \n",i,&array[i]);
	/*
	p=&array[0];
	for(i=0;i<5;i++,p++)
		printf("p+%d...%p\n",i,p);
 	*/
 	
	/*��������Ԫ�ص�ֵ(ָ���)*/
	for(p = &array[0]; p != &array[5]; p++)
		printf("%d\n",*p);
		
	getchar();
	return 0;
}
