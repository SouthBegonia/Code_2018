#include<stdio.h>
#include<string.h>
int main()
{
	char a; int b; short c; float d; double e; double m[5];
	
	char x[5]={"Rorn"};   //ֻ����Mike\0��5�ַ���ռ5�ֽ� 
    char y[]="Harry";     //!!!�ַ�����ʽ!!! 
    
	char z[10];    //�����з�Χ�ſɵȴ����� 
	
	printf("�����������ʹ�С���ֽ�\n"); 
	printf("char=%d\nint=%d\nshort=%d\nfloat=%d\ndouble=%d\ndouble m[5]=%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(m));
	
	//�ַ����ĸ�ʽ�� 
	printf("\n%s\t%s\n",x,y);
	printf("���ַ���ռ�ô�С:%-3d%-3d\n",sizeof(x),sizeof(y));
	
	//�����ַ����ĸ�ʽ�� 
	printf("\nInput some string:"); 
	gets(z);       //�����з�Χ�ſ�����
	printf("%s\n��СΪ��%d",z,sizeof(z));   //ռ�ô�С��Ϊ10�ֽ� 
	return 0;
}
