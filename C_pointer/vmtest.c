#include<stdio.h>

int main()
{
	int hoge;
	char buf[256];
	
	printf("&hoge...%p\n",&hoge);
	printf("Input initial value.\n");
	
	/*������ scanf("%d",&hoge);
	scanf():���������ж����ַ�,�Ժ͸�ʽ˵����(%d)��ƥ��Ĳ��ֽ��б任����.
		��˵����Ϊ%dʱ����123�L �����ж�ȡ�� 123 �����з����ɲ��������б�����getchar()��ȡ
        ����,��scanf()��ȡʧ��(˵����%d��������Ӣ���ַ�),scanf()�ᵼ�¶�ȡʧ�ܵĲ�������������
	*/
	fgets(buf,sizeof(buf),stdin);
	sscanf(buf,"%d",&hoge);     //����ȡ��Ч����
	
	for(;;)
	{
		printf("hoge..%d\n",hoge);

		getchar();
		hoge++;
	}
	
	getchar();
	return 0;
}
