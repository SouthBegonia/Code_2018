/*������
ע��scanf()��ȡ�� gets():��ȡ�ַ������س���ȡ�һ���
*/
#include<stdio.h>
#include<string.h>

int main()
{
	int n;   //�ַ�������
	
	printf("�����ַ���������");
	scanf("%d",&n);
	getchar();
	
	for( ; n>0; n--)
	{
		int l,i,t;
		char str[10000];
		
		gets(str);
		l = strlen(str);    	//�ַ�����

		//printf("%d",l);
		
		if(l == 1)  	//һ���ַ������
			t = 1;
		else if(l % 2 == 0)  	//ż��
		{
			for(i=0;i<l;i++)
				if(str[i] != str[l-i-1])
					t = 0;
				else t = 1;
		}
		else {
			for(i=0;i<(l/2);i++)    //����
				if(str[i] != str[l-i-1])
					t = 0;
				else t = 1;
		}
		
		/*�ж�*/
		if(t==1)
			printf("Yes!\n");
		else printf("No!\n");
	}
	
	printf("\nDone��\n");
	
	getchar();
	return 0;
}
