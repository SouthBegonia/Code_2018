#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[] = {100,200,300};
	int *ptr = arr;
	int i,size = 0;
	size = (sizeof(arr) / sizeof(arr[0]));  //size = 3
	
	/* ʹ�� arr */
	printf("ʹ�� arr ָ�볣������ʾ��\n");
	for(i=0;i<size;i++)
		printf("&arr[%d] = %p\n",i,&arr[i]);
	printf("\n");
	
	for(i=0;i<size;i++)
		printf("arr+%d = %p\n",i,arr+i);    //&arr[i]
	printf("\n");
	
	for(i=0;i<size;i++)
		printf("arr[%d] = %d\n",i,arr[i]);
	printf("\n");
	
	for(i=0;i<size;i++)
		printf("*(arr+%d) = %d\n",i,*(arr+i));  //arr[i]
	printf("\n");
	
	/* ʹ�� ptr */
	printf("ʹ�� ptr ָ���������ʾ��\n");
	for(i=0;i<size;i++)
		printf("ptr+%d = %p\n",i,ptr+i);    //&arr[i]
	printf("\n");
	
	for(i=0;i<size;i++)
		printf("ptr[%d] = %d\n",i,ptr[i]);  //arr[i]
	printf("\n");
	
	for(i=0;i<size;i++)
		printf("*(ptr+%d) = %d\n",i,*(ptr+i));  //arr[i]

	getch();
	return 0;
}
