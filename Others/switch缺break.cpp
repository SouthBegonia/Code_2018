/*switch()���Ӧ����breakʹ�ã������״�*/
#include<stdio.h>

int main()
{
	char k;
	int i;
	for(i=1;i<3;i++)
	{
		scanf("%c",&k);     //���� 01�س���ÿ��scanf()ֻ��ȡһ���ַ�
		switch(k)
		{
			case '0': printf("Zero\n");
			case '1': printf("One\n");
			case '2': printf("case \'2\' \n");
			case '3': printf("case \'3\' \n");
		}
	}
	
	getchar();  //����scanf()��ȡ�Ļس�
	getchar();  //��ͣ����ȡ
	return 0;
}
