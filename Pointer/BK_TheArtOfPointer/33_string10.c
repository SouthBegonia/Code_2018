#include<stdio.h>

int main()
{
	char *str1 = "Learing pointer now!";    //��ʼ��
	char str2[] = "Go ahead";   //��ʼ��
	char *str3;     //ָ�����
	char str4[20];  //ָ�볣��
	
	str3 = "I just coding\n";   //ָ��������ڸ��ַ�����ַ
	
	/* str4 = "I just coding\n"   ָ�볣����ַ�̶����������ٰ��ַ�����ַ��ֵ��������������ķ�ʽ��ɸ�ֵ���� */
	/* scanf("%s",str3)  ָ���������������ķ�ʽ����ɸ�ֵ���� */
	
	printf("C or C++:");
	scanf("%s",str4);
	
	printf("\nstr1 = %s\n",str1);
	printf("str2 = %s\n",str2);
	printf("str3 = %s\n",str3);
	printf("Learing %s now\n",str4);
	
	getchar();
	getchar();
	return 0;
}
