#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void read_slogan(FILE *fp, char **slogan)
{
	char buf[1024];
	int i;
	
	for(i=0;i<7;i++)
	{
        /*�ӱ�׼����ȡ7�α���*/
		fgets(buf,1024,fp);     
		
		/*ɾ��ĩβ�����ַ�*/
		buf[strlen(buf)-1] = '\0';
		
		/*���䱣��һ��������ڴ�ռ�*/
		slogan[i] = malloc(sizeof(char) * (strlen(buf)+1));
		
		/*���Ʊ��������*/
		strcpy(slogan[i],buf);
	}
}

int main()
{
	char *solgan[7];    //�ȼ���slogan[i][n]
	int i;
	
	read_slogan(stdin,solgan);

	for(i=0;i<7;i++)
		printf("%s\n",solgan[i]);
		
	getchar();
	return 0;
}
