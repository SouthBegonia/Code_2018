#include<stdio.h>
#include<conio.h>

int main()
{
	int x[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("������x[%d]������ֵ��",i);
		scanf("%d",&x[i]);      //��Ч
	}
	for(i=0;i<5;i++)
		printf("x[%d] = %d\n",i,x[i]);
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		printf("������x[%d]������ֵ��",i);
		scanf("%d",x+i);        //��Ч�� &x[0+i]
	}
	for(i=0;i<5;i++)
		printf("x[%d] = %d\n",i,x[i]);
	printf("\n");
	
	getch();
	return 0;
}
