/*�ж�������*/
#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c))
	{

	if(a+b<=c || a+c<=b ||b+c<=a)   //��������
	{
		printf("����������\n");
	}
	else if(a==b&&b==c&&a==c)
	{
		printf("�ȱ�������\n");
	}else if(a*a+b*b==c*c || a*a+c*c==b*b ||b*b+c*c==a*a)
	{
		printf("ֱ��������\n");
	}else if((a==b&&b!=c) || (b==c&&c!=a) ||(a==c&&c!=b))
	{
		printf("����������\n");
	}else printf("һ��������\n");

	}
	getchar();
	getchar();
	return 0;
}
