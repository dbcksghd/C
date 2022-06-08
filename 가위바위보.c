#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 0, b;

	printf(" 1 = 바위\n2 = 가위\n3 = 보\n4 = 종료\n");



	while (1)
	{
		scanf_s("%d", &b);
		a = rand() % 4;
		if (a == 1)
		{
			if (b == 1)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("비겼습니다.\n");
			}

			else if (b == 2)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("졌습니다.\n");
			}

			else if (b == 3)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("이겼습니다.\n");
			}
		}

		else if (a == 2)
		{
			if (b == 2)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("비겼습니다.\n");
			}

			else if (b == 3)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("졌습니다.\n");
			}

			else if (b == 1)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("이겼습니다.\n");
			}
		}

		else if (a == 3)
		{
			if (b == 3)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("비겼습니다.\n");
			}

			else if (b == 1)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("졌습니다.\n");
			}

			else if (b == 2)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("이겼습니다.\n");
			}
		}

		printf("\n");

		if (b == 4)
			break;



	}

	return 0;
}