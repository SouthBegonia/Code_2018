#include<stdio.h>

int main()
{
	struct employee
	{
		char id[7];
		char name[20];
		int salary;
	};
	
	struct employee manager = {"C9527", "Jack", "2000"};
	
	struct employee *ptr = &manager;
	
	printf("&ptr = %p\n",&ptr);
	printf("ptr  = %p\n",ptr);
	printf("&namager = %p\n",&manager);
	printf("manager  = %p\n",manager);


	/*�� . �����ȡ�ýṹ�����Ա*/
	printf("manager.id = %s\n",manager.id);
	printf("namager.name %s\n",manager.name);
	printf("manager.salary = %d\n\n",manager.salary);
	
	/*�� -> �����ȡ�ýṹ�����Ա*/
	printf("ptr->id = %s\n",ptr->id);
	printf("ptr->name = %s\n",ptr->name);
	printf("ptr->salary = %d\n\n",ptr->salary);
	
	/*�� (*). �����ȡ�ýṹ�����Ա*/
	printf("(*ptr).id = %s\n",(*ptr).id);
	printf("(*ptr).name = %s\n",(*ptr).name);
	printf("(*ptr).salary = %d\n",(*ptr).salary);
	
	getchar();
	return 0;

}
