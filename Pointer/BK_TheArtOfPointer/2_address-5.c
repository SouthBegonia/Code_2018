#include<stdio.h>
#include<stdlib.h>

int main()
{
	double x, y, average;
	
	printf("���븡����x��y��");
	scanf("%lf%lf",&x,&y);     //%lf���Ƿ��пո�Ӱ��
	
	average = (x+y)/2;
	
	printf("x��y��ƽ����Ϊ��%.2f\n",average);
	system("PAUSE");

	return 0;
}
