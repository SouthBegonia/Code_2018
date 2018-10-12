/*
C���������ڴ���������: ��̬����  �Զ�����  ͨ��malloc()���������
- ��̬����: ȫ�ֱ���,�ļ��ڵ�static����,ָ��static�ľֲ����������о�̬��������,ͳ�ƾ�̬����.
        �����������ӳ�������ʱ��ʼ,������ر�ʱ����,Ҳ����˵һֱ�������ڴ��ͬһ��ַ��.
- �Զ�����: û��ָ��static�ľֲ����������Զ�������,��Ϊ�Զ�����.
        �����ڳ�����������ڵ�����ʱ�������ڴ�����,�������ִ�н�������Ƭ�ڴ������ͷ�.
- malloc(): ����ͨ��malloc()��������������������free()Ϊֹ.
*/
#include<stdio.h>
#include<stdlib.h>

int global_var;     //ȫ�ֱ���
static int file_static_var;     //�ļ��ڵ�static����

void func1(void)
{
	int func1_var;      //�Զ�����,��func2()���Զ�������ַ��ͬ
	static int func1_static_var;    //ָ��static�ľֲ�����
	
	printf("&func1_var............%p\n",&func1_var);
	printf("&func1_static_var.....%p\n",&func1_static_var);
}

void func2(void)
{
	int func2_var;		//�Զ�����,��func1()���Զ�������ַ��ͬ

	printf("&func2_var............%p\n",&func2_var);
}

int main()
{
	int *p;
	
	/*���ָ������ָ��*/
	printf("&func1...%p\n",func1);
	printf("&func2...%p\n",func2);
	
	/*����ַ��������ĵ�ַ*/
	printf("string literal........%p\n","abc");
	
	/*���ȫ�ֱ���*/
	printf("&global_var...........%p\n",&global_var);
	
	/*����ļ��ڵ�static�����ĵ�ַ*/
	printf("&file_static_var......%p\n",&file_static_var);
	
	/*����ֲ�����*/
	func1();
	func2();
	
	/*ͨ��malloc�����ڴ�����ĵ�ַ*/
	p = malloc(sizeof(int));
	printf("malloc address........%p\n",p);
	
	free(p);
	getchar();
	return 0;
}
