#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


void profile();
void game();
void profile1();

int main()
{
	int choose = 0;
	

	do
	{
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
			printf("请重新输入");
		}

	} while (1);
	system("cls");
	profile1();

	return 0;
}

void game()
{
	int i = 0;
	int j = 0;

	
		j = rand();

		printf("请猜一个数；");

		while (1)
		{
			scanf("%d", &i);

			system("cls");

			if (i == j)
			{
				printf("恭喜！猜对了\n");
				break;
			}
			else if (i > j)
			{
				printf("大了");
			}
			else
			{
				printf("小了");
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
