#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	/*ָ�������char *str1
	����ʱû�з���̶����ڴ�ռ�(str1 �� str2 ��ַ��ͬ)������Ӧ�ö������ַ�����������;
	str1 ָ��ĵ�ַ���Ըı�(��ַ�����ַ���)��
	str1 ֻ������ malloc �����ڴ��ſ�ʹ�� scanf ��ȡ�ַ���*/
	char *str1 = "Learing pointer now!";
	char *str2 = "Learing pointer now!";
	

	/*ָ�볣���� char const *str2
	��������ʱ(ָ�볣��)��������ֺù̶���С�͹̶���ַ��
	str2 ����ֵ�����Ըı䣬Ҳ�������� str2 �ĵ�ַ���ɸı䣬Ҳ���ɽ����Լ��Լ����� */
	char str3[] = "Go ahead";
	char str4[20];
	

	/*��ͬ����ָ���ַ�������������ͬ���� */
    printf("�ַ����������ڣ�str1 = %p  str2 = %p\n",str1,str2);

	/*ָ����������¸�ַ*/
	printf("Before: str2 = %s\n",str2);
	str2 = "I just coding\n";
    printf("After:  str2 = %s\n",str2);
    
    
    /*Ϊָ����������ڴ�󼴿ɸ�ֵ�ı������ݣ�Ҳ���ٸ�ַ */
	str2 = malloc(80);
	printf("�����ַ������� str2: ");
	scanf("%s",str2);
	printf("Now: str2 = %s\n",str2);



	printf("\n--------------------------\n");
	/*���鴴��ʱ��ϵͳ�Զ�Ϊ�������Ĵ�С*/
	printf("str3[] =\"%s\",  sizeof(str3) = %d\n",str3,sizeof(str3));
	
	/*���ɸ�ַ������
	str3 = "hello"; */
	
	/*�����ֱ����scanf()��ȡ��ֵ*/
	printf("�����ַ������� str4: ");
	scanf("%s",str4);
	printf("str4 = %s",str4);

	free(str2);
	
	getchar();
	return 0;
}
