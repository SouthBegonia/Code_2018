/*

*/
#include<stdio.h>


struct  Tag    //�ṹ��ı�ǩ
{
	int a;      //�����ṹ���Ա
	char b;
	double c;
} s1;       //�����˽ṹ����� s1

typedef struct
{
	int k;
	char l;
	double m;
} Simple;

int main()
{
	struct Tag s2;  //��һ��������ʽ
	Simple x;
	
	printf("struct ����:\n");
	printf("����s1.a������");
	scanf("%d",&s1.a);
	fflush(stdin);  //����������Ļس���
	printf("s1.a = %d\n",s1.a);
	
	printf("����s2.b�ַ���");
	scanf("%c",&s1.b);
	fflush(stdin);
	printf("s2.b = %c\n",s1.b);
	printf("-----------------\n");
	
	printf("typedef ������\n");
	printf("����x.k������");
	scanf("%d",&x.k);
	fflush(stdin);
	printf("x.k = %d\n",x.k);
	
	
	getchar();
	
	return 0;
}
