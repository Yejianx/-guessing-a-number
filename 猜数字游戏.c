#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void profile();
void game();
void profile1();

int main()
{

	int choose = 0;

	srand((unsigned int)time(NULL));
	
	do
	{
		system("cls");

		profile();
	
		scanf("%d", &choose);

		if (choose==1)
		{
			system("cls");
			game();
		}
		else if (choose == 0)
		{
			break;
		}
		else
		{
			system("cls");
			printf("请重新输入:\n");
		}

	} while (1);
	system("cls");
	profile1();

	return 0;
}

void game()
{
	int guess = 0;
	int random = 0;
	
	random = (rand()%100);//rand%100让其减少到两位数


		printf("请猜一个数；");

		while (1)
		{
			scanf("%d", &guess);

			if (guess == random)
			{
				printf("恭喜！猜对了\n");
				getchar();
				getchar();
				break;
			}
			else if (guess > random)
			{
				printf("猜大了\n");
			}
			else
			{
				printf("猜小了\n");
			}
		}


}

void profile()
{
	printf("*************************************\n");
	printf("***********输入1，玩*****************\n");
	printf("***********输入0，不玩***************\n");
	printf("*************************************\n");

}
void profile1()
{
	printf("*************************************\n");
	printf("**************迎下次再来*************\n");
	printf("*************************************\n");

}

