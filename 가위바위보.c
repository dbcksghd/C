#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 0, b;

	printf(" 1 = ����\n2 = ����\n3 = ��\n4 = ����\n");



	while (1)
	{
		scanf_s("%d", &b);
		a = rand() % 4;
		if (a == 1)
		{
			if (b == 1)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�����ϴ�.\n");
			}

			else if (b == 2)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�����ϴ�.\n");
			}

			else if (b == 3)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�̰���ϴ�.\n");
			}
		}

		else if (a == 2)
		{
			if (b == 2)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�����ϴ�.\n");
			}

			else if (b == 3)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�����ϴ�.\n");
			}

			else if (b == 1)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�̰���ϴ�.\n");
			}
		}

		else if (a == 3)
		{
			if (b == 3)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�����ϴ�.\n");
			}

			else if (b == 1)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�����ϴ�.\n");
			}

			else if (b == 2)
			{
				printf("com : %d\nplayer : %d\n", a, b);
				printf("�̰���ϴ�.\n");
			}
		}

		printf("\n");

		if (b == 4)
			break;



	}

	return 0;
}