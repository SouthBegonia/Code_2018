/*�����ַ�������ʱ����malloc�����ռ���в��������������ַ���������������в���*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  
    char *error = "ERROR:";    
    char *errorMessage = "Not enough memory";   
    char *buffer = (char *)malloc(strlen(error)+strlen(errorMessage)+1);   //�����ռ�����ַ�������
    strcpy(buffer,error);   
    strcat(buffer,errorMessage);    

    printf("%s\n",buffer);
    printf("%s\n",error);
    printf("%s\n",errorMessage);
    free(buffer);
    /*��ȷ��ӡ
    ERROR: Not enough memory
    Not enough memory
    */


    /* ���ַ����������ڸ�д��ɵĴ����������
    char *error_mistake = "ERROR:";
    char *errorMessage_mistake = "Not enough memory";
    strcat(error_mistake,errorMessage_mistake);

    printf("%s\n",error_mistake);
    printf("%s\n",errorMessage_mistake);

    �����ӡ��
    ERROR: Not enough memory
    ot enough memory
    */
    getchar();
    return 0;
}
