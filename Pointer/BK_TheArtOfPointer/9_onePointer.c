#include<stdio.h>
#include<conio.h>

int main()
{
	int x=100, y=200;
	int *ptr = &x;
	
	printf("&x = %p , x = %d\n",&x,x);
	printf("&y = %p , y = %d\n",&y,y);
	printf("&ptr = %p\n\n",&ptr);    //���ָ������ĵ�ַ &ptr
	
	printf("ptr = %p\n",ptr);   //ָ�����������(&x)
	printf("x = %d, *ptr = %d\n",x,*ptr);
	
	ptr = &y;
	printf("ptr = %p\n",ptr);
	printf("y = %d, *ptr = %d\n",y,*ptr);
	
	getch();
	return 0;
}
