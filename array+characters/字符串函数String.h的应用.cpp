//�ַ���������Ӧ��
#include<stdio.h>
#include<string.h>
int main()
{
	char a1[]="a1";
	char a2[]="a2";
	char b[]="abcdefgc";
	char c1[]="123";
	char c2[]="1234";
	char d[]="adc";
	char e1[]="abcKKdef";
	char e2[]="KK";
	char f1[]="AAAA";
	char f2[]="BBBB";
	
	
	//strcat����:s2��ָ���ַ����ӵ�s1���档������s1�ַ��׵�ַ 
	printf("***%s***%s***\n",strcat(a2,a1));
	 
	 
	//strchr��������s���ҳ���һ�γ����ַ�c���ڵ�λ�á���������ַ/NULL 
	printf("\n��abcdefgc�У�c��һ�γ��ֵĵ�ַΪ%ox(16����)\n",strchr(b,'c'));
	
	
	//strcmp�������Ƚ�s1��s2�Ĵ�С��������s1<s2������s1>s2����;s1=s2 0��
	printf("\n�ַ��� [%s]�� [%s]��С�Ƚϣ�",c1,c2);
	if(strcmp(c1,c2)==0)
	   printf("%s��%s��С���\n",c1,c2);
	else if(strcmp(c1,c2)>0)
	   printf("%s����%s\n",c1,c2);
	else printf("%sС��%s\n",c1,c2);
	
	 
	//strlen��������s��ָ�ַ����ȡ���������Ч�ַ�������
	printf("\n�ַ���%s����Ч�ַ�����Ϊ%d\n",d,strlen(d)); 
	//  '\n'��ת���ַ���һ���ַ� 
	//  '\0'��δ���� 
	
	
	//strstr����:�ҳ�s1�����ַ�����s2��ָ�ַ�����һ�γ��ֵ�λ�á��������ҵ���������ĸ��ַ/NULL
	printf("\n%s�����ַ�����%s��ָ�ַ�����һ�γ��ֵ�λ��Ϊ%ox(16����)\n",e1,e2,strstr(e1,e2));
	
    //strcpy��������s2��ָ�ַ������Ƶ�s1��ָ����ڴ�ռ䡣������s1��ָ�ڴ�Ŀռ䡣
	printf("\n��ʱs1Ϊ[%s],s2Ϊ[%s].\n",f1,f2);
	printf("s2��ָ�ַ������Ƶ�s1��ָ����ڴ�ռ�:%s",f1,f2,strcpy(f1,f2)); 
	printf("\n��ʱs1Ϊ[%s],s2Ϊ[%s].\n",f1,f2);
}
