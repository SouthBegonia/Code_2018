#include<stdio.h>
#include<string.h>

struct Students
{
	int number;
	char name[50];
	char subject[100];
};

/*指向结构体的指针作为函数参数*/
void printStudents(struct Students *student)
{
	printf("Student number : %d\n",student->number);
	printf("Student name   : %s\n",student->name);
	printf("Student subject: %s\n",student->subject);
	/* -> :访问 指向该结构的指针 所访问结构体 的成员*/
}

int main()
{
	struct Students std_1;
	struct Students std_2;

	std_1.number = 1600;
	strcpy(std_1.name,"Z");
	strcpy(std_1.subject,"Computer");

	std_2.number = 1900;
	strcpy(std_2.name,"W");
	strcpy(std_2.subject,"Arts");

    /*传入std_1的地址*/
	printStudents(&std_1);
	printStudents(&std_2);

	getchar();
	return 0;
}
