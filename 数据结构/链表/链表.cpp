/*
	�����ܣ�����n��Ԫ�ص���������һ���������뵽�����ڽ���2�����λ�á�
	�����ص㣺������鲻�ɲ���ɾ�����ص㡣
	����ԭ������ṹ�������ֵ��(data)�ͺ��ָ��( *next)������ͷ�� *head�����ڱ���
				��������� a �洢��������ֵ�� data ���� p->data = a
				�ѵ�ǰ�����ָ�� *next ָ��գ��� p->next = NULL
*/
#include<stdio.h>
#include<stdlib.h>                           //���� malloc()

struct node                                  //��ʾ�������͵Ľṹ��
{
	int data;                                //�洢���ݵ���
	struct node *next;                       //���ָ��
};

int main()
{
	struct node *head, *p, *q, *t;
	int i, n, a;
	scanf_s("%d", &n);
	head = NULL;                            //����ͷ��ʼ��
	q = NULL;

	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &a);
		p = (struct node *)malloc(sizeof(struct node));  
		/*
			malloc()��������̬����ָ����С���ڴ棬Ĭ����(void *)����(δȷ�����͵�ָ��)��
						  (struct node *)ǿ��ת����mallocָ������Ϊ node * �͡�
						  sizeof(struct node) = 16 
			p = malloc()����ʾָ��pָ����malloc������������ڴ�ռ�
			
		*/

		p->data = a;                       //�����ݴ��浽��ǰ����data����
		p->next = NULL;                    //���õ�ǰ���ĺ��ָ��ָ��գ���ʾ��ǰ������һ���Ϊ��
		if (head == NULL)
			head = p;                      //������ǵ�һ�������Ľ�㣬��ͷָ��ָ��������
	 	else
			q->next = p;                   //�����ǵ�һ�������Ľ�㣬����һ�����ĺ��ָ��ָ��ǰ���
		q = p;                             //ָ��qҲָ��ǰ���
		/*
			p����ʾ��ǰ���
			q����ʾ��һ���
		*/
	}

	scanf_s("%d", &a);                     //������������
	t = head;                              //������ͷ����ʼ����
	 while (t != NULL)                      //��û�е�������ײ�ʱ��ʼѭ��
	{
		if (t->next->data > a)             //�����ǰ������һ������ֵ���ڴ�����������������뵽�м�
		{
			p = (struct node *)malloc(sizeof(struct node));     //��̬����һ���ռ�������µĽ��
			p->data = a;
			p->next = t->next;              //�������ĺ��ָ��ָ��ǰ���ĺ��ָ����ָ��Ľ��
			t->next = p;                    //��ǰ���ĺ��ָ��ָ���µĽ��
			break;                          //������ɣ�����
		}
		t = t->next;                        //������һ�����
	}

	t = head;                               //��������е�������
	while (t != NULL)
	{
		printf("%d ", t->data);
		t = t->next;                        //������һ���
	}
	getchar();
	getchar();

	return 0;
}