/*fprintf ������ݵ�����*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char id[10];
	int score;
	FILE *fptr;
	
	/*w+��һ���ı��ļ��������д�ļ�������ļ��Ѵ��ڣ����ļ��ᱻ�ض�Ϊ�㳤�ȣ�����ļ������ڣ��򴴽����ļ�
	a+�ǿɶ�д��׷�ӣ�r+��д*/
	if((fptr = fopen("score.txt","w+")) == NULL)
	{
		printf("�޷��� score.txt");
		exit(1);
	}
	
	do
	{
		printf("������ id �� score (-1 �� -1 ʱ��ʾ����)");
		scanf("%s %d",id,&score);
		
		if(strcmp(id,"-1") != 0 && score != -1)
			fprintf(fptr,"%s %d\n",id,score);
			/*��printf��ȶ���ָ���ļ���ָ��fptr*/
	}while(strcmp(id,"-1") != 0 && score != -1);
	
	fclose(fptr);       //�ر��ļ�����д�����
	printf("\n");
	
	/*ֻ��ģʽ���ļ�score.txt����ӡ������*/
	if((fptr = fopen("score.txt","r+")) != NULL)
	{
		printf("%-10s %-10s\n","id","score");
		printf("==================\n");

		while(fscanf(fptr,"%s %d",id,&score) != EOF)
			printf("%-10s %3d\n",id,score);
	}
	fclose(fptr);
	
	getchar();
	return 0;
}
