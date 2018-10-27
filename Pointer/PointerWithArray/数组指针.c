/*����ָ��: int (*p)[n]
������ָ��ָ����һ������ʱ��Ҫ����������ƥ�䣬������־�����������*/
#include<stdio.h>

int main()
{
	int array[3][4]={
		{11,12,13,14},
		{21,22,23,24},
		{31,32,33,34}
	};
	int (*p)[5];    //��ƥ����������ͣ���ȷ��ʽ��(*p)[4]
	p = array;
	
	
	/*��ӡ���� array ��ֵ����ַ*/
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
			printf("array[%d][%d]=%d  ADS=%p |",i,j,array[i][j],&array[i][j]);
		printf("\n");
	}
	printf("\n");
	
	
	/* ++p �� p+i
	pָ��һ���������� (*p)
	p+1 ���� ++p �Ĳ�ֵ = �������ʹ�С(sizeof(int [5]) = 4x5 =20) x i */
	printf("###### ++p �� p+i  ######\n");
	printf("p   = %p\n",p);
	printf("++p = %p\n",++p);   //��ֵ=20x1
	printf("p   = %p\n",p);   //ע�⣬һ������ָ���Լ��Լ����㼴�ı�����ָ��
	
	p = array;
	for(int i=0;i<4;i++)
		printf("p+%d  = %p     *(p+%d) = %p  p[%d]= %p \n",i,p+i,i,*(p+i),i,p[i]);
	printf("\n\n");
	
	
	/* pָ�������
	��ȡ array[0] ������*/
	printf("###### p ָ������� ######\n");
	for(int i=0;i<4;i++)
		printf("*p+%d =%p    *(*p+%d) =%d   (*p)[%d] =%d   ==   &array[0][%d] =%p  array[0][%d] =%d\n",i,(*p+i),i,*(*p+i),i,(*p)[i],i,&array[0][i],i,array[0][i]);
	printf("\n\n");

	
    /* p+1 ָ�����һ������
    ��ȡ array[1] ������
	�����ֲ���Ԥ��� p+1 �Գ�ָ��array[1][0]���������Ϊ p ָ��Ϊ int [5]���ͣ�������Ϊ array[][4] ���ͣ�p��ĩλ *p+4 ռ���� array[1][0]
	ͬ��p+2 ʱ����λԪ��Ҳ�� p+1 �ڵ�ĩλԪ��ռ��*/
	printf("###### p+1 ָ������� ######\n");
	for(int i=0;i<4;i++)
        printf("*(p+1)+%d =%p  *(*(p+1)+%d) =%d\n",i,*(p+1)+i,i,*(*(p+1)+i));
	printf("��ռ�ݵ�array[1][0] : *p+4 = %p   *(*p+4) = %d",*p+4,*(*p+4));
	printf("\n\n");
	
	
	/* *p[] �� (*p)[] �����޸���������ƥ���ֹ�������� */
	printf("###### *p[] �� (*p)[] ######\n");
	for(int i=0;i<3;i++)
		printf("*p[%d] = %d   (*p)[%d] = %d\n",i,*(p[i]),i,(*p)[i]);
	printf("\n");
	
	getchar();
	return 0;
}

