#define _CRT_SECURE_NO_WARNING 1

#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("****  1.��ʼ��Ϸ  ****\n");
	printf("****  0.�˳���Ϸ  ****\n");
	printf("**********************\n");
}

void game()
{
	char board[ROW][COL];

	InitBoard(board,ROW,COL);//��ʼ������ӡδ���崦Ϊ�հ�

	DisplayBoard(board,ROW,COL);//��ӡ����
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}









