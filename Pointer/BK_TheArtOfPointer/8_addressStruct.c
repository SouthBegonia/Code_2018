#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct employee
	{
		char id[7];
		char name[20];
		int salary;
	};
	struct employee manager = {
		"D9527",
		"Jack",
		168168
	};
	
	printf("&manager = %x\n",&manager);     //�ṹ����������ṹ�ĵ�һ��Ԫ�ص�ַ��ͬ
	printf("manager.id = %x\n",manager.id);
	printf("manager.name = %x\n",manager.name);
	printf("&manager.salary = %x\n\n",&manager.salary);
	
	printf("&manager = %p\n",&manager);     //%p��ʽ�����ǰ�油 00 ������ 32 λ
	printf("manager.id = %p\n",manager.id);
	printf("manager.name = %p\n",manager.name);
	printf("&manager.salary = %p\n\n",&manager.salary);
	
	printf("manager.id = %s\n",manager.id);
	printf("manager.name = %s\n",manager.name);
	printf("&manager.salary = %d\n\n",manager.salary);

	
	getchar();
	return 0;
}
