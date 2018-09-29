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
		printf("请输入你猜的数字：\n");
		scanf("%d", &input);
		if (num == input)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if (num<input)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
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
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}

	} while (input);
	return 0;
}
