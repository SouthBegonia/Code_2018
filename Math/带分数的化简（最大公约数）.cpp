//�������������ֱ���Ϊ���Ӻͷ�ĸ����д���򣬻�Ϊ�������������
//������12��8�����1��1/2 
#include<stdio.h>
int main()
{
	long x,y,x1,y1,t;
	printf("Input x,y(x>0,y>0):");
	scanf("%ld%ld",&x,&y);
	printf("%ld/%ld=",x,y);
	if(x==y)
	   printf("1\n");
	else 
	{
		x1=x;  y1=y;
		//����x��y����󹫱���
		while(x1!=y1)
		{
			if (x1>y1)
			   x1=x1-y1;
			else 
			   y1=y1-x1;
		 }        //�˳�ѭ����x1=y1��ֵ��x��y�����Լ��
		 x=x/x1;  y=y/x1;    //Լ�ֻ���
		 
		 if (x>y)   //��������
		 {
		 	t=x/y;
		 	x=x%y;
		 	printf("%ld��%ld/%ld\n",t,x,y);
		  } 
		  else printf("%ld/%ld\n",x,y);
	 } 
}
