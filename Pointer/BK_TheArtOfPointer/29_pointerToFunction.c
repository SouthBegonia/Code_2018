/*����ָ�룺int (*p)(int,...)*/
#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int substract(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

/*operation ��ָ��ĳ����(����Ϊint int������ֵΪ int)��ָ��*/
int (*operation)(int, int);

int main()
{
	int x,y,output;
	printf("������x��y��");
	scanf("%d%d",&x,&y);
	operation = add;
	output = (*operation)(x,y);
	printf("%d + %d = %d\n",x,y,output);
	
	operation = substract;
	output = (*operation)(x,y);
	printf("%d - %d = %d\n",x,y,output);
	
	operation = multiply;
	output = (*operation)(x,y);
	printf("%d * %d = %d\n",x,y,output);
	
	operation = divide;
	output = (*operation)(x,y);
	printf("%d / %d = %d\n",x,y,output);
	
	getchar();
	getchar();
	return 0;

}
