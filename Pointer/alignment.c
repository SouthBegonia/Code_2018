/*
����Ӳ��(CPU)������,���ڲ�ͬ�������͵Ŀ����õ�ַ�ܵ�һ��������.
Ϊ�����CPU��Ч��,���������ʵ��ؽ��� �߽����(���ֶ���) ,�ڽṹ���в�����ʵ������(Ҳ�����ֹ����).
������ʹ���ֹ����в��ֶ���,Ҳ������߿���ֲ��.
*/
#include<stdio.h>

typedef struct {
	int int1;
	double double1;
	char char1;
	double double2;
} Hoge;

int main()
{
	Hoge hoge;
	
	printf("hoge........%p\n",&hoge);
	printf("int1........%p\n",&hoge.int1);
	printf("double1.....%p\n",&hoge.double1);
	printf("char1.......%p\n",&hoge.char1);
	printf("double2.....%p\n",&hoge.double2);
	
	putchar('\n');
	
	printf("hoge size...%d\n",sizeof(Hoge));
	printf("int1........%d\n",sizeof(hoge.int1));
	printf("double1.....%d\n",sizeof(hoge.double1));
	printf("char1.......%d\n",sizeof(hoge.char1));
	printf("double2.....%d\n",sizeof(hoge.double2));

	/*���ҵĻ���(Dev c++/Win GCC 6.3.0)����ʾ�������
	hoge........0061FF10
	int1........0061FF10	�˴� int1 �� double1 ��� 8 ���ֽ�,˵��ǰ4�ֽ�Ϊ int1 ��С,���� 4 �ֽ�Ϊ "�����"
	double1.....0061FF18    
	char1.......0061FF20    �˴�ͬ������� 7 �ֽ�
	double2.....0061FF28

    ��һ����������С������Ϊ�õ� 21,�����ҵĻ�����Ϊ 32
	hoge size...32  21+4+7=32
	int1........4   �˴�int��Ȼռ4�ֽ�,���ؿ������ַ
	double1.....8
	char1.......1
	double2.....8
*/
	getchar();
	return 0;
}
