/*
getche����ʱ��ȡ�л���
ESC 27
*/
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int situation;
	char letter_1,letter_2;
	
	srand(time(NULL));
	
	while(1)
	{
		printf("����һ���������ĸ��");
		situation = rand()%2;

		if(situation == 0)
		{
			letter_1 = rand()%26 + 'A'; 	//��д��ĸ
			printf("%c\n",letter_1);
		}
		else {
			    letter_1 = rand()%26 + 'a';     //Сд��ĸ
			    printf("%c\n",letter_1);
		}
		
		do
		{
			printf("�����룺");
			letter_2 = getche(); //�����س���
			fflush(stdin);
			/* ����
			scanf("%c",&letter_2);
			getchar();
			*/

			if(letter_2 == letter_1)
			{
				printf("��ȷ��\n\n");
				break;
			}
			else if(letter_2 != letter_1 && letter_2 != 27){
				printf("����\n");
			}
		}while(letter_2 != letter_1 && letter_2 != 27);
		
		if(letter_2 == 27)
			break;
	}
	printf("������\n");;
	return 0;
}
