#include<stdio.h>

int main()
{
	int hoge=0x12345678;
	unsigned char *hoge_p=(unsigned char*)&hoge;
	
	printf("%x\n",hoge_p[0]);
	printf("%x\n",hoge_p[1]);
	printf("%x\n",hoge_p[2]);
	printf("%x\n",hoge_p[3]);
	/*���Ϊ:
		78
		56
		34
		12
    Ҳ����˵,CPU�� "0x12345678" ������ֵ�� "78,56,34,12" ��������ʽ�ߵ��������, ��ΪС���ֽ���.
    �����ڹ���վ��CPU����˳����,��Ϊ����ֽ���.
    �������������Ǹ�����,�ڴ��ϵı�����ʽ���滷���Ĳ�ͬ����ͬ.
	*/
	getchar();
	return 0;
}
