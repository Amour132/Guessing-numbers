#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
void meua()
{
	printf("***********************\n");
	printf("***********************\n");
	printf("*******  1.play   *****\n");
	printf("*******  2.exit   *****\n");
	printf("***********************\n");
	printf("***********************\n");
}
void game()
{
	int num = rand() % 100;
	int input = 0;
	while (1)
	{
		printf("��������µ����֣�\n");
		scanf("%d", &input);
		if (num == input)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (num<input)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��С��\n");
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		meua();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룺\n");
			break;
		}

	} while (input);
	return 0;
}
