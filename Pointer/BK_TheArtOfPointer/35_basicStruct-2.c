#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct Student
	{
		char name[20];
		int score;
	};
	
	/*����û�н��ṹ�������ֵ���ṹ��ָ�������������Ҫ�����ռ�ſ�ʹ��*/
	struct Student st1,*st2;
	st2 = (struct Student *) malloc(sizeof(struct Student));
	
	printf("Input your name��");
	scanf("%s",st1.name);
	printf("Input your score:");
	scanf("%d",&st1.score);
	printf("Input another name:");
	scanf("%s",st2->name);
	printf("Input another score:");
	scanf("%d",&st2->score);
	
	printf("\nNAMES      SCORE\n");
	printf("%-4s         %-3d\n",st1.name,st1.score);
	printf("%-4s         %-3d",st2->name,st2->score);
	
	free(st2);
	fflush(stdin);

	getchar();
	return 0;
}
