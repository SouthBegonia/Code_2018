#include<stdio.h>

int main()
{
	int array[3][4]={
		{11,12,13,14},
		{21,22,23,24},
		{31,32,33,34}
	};
	int (*p)[4];
	p = array;
	
	/*��ӡ���� array ��ֵ����ַ*/
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
			printf("array[%d][%d]=%d  Address=%p |",i,j,array[i][j],&array[i][j]);
		printf("\n");
	}
	printf("\n");
	
	/* ++p */
	printf("++p = %p\n",++p);
	printf("p   = %p\n\n",p);   //ע�⣬һ������ָ���Լ��Լ����㼴�ı�����ָ��
	
	/* p+i */
	p = array;
	for(int i=0;i<3;i++)
		printf("p+%d = %p\n",i,p+i);    
	for(int i=0;i<3;i++)        //�ȼ��� array+i
		printf("array[%d] = %p\n",i,array+i);
	printf("\n");
	
	/* p[i] */
	p = array;
	for(int i=0;i<4;i++)
		printf("p[%d] = %p\n",i,p[i]);
	printf("\n");
	
	
	getchar();
	return 0;
}

