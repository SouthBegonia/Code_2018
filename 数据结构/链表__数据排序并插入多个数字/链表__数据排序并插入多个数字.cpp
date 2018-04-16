#include<stdio.h>
#include<stdlib.h>
int data[101], n;
void quicksort(int left, int right)    //����������(����) 
{
	int i, j, t, temp;
	if (left > right)
		return;                        

	temp = data[left];                    //temp�д�ľ��ǻ�׼�����ٶ�Ϊ������λa[1]��
	i = left;
	j = right;
	while (i != j)                     
	{
		//��������Աȣ����ұߵ������ڻ�׼�����������򣩣��������
		while (data[j] >= temp && i < j)
			j--;
		//�ڴ������ҶԱȣ�����ߵ���С�ڻ�׼�����������򣩣�������
		while (data[i] <= temp && i < j)
			i++;

		//���ҵ� a[j]<temp && a[i]>temp �ұ�ǲ�����(i<j)ʱ������������
		if (i < j)
		{
			t = data[i];
			data[i] = data[j];
			data[j] = t;
		}
	}
	//���������(i=j)ʱ����Ӧ����ֵ���׼��(a[left])����������׼����λ
	data[left] = data[i];
	data[i] = temp;

	quicksort(left, i - 1);            //�������ķ��飬������һ���ݹ�Ĺ���
	quicksort(i + 1, right);           //���������ұߵķ��飬right����Ϊ n 

}

int main()
{
	int right[101];
	int i, t, len;

	printf("����Ԫ�ظ�����");
	scanf_s("%d", &n);
	printf("���룺");
	for (i = 1; i <= n; i++)
		scanf_s("%d", &data[i]);
	len = n;

	quicksort(1, n);             //���ÿ���������

	for (i = 1; i <= n; i++)
	{
		if (i != n)
			right[i] = i + 1;
		else
			right[i] = 0;
	}

	len++;
	printf("�����һ������(��С����λԪ��)��");
	scanf_s("%d", &data[len]);

	t = 1;
	while (t != 0)
	{
		if (data[1] > data[len])
		{
			right[len] = right[0];       //���Ϊ��λԪ�صĵ�ַ���Ϊ�²�������ĵ�ַ
			right[0] = len;
			break;
		}

		if (data[right[t]] > data[len])              //�����ǰ������һ����ֵ���ڴ�����������򣬽������뵽�м�
		{
			right[len] = right[t];                   //���²����������һ������ŵ��ڵ�ǰ������һ�����
			right[t] = len;                          //��ǰ������һ����ž����²������ֵı��
			break;
		}
		t = right[t];
	}



	t = 1;                                //�����������
	printf("���벢���������Ϊ�� ");
	if (right[0] != 0)
	{
		// printf("����λԪ�ص�ַΪdata[%d]\n", right[0]);
		printf("%d ", data[right[0]]);
	}

	while (t != 0)
	{
		printf("%d ", data[t]);
		t = right[t];
	}
	getchar();
	getchar();
	return 0;
}



/*            ���ýṹ�壬���������ް취��
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head, *now, *last, *t;
	int num[1000], num_all=0;
	int i, n, a, k=0;
	head = NULL;
	last = NULL;

	printf("��ʼ�����м���Ԫ�أ�");
	scanf_s("%d", &n);
	printf("����Ԫ�أ�");

	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &a);
		now = (struct node*)malloc(16);
		now->data = a;
		now->next = NULL;
		if (head == NULL)
			head = now;
		else
			last->next = now;
		last = now;
	}

	void queue(1,n);
	/*
	printf("���뼸������ \n");
	scanf_s("%d", &num_all);
	k = num_all;                            //k���ڼ���num_all�Ƿ�ı�
	printf("�������Ϊ��");
	for (i = 1; i <= num_all; i++)
	{
		scanf_s("%d", &num[i]);
	}

	
	for (i = 1; i <= num_all;i++)
	{
		t = head;
		k = num_all;
		while (t != NULL)
		{
			if (t->next->data > num[i])
			{
				now = (struct node *)malloc(16);
				now->data = num[i];
				now->next = t->next;
				t->next = now;
				k--;
				continue;
			}
			if (k != num_all)
				continue;
			t = t->next;
		}
	}
	

	t = head;
	while (t != NULL)
	{
		printf("%d", t->data);
		t = t->next;
	}
	
	getchar();
	getchar();
	return 0;
}
void queue(int left,int right)
{
	int i, j, t, temp;
	if()
	
}
*/