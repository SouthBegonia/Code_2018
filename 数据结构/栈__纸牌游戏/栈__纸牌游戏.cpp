/*
	�����ܣ�A��B����6���ƣ�1~9��������������ƣ�
���������ջ(s)�к�����ͬ�ƺţ�����˰���ͬ�ƣ�������ͬ�ģ�֮������������ȡ�������η������ƶ�β��
���ƺ�һ������Ϊ������һ��ʤ����
	ջ��ʵ�֣������� s ��
	���е�ʵ�֣�A��B���� q1,q2 ��
*/
#include<stdio.h>
struct queue                                //˫�����ƽṹ��
{
	int  data[1001];
	int head;
	int tail;
};
struct stack                                //�����ƽṹ��
{
	int data[10];
	int top;
};

int main()
{
	struct queue q1, q2;
	struct stack s;
	int mark[10];                           //�����Ƶ�����Ϊ 1~9
	int i, t;

	q1.head = 1; q1.tail = 1;               //��ʼ������
	q2.head = 1; q2.tail = 1;
	s.top = 0;                              //��ʼ��ջ

	for (i = 1; i <= 9; i++)                //���������Щ����������
		mark[i] = 0;

	for (i = 1; i <= 3; i++)                // �����趨����A��B��������
	{
		scanf_s("%d", &q1.data[q1.tail]);
		q1.tail++;
	}
	for (i = 1; i <= 3; i++)
	{
		scanf_s("%d", &q2.data[q2.tail]);
		q2.tail++;
	}

	while (q1.head < q1.tail && q2.head < q2.tail)  //��˫�����Ʋ���
	{
		t = q1.data[q1.head];                       // A��һ����
		if (mark[t] == 0)                           //������
		{
			q1.head++;                              //A������Ƴ���
			s.top++;                                
			s.data[s.top] = t;                      //����Ʒŵ����棬����ջ
			mark[t] = 1;                            //�����������������
		}
		else                                        //������
		{
			q1.head++;                              //A������Ƴ���
			q1.data[q1.tail] = t;                   //A��������Ƶ����Ƶ�ĩβ
			q1.tail++;

			while (s.data[s.top] != t)
			{
				mark[s.data[s.top]] = 0;            //ȡ�����
				q1.data[q1.tail] = s.data[s.top];   //���η����β
				q1.tail++;
				s.top--;                            //�������һ���ƣ�ջ����1
			}
			mark[s.data[s.top]] = 0;
			q1.data[q1.tail] = s.data[s.top];  
			q1.tail++;
			s.top--;
			/*
				��while���������һ��64~67�д�������Ϊwhile������û���������ڵ���ͬ���ƣ�
		     ������ӣ�����ȡ��������ͬ�������ƣ�����Ҳ��֮�ı䡣
			*/
		}

		t = q2.data[q2.head];                       //B����
		if (mark[t] == 0)                           //������
		{
			q2.head++;                             
			s.top++;
			s.data[s.top] = t;
			mark[t] = 1;
		}
		else                                        //������
		{
			q2.head++;
			q2.data[q2.tail] = t;
			q2.tail++;
			while (s.data[s.top] != t)              //�����ϵ������ηŵ�B����ĩβ
			{
				mark[s.data[s.top]] = 0;            //ȡ�����
				q2.data[q2.tail] = s.data[s.top];   //���η����β
				q2.tail++;
				s.top--;
			}
			mark[s.data[s.top]] = 0;
			q2.data[q2.tail] = s.data[s.top];    
			q2.tail++;
			s.top--;
			/*
				ͬ��������������ϴ��������������
			*/
		}
	}
	
	if (q2.head == q2.tail)                          //��һ������Ϊ��
	{
		printf("AӮ\n");
		printf("A��ǰ�������ǣ�");
		for(i=q1.head;i<=q1.tail-1;i++)
			printf("%d ",q1.data[i]);
		printf("\n");
			if (s.top > 0)
			{
				printf("�����ϵ����ǣ�");
					for (i = 1; i <= s.top; i++)
						printf("%d ", s.data[i]);
			}
			else
				printf("�����Ѿ�û����\n");
	}
	else 
	{
		printf("BӮ\n");
		printf("B��ǰ�������ǣ�");
		for (i = q2.head; i <= q2.tail - 1; i++)
			printf("%d ", q2.data[i]);
		printf("\n");
		if (s.top > 0)
		{
			printf("�����ϵ����ǣ�");
			for (i = 1; i <= s.top; i++)
				printf("%d ", s.data[i]);
		}
		else
			printf("�������Ѿ�û����\n");
	}

	/*
		�������69~72��99~102����Σ���ʾ����ȡ������1����ͬ���ƣ������˸ճ��ӵ���ͬ�ƣ�
			��1��
			����:2 4 1 2 5 6
				 3 1 3 5 6 4
			�����AӮ
				A��ǰ�������ǣ�5 6 2 3 1 4 6 5
				�����ϵ����ǣ�2 1 3 4
			��2��
			����:1 2 1
			     3 4 5
			���: AӮ
				A��ǰ�����ǣ� 1 2 1 3
				�����ϵ����ǣ�1 4

		��Ӵ���κ�
			��1��
			���룺2 4 1 2 5 6
				  3 1 3 5 6 4
			�����BӮ
				B��ǰ�������ǣ�6 5 2 3 4 1
				�����ϵ����ǣ� 3 4 5 6 2 1
			��2��
			���룺1 2 1
			      3 4 5
			�����AӮ
				A��ǰ�������ǣ�1 4 2 3 1
				�����ϵ����ǣ� 5
	*/
	getchar();
	getchar();
	return 0;
}