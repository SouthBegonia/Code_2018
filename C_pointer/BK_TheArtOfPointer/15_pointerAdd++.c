#include<stdio.h>
#include<conio.h>

int main()
{
	int num[]={10,20,30,40,50};
	int *p = num;
	int i;

	for(i=0;i<5;i++)
		printf("&num[%d] = %p, num[%d] = %d\n",i,&num[i],i,num[i]);
	printf("p = %p, *p = %d\n\n",p,*p);
	
	p+1;
	printf("After p+1:\n");
	printf("p = %p, *p = %d\n",p+1,*p);     //p+1��ʾpָ����һ��Ԫ�ص�ַ������û�и��� p
	printf("p = %p, *p = %d\n\n",p,*p);     //����Ӱ��ԭ����p
	
	p++;
	printf("After p++:\n");
	printf("p = %p, *p = %d\n\n",p,*p);
	
	
    /*���������� p+1��p++*/
	p = num;    //����p
	for(i=0;i<5;i++)
	{
		p+i;    //���� p+i ��Ӱ��ԭ�� p ��ָ��
		printf("p+%d = %p, *(p+%d) = %d\n",i,p,i,*p);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("p+%d = %p, *(p+%d) = %d\n",i,p,i,*p);
		p++;    //���� p++ �ı�ԭ�� p ��ָ��
	}
    
	getch();
	return 0;
}
