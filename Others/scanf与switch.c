/*�����ܣ�����01�س���switchѡ����ӦӢ�Ĵ�ӡ��
switch()���Ӧ����breakʹ�ã������״�*/
#include<stdio.h>

int main()
{
	char k;
	int i;
	
	for(i=1;i<3;i++)
	{
		scanf("%c",&k);     //ÿ��scanf()ֻ��ȡһ���ַ����� '0' '1' '\n'
		switch(k)
		{
			/*δʹ�� break ���ӡƥ�� case �ͺ�������case �������*/
			case '0': printf("Zero\n");
			case '1': printf("One\n");
			case '2': printf("Three\n");
			case '3': printf("Four\n");
		}
	}
	
	getchar();  //����scanf()��ȡ�Ļس�
	getchar();  //��ͣ����ȡ
	return 0;
}
