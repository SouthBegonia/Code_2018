#include<stdio.h>
#include<windows.h>
void setxy(int x, int y); 
void gotoxy(int x,int y);
static void SetPos(int x, int y);

int main()
{
	int a=0,b=0;
	printf("A0123456789\n");
	printf("B0123456789\n");
	SetPos(3,1);	//x�У�y�� 
	printf("*");
	
	return 0;
}

//����CMD���ڹ��λ��
void setxy(int x, int y)  //x,yΪ�������
{
   COORD coord = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void gotoxy(int x,int y)    //���ù���λ��
{      
	COORD c;      
	c.X=x-1;      
	c.Y=y-1;      
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

static void SetPos(int x, int y)
{
    COORD point = { x, y };//���Ҫ���õ�λ��x,y
    HANDLE HOutput = GetStdHandle(STD_OUTPUT_HANDLE);//ʹ��GetStdHandle(STD_OUTPUT_HANDLE)����ȡ��׼����ľ��
    SetConsoleCursorPosition(HOutput, point);//���ù��λ��
}
