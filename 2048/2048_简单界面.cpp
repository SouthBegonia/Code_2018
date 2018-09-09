/*
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int addrandom(void);
void printchart(void);
void left(void);
void right(void);
void up(void);
void down(void);
void initlize(void);
void statr_game(void);
static void setpos(int x, int y);

int i, j;	//��ά�������� 
int chart[4][4];	//��Ϸ����
int ch;      //��ȡ��������
int sign;	  //��Ϸ������־ 
int score;  //�÷�
int zero;   //�����������Ŀ�λ
int rnum1 , rnum2;  //��Ϸ��ʼҳ����� 2 ���ֵ�λ��
char play;    //�Ƿ������Ϸ

/*��ʼ�����鼰������*/
void initlize(void)
{

	chart[4][4] = { 0 };	//��ʼ����ά����
	ch=0;
	sign=1;	  	//��Ϸ������־
	score=0;  	//�÷ֳ�ʼΪ0
	zero=0;
	rnum1 = 0, rnum2 = 0;   //��Ϸ��ʼҳ����� 2 ���ֵ�λ��
	play=0;

	/*��ʼ�趨�����������λ����������2*/
	for (i = 0; i < 2; i++)
	{
		rnum1 = rand() % 4;
		rnum2 = rand() % 4;
		chart[rnum1][rnum2] = 2;
	}

}

/*ÿ�������������λ���������2�Ҽ���*/
int addrandom(void)
{
	int add_rnum1=0,add_rnum2=0;
	int randmax=2;		//ʣ�������������ĸ��� 
	zero=0;
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			if(chart[i][j]==0)
				zero+=1;
	if(zero>=2)         //����λ�����ڵ���2�Ž������
	{
		do
		{
			add_rnum1 = rand() % 4;
			add_rnum2 = rand() % 4;
			if(chart[add_rnum1][add_rnum2]==0)
			{
				chart[add_rnum1][add_rnum2] = 2;
				randmax--;
			}
		}while(randmax!=0);
		return 1;		//��ӳɹ�
	}
	return 0;	//���ʧ��(�޿��ÿ�λ)����Ϸ����
	
}

/*��ӡͼ��*/ 
void printchart(void)
{
	int x=28,y=10,l=3;
	setpos(x,y-2);		//���趨���λ��
	system("cls");
	printf("        �÷֣�%d\n",score);
	
	printf("%*c",x,' ');
	printf("�����������Щ��������Щ��������Щ���������\n");
	for (i = 0; i < 4; i++)
		{
			printf("%*c",x,' ');
			for (j = 0; j < 4; j++)
				{
					printf("��%4d", chart[i][j]);
				}
				printf("��\n");
			if(l>0)
			{
				printf("%*c",x,' ');
				printf("�����������੤�������੤�������੤��������\n");
				l--;
			}
		}
		printf("%*c",x,' ');
		printf("�����������ة��������ة��������ة���������");
}

/*��ת���λ��*/
static void setpos(int x, int y)
{
    COORD point = { x, y };//���Ҫ���õ�λ��x,y
    HANDLE HOutput = GetStdHandle(STD_OUTPUT_HANDLE);//ʹ��GetStdHandle(STD_OUTPUT_HANDLE)����ȡ��׼����ľ��
    SetConsoleCursorPosition(HOutput, point);//���ù��λ��
}

/*���'a'*/ 
void left()
{
	int k,j;
	int line;
	
	for(line=0;line<4;line++)	//4�� 
		for(k=0,j=1;j<4;j++)	//�����k���Ҳ�j 
		{
			if(chart[line][j]>0)	//�ұ�����һ�������� ��2020 
			{
				if(chart[line][k]==chart[line][j])		//������������ͬ����ϲ� 
				{
					chart[line][k]=2* chart[line][k];
					chart[line][j]=0;
					score+=chart[line][k];		//�ۼƵ÷� 
					k+=1;
				} 
				else if(chart[line][k]==0)	//������Ϊ0 �� 0020 ���������� 
				{
					chart[line][k]=chart[line][j];
					chart[line][j]=0;
				}else		// �������������м�� ��4020 ����������ʹ���ٽ� 
				{
					chart[line][k+1]=chart[line][j];
					if(j!=k+1)
					{
						chart[line][j]=0;
					}
					k+=1;	
					/*�ƶ�һ�κ󣬼�������ֵ�ı䣬�򲻿��ٸı䣬���ܸı���һ������
					�� 4 2 2 0 ���ƺ�Ϊ 4 4 0 0 ������ 8 0 0 0
					*/ 
				}
			}
		}
}

