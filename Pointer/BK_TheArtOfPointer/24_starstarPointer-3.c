#include<stdio.h>

int main()
{
	int array[5] ={10,20,30,40,50};
	int *p[] ={array,array+1,array+2,array+3,array+4};  //ָ�����飬ÿ��Ԫ�ش���һ����ַ
	int **p2 = p;

	/*��ӡ�����ַ��Ϣ*/
	for(int k=0;k<5;k++)
		printf("&array[%d] = %p\n",k,&array[k]);
	printf("\n");

    /*��ӡָ�������ڸ�Ԫ�����ݼ���ָ�������*/
	for(int k=0;k<5;k++)
		printf("p[%d] = %p   *p[%d] = %d\n",k,p[k],k,*p[k]);
	printf("\n");
	
	/*ͨ��˫��ָ�� p2 ��ӡ����*/
	for(int k=0;k<5;k++)
		printf("**(p2+%d) = %d\n",k,**(p2+k));

	getchar();
	return 0;
}
