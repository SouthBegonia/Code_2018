#include<stdio.h>

void func(int *array, int size)
{
	/*��Ϊ�������ǲ�֪������Ԫ�ظ����ģ���ͨ��ҲҪ��������Ԫ�ظ����Ȳ���*/
	int i;
	for(i=0;i<size;i++)
		printf("array[%d]...%d\n",i,array[i]);
}

int main()
{
	int array[]={1,2,3,4,5};
	
	func(array,sizeof(array)/sizeof(int));
	
	getchar();
	return 0;
}
