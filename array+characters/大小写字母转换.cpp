//����һ���ַ�������������У��ı��������д�Сд��ĸ���������
#include<stdio.h>
#include<ctype.h>
void exc(char e[]);
int main()
{
	int i = 0;
	int j = 0;
	char a[80];
	
	gets(a);
	
	// ctype.h���������� 
	while(a[i] != '\0')
	{
		if(isupper(a[i]))
		    a[i] = tolower(a[i]);
		else if(islower(a[i]))
		    a[i] = toupper(a[i]);
		i++;
	}
	printf("There is the first result: ");
	for(i--;i >= 0;i--)
	    putchar(a[i]);
	printf("\n");
	
	
	
	//��ͨ����:  *����a[80]�д�Сд��ĸ�Ѿ������溯�����ı䣬
	//             �����к����ı�����Ϻ������к��ֵ 
	
	while(a[j] != '\0')
	{
		if(a[j] >= 'A'&& a[j] <= 'Z')
		    a[j] = a[j] + 32;    
		else if(a[j] >= 'a'&& a[j] <= 'z')
		    a[j] = a[j] - 32;
		j++;
	}
	printf("Exchanging the last result in another way: ");
	for(j--;j >= 0;j--)
	    putchar(a[j]);
	printf("\n");
	
	return 0;
	
}
