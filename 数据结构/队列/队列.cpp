/*
    �����ܣ�һ�����У�ɾ����λ���֣������һλ�ƶ���ĩβ��ɾ����������������ӡ��
	�����ص㣺ֻ�����ڶ��е���λ(head)����ɾ����������Ϊ���ӣ����ڶ��е�β��(tail)���в��������
	������û��Ԫ��ʱ��(head==tail)����Ϊ�ն��С�
*/
#include<stdio.h>
struct queue
{
	int data[100];                              //��������
	int head;                                   //����
	int tail;                                   //��β
};

int main()
{
	struct queue q;
	int i;

	q.head = 1;                                 //��ʼ������
	q.tail = 1;

	for (i = 1; i <= 9; i++)                    //��������
	{
		scanf_s("%d", &q.data[q.tail]);           
		q.tail++;                               //ĩβ������λ���¶���
	}

	while (q.head < q.tail)                     //�����в�Ϊ��ʱִ��ѭ��
	{
		printf("%d ", q.data[q.head]);          //��ӡ����
		q.head++;                               //���׳���(����1��Ԫ��ɾ������)��ͬʱָ�����Ԫ��

		q.data[q.tail] = q.data[q.head];        //���¶���(2��Ԫ��)��ӵ���β
		q.tail++;                               //�����β��λ

		q.head++;                               //1��Ԫ���Ѿ�ɾ����2��Ԫ���ƶ���ĩβ����ָ����һԪ��
	}
	getchar();
	getchar();
	return 0;
}