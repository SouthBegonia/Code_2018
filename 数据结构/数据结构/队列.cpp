/**/
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
		q.tail++;
	}

	while (q.head < q.tail)                     //�����в�Ϊ��ʱִ��ѭ��
	{
		printf("%d ", q.data[q.head]);          //��ӡ���ײ������׳���
		q.head++;

		q.data[q.tail] = q.data[q.head];        //�����е��¶�����ӵ���β
		q.tail++;

		q.head++;                               //�ٽ����׳���
	}
	getchar();
	getchar();
	return 0;
}