/*������������ַ����ռ䲻��ʱ��ĩβ�޷���ſ��ַ� '\0'*/
#include<stdio.h>

int main()
{
	char *str1 = "Are you ok";
	char str2[4]  = "I AM FINE";
	/*waring��initializi-string for array of chars is too long*/
	
	printf("�ַ���(ָ�����) str1 = %s\n",str1);
	printf("�ַ���(ָ�볣�����ռ䲻��) str2 = %s\n",str2);
	
	getchar();
	return 0;
}
