/*����ָ��*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int (*p)[3];   //����ָ��
    int array[2][3]={
	{1,2,3},
	{4,5,6}};
    int i,j;

    /*��ӡ��ά���� array */
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("array[%d][%d]=%2d  ADS = %p\n",i,j,array[i][j],&array[i][j]);
    }
    printf("\n");


	/* δ������ָ��p��ֵ
	p ָ���Ĭ�������СΪ 4x3 =12
	��Ϊδ��ʼ�������� p[i] ����ʱû��ʵ��ֵ*/
	printf("δ��ʼ��������ָ�� p��\n");
	for(i=0;i<3;i++)
		printf("*p+%d = %p   *(p+%d) = %d\n",i,*p+i,i,*(*p+i));
	printf("\n\n");


	/* p ָ�� array ����ӡarray[0]������ */
    p = array;
	printf("*p = array ��:\n");
	for(i=0;i<3;i++)
		printf("*p+%d = %p    *(*p+%d) = %d    (*p)[%d] = %d\n",i,*p+i,i,*(*p+i),i,(*p)[i]);
	printf("\n\n");


    /* ͨ�� *(p+i) ��ȡ array[i]������ */
	p = array;
	printf("��ӡarray[i]�����ݣ�\n");
	for(int j=0;j<2;j++)
	for(i=0;i<3;i++)
		printf("(*p+%d)+%d = %p   *(*(p+%d)+%d) = %2d\n",j,i,*(p+j)+i,j,i,*(*(p+j)+i));
    printf("\n\n");


	/*����*/
    p= array;
    printf("  p=%p    array=%p\n",p,array);
	printf(" *p=%p   *array=%p\n",*p,*array);
	printf("**p=%p  **array=%p\n",**p,**array);

    getchar();
	return 0;
}