/*�Ҽ�'d*/
void right(void)
{
	int k,j;
	int line;
	
	for(line=0;line<4;line++)	//4�� 
		for(k=3,j=2;j>=0;j--)
		{
			if(chart[line][j]>0)
			{
				if(chart[line][j]==chart[line][k])
				{
					chart[line][k]= 2 * chart[line][k];
					chart[line][j]=0;
					score+=chart[line][k];
					k--;
				}else if(chart[line][k]==0)
				{
					chart[line][k]=chart[line][j];
					chart[line][j]=0;
				}else 
				{
					chart[line][k-1]=chart[line][j];
					if(j!=k-1)
					{
						chart[line][j]=0;
					}
					k--;
				}
			}
		}
}

/*�ϼ�'w'*/
void up(void)
{
	int k,j;
	int row;	// 4�� 
	
	for(row=0;row<4;row++)
		for(k=0,j=1;j<4;j++)
		{
			if(chart[j][row]>0)
			{
				if(chart[j][row]==chart[k][row])
				{
					chart[k][row]=2*chart[k][row];
					chart[j][row]=0;
					score+=chart[k][row];	
					k++;
				}else if(chart[k][row]==0)
				{
					chart[k][row]=chart[j][row];
					chart[j][row]=0;
				}else
				{
					chart[k+1][row]=chart[j][row];
					if(j!=k+1)
					{
						chart[j][row]=0;
					}
					k++;
				}
			}
		}
}

/*�¼�'s'*/
void down(void)
{
	int k,j;
	int row;
	
	for(row=0;row<4;row++)
		for(k=3,j=2;j>=0;j--)
		{
			if(chart[j][row]>0)
			{
				if(chart[k][row]==chart[j][row])
				{
					chart[k][row]=2*chart[k][row];
					chart[j][row]=0;
					score+=chart[k][row];
					k--;
				}else if(chart[k][row]==0)
				{
					chart[k][row]=chart[j][row];
					chart[j][row]=0;
				}else
				{
					chart[k-1][row]=chart[j][row];
					if(j!=k-1)
					{
						chart[j][row]=0;
					}
					k--;
				}
			}
		}
}

/*��ʼ��Ϸ*/
void start_game(void)
{
	fflush(stdin);
	system("cls");
	initlize();     //��ʼ�����鼰������
	srand(time(NULL));		//�趨����
	setpos(0,0);		//�ƶ�һ�κ������
	
	printchart();		//��ӡ��ʼͼ��

	while(1)
	{
		//��ȡ����
		switch(ch=getch())
		{
			case 'a':
			case 'A':
           	case 75 :
				left();
				break;
			case 'd':
		    case 'D':
       	  	case 77 :
				right();
				break;
      	 	case 'w':
			case 'W':
			case 72 :
				up();
				break;
        	case 's':
       	 	case 'S':
        	case 80 :
				down();
				break;
		}
	fflush(stdin);
	sign=addrandom();	//������λ�������������������� 1 �� 0

	setpos(0,0);		//�ƶ�һ�κ������
	printchart();		//��ӡ����������Ľ���
	if(sign==0)         //���ж���Ϸ�������˳�
		break;
	}		//����ӳɹ�����Ϸ����
	fflush(stdin);
	printf("\n%*c",29,' ');
	printf("��Ϸ������������Ϸ:(Y\\N)");
	
	//fgets(play,sizeof(buf),stdin);
	//sscanf(play,"%s",&play);
	return;
}

 int main()
{
	start_game();
	
	for(;;)
	{
		play=getch();
		if(play=='Y' || play =='y')
			start_game();
		else if(play=='N' || play=='n')
			break;
	}
	printf("Done!\n");
	getchar();
	return 0;
}
 
