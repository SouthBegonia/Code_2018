/*fwrite ����ָ��������е�����д�뵽������ stream ��*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	struct node
	{
		char name[10];
		int score;
	};
	struct node student;
	
	FILE *fptr;
	char scorebuf[81];
	
	/*ÿ��д�������ǰ����*/
	if((fptr = fopen("student.txt","wb")) == NULL)
	{
		printf("�޷��� syudent.txt");
		exit(1);
	}
	
	do
	{
		printf("\n\nEnter name:");
		gets(student.name);
		printf("Enter score:");
		/*atoi ���ַ���ת��������*/
		student.score = atoi(gets(scorebuf));
		
		fwrite(&student,sizeof(student),1,fptr);
		printf("One more(y/n)?");
	}while(getche() == 'y');
	
	fclose(fptr);
	getchar();
	return 0;
}
