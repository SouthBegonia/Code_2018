#include<stdio.h>
#include<stdlib.h> //��Ҫͷ�ļ� 
#include<time.h>   //�ݲ���Ҫ 
int main()
{
	int num,i,ran;
	printf("How many random numbers do you want?\n");
	scanf("%d",&num);
	printf("What's the rang?\n");
	scanf("%d",&ran);
	for(i=0;i<num;i++)
	   printf("%d ",rand()%ran+1); //�����������0~ran֮�� 
	return 0;
 } 
