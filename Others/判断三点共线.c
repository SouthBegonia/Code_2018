//�ж�3�����Ƿ���ͬһֱ����
#include<stdio.h>

int main()
{
	int N;
	double a1,a2,a3,b1,b2,b3;
	double A,B,C;
	
	scanf("%d",&N);

	while(N--)  //ѭ��N��
	{
		scanf("%lf%lf",&a1,&b1);    //��ȡÿ��������
		scanf("%lf%lf",&a2,&b2);
		scanf("%lf%lf",&a3,&b3);
		
		A = (b1-b2)/(a1-a2);
		B = (b1-b3)/(a1-a3);
		C = (b2-b3)/(a2-a3);

		if(A==B && B==C && A==C)    //�ж�б���Ƿ����
			printf("Yes\n");
		else printf("No\n");
	}
	getchar();
	return 0;
}
