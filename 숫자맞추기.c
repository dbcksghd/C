#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int a = 0, i, j = 0;

	srand((unsigned int)time(NULL));
	i = rand() % 101;
	printf("���� ����(0~100) :");
	while (j <= 10)
	{
		scanf_s("%d", &a);
		if (a == i) {
			printf("�̰� ���߳�\n");
			break;
		}
		else if (i < a) {
			printf("down\n");
			j++;
		}
		else if (i > a)
		{
			printf("up\n");
			j++;
		}

		if (j == 11)
		{
			printf("�̰� �����߳� ����\n");
			break;

		}

	}


	return 0;
}