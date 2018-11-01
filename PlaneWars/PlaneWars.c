/*
�����ܣ���ʵ�ַɻ���ս
���л�����VS2017
���¼�¼��2018.10.30  --��������

���ɣ��Ƿ����sleep()ʵ�ַɻ����ӵ��ĵ��٣�������������
*/
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int high, width;				//�߽� 
int plane_x, plane_y;			//�ɻ����� 
int bullet_x, bullet_y;			//�ӵ����� 
int enemy_x, enemy_y;			//�л�����
int score;		//����
int flag;						//�ɻ�״̬ 


/* ����ƶ���(x,y)λ�� */
void gotoxy(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}

/* ���ع�� */
void HideCursor() 
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };  // �ڶ���ֵΪ0��ʾ���ع��
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

/* �ȴ� x ���� */
int sleep(unsigned long x)					
{
	clock_t c1 = clock(), c2;
	do
	{
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0*(c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}

/* ��ʼ��������Ϣ */
void initialize()
{
	/*�߽緶Χ*/
	high = 28;
	width = 40;

	/*�ɻ���ʼλ��*/
	plane_x = high - 3;
	plane_y = width / 2;

	/*�ӵ���ʼλ��*/
	bullet_x = 0;
	bullet_y = plane_y;

	/*���˳�ʼλ��*/
	enemy_x = 0;
	enemy_y = plane_y;

	/*��ʼ����*/
	score = 0;

	/*�ɻ����*/
	flag = 0;							 

	HideCursor();
}

/*��ʾ����*/ 
void show()							
{
	int i, j;
	for (i = 0; i < high; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (flag)
				break;
			else if ((i == plane_x) && (j == plane_y))		//�ɻ����� 
				printf("A");
			else if ((i == enemy_x) && (j == enemy_y))		//�л����� 
				printf("o");
			else if ((i == bullet_x) && (j == bullet_y))	//�ӵ����� 
				printf("|");
			else if ((j == width - 1) || (i == high - 1) || (j == 0) || (i == 0))				//��ӡ�߽� 
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}

	if ((plane_x == enemy_x) && (plane_y == enemy_y))	//ײ���л�
	{
		flag = 1;
		printf("%*c��Ϸ����! ���յ÷�: %d\n",10,' ',score);
	}
	else
		printf("%*c��ǰ�÷�: %d\n", 15,' ',score);
}

/*�Զ����̣��ӵ��͵л����Զ������ƶ����ж��Ƿ������µл�*/
void AutomaticProcess()
{
	/*�л����ӵ����ٶȲ�����Ԥ��ֵ*/
	static int speed_enemy;
	static int speed_bullet;
	static int NORMAL_SPEED_ENEMY = 20;
	static int NORMAL_SPEED_BULLET = 1;

	/* �ӵ��ķ���Ч�����ɽ����ӵ�������(��ûʲôʵ�����壬�����ٶ��Ѿ����������ÿ�η��䶼��ˢ��ǰһ���ӵ�)��
	�˶�ԭ������while()ѭ���ӵ�һֱ�����˶�(bullet_x--)�� speed_bullet ��������������ѭ������ʵ�ֵ��٣�
	�����˶������������ô�����ᣬԭ������ initialize() ��ʼ�����ӵ����� bullet_x=-1���ڵ�ͼ�⣬�������˶��ڵ�ͼ�ڲ��ɴ�ӡ�������ǿո���󼴸�ֵ bullet_x �ӵ��ɼ��س����˶�*/ 
	if (speed_bullet < NORMAL_SPEED_BULLET)
		speed_bullet++;
	if (speed_bullet == NORMAL_SPEED_BULLET)
	{
		if (bullet_x > 0)
		{
			bullet_x--;
		}
		speed_bullet = 0;
	}

	/* �ӵ����ел��󣬷������ӣ���ʼ���ӵ����꣬�����µĵл� */
	if ((bullet_x == enemy_x) && (bullet_y == enemy_y))		 
	{
		score++;
		bullet_x = -1;	

		/*�µĵл��Ӷ��˺����������*/
		enemy_x = 1;
		enemy_y = 1 + rand() %(width - 2);	// 1~(width-2)
	}

	/* �л��ٶȣ�ͬ��Ҳ�ɵ��� */
	if (speed_enemy < NORMAL_SPEED_ENEMY)					
		speed_enemy++;
	if (speed_enemy == NORMAL_SPEED_ENEMY)
	{
		if (enemy_x < high)
			enemy_x++;
		else
		{
			enemy_x = 0;
			enemy_y = 1 + rand() % (width - 2);
		}
		speed_enemy = 0;
	}
}

/* ��ʱ��ȡ����ʹ�ɻ��ƶ��������ӵ� */
void InputEnableMobile()						
{
	char input;

	if (_kbhit())	//����������(�������򷵻ط�0���ù��̵����벻��������)
	{
		input = _getch();	//��ʱ��ȡ�Ҳ�����
		if ((input == 72) && plane_x > 1)		//��
			plane_x--;
		if ((input == 80) && plane_x < high - 2)	//��
			plane_x++;
		if ((input == 75) && plane_y > 1)		//��
			plane_y--;
		if ((input == 77) && plane_y < width - 2)	//��
			plane_y++;
		if (input == ' ')	//�ո����ӵ����ӵ��ӷɻ�ǰһ���귢��
		{
			bullet_x = plane_x - 1;
			bullet_y = plane_y;
		}
	}
}

int main()
{
	
	int replay = 1;		//�Ƿ������Ϸ��־
	char ch;		//��ȡ�ж��Ƿ������Ϸ

	system("color 0");	//����̨������ɫ��0 ��

	while (replay == 1)
	{
		initialize();	//��ʼ��ͼ��������Ϣ
		system("cls");	//����

		/*�ɻ�û���ƻ����������*/
		while (flag == 0)	
		{
			gotoxy(0, 0);
			show();			// ��ʾ����
			AutomaticProcess();		// �Զ�����(�ӵ��л��ƶ����ж��Ƿ������µл�)
			InputEnableMobile();	// ��ȡ����ʹ�ɻ��ƶ��������ӵ�
		}

		printf("%*c�ٴ���Ϸ(y/n)��",10,' ');
		scanf_s("%c", &ch);
		if (ch == 'y' || ch == 'Y')
			replay = 1;
		else 
			replay = 0;
	}

	printf("%*c��Ϸ����\n",10,' ');
	system("PAUSE");

	return 0;
}