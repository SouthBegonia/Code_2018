/*ʹ�þ�̬���������ַ�����������ɻ�������д*/
#include<stdio.h>

char *staticFormat(const char* name, size_t quantity, size_t weight)
{
	static char buffer[64]; //��̬������ buffer
	sprintf(buffer,"Item: %s Quantity: %u Weight: %u",name,quantity,weight);
	return buffer;
}

int main()
{
	char *part1 = staticFormat("Axle",25,45);
	char *part2 = staticFormat("Piston",55,5);
	printf("%s\n",part1);
	printf("%s\n",part2);
	/*staticFormat ���ζ����ö�ʹ��ͬһ����̬�����������¶��ε���ʱ��дǰһ�ε��õĽ��
	�����ӡ��Item: Piston Quantity: 55 Weight: 5*/
	
	getchar();
    return 0;
}

