/*fscanf ���� stream ��ȡ��ʽ������*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char id[10];
	int score;
	
	/*�ļ��������ȴ��ڲſɶ�ȡ������ʧ��*/
	if((fptr=fopen("score.txt","r")) == NULL)
	{
		printf("�޷��� score.txt");
		getchar();
	}
	printf("%-10s %-10s\n","id","score");
	printf("==================\n");
	
	while(fscanf(fptr,"%s %d",id,&score) != EOF)
		printf("%-10s %3d\n",id,score);
		
	fclose(fptr);
	
	getchar();

	return 0;
}
