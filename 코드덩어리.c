//#include <stdio.h>
//
//int main(void) {
//
//	printf("����ȫ\n");
//	printf("�� �� ȫ\n");
//	printf("��  ��  ȫ\n");
//
//
//
//	printf("�̸�: ����ȫ\n");
//	printf("�й�: 1234\n");
//	printf("��ȭ��ȣ: 010-1234-5678\n");
//
//	printf("    @@    \n");
//	printf("   @  @   \n");
//	printf("  @    @  \n");
//	printf("   @  @   \n");
//	printf("    @@    \n");
//	return 0;
//}
//#include <stdio.h>
//int main(void) {
//
//	/*printf("���α׷��� ���� ������\n");
//	printf("%f\n", 1234.567);
//	printf("%s %d", "�ȳ��ϼ���", 20);*/
//
//	//printf("�� �̸��� ȫ�浿 �Դϴ�.\n");
//	//printf("�� ���̴� %d�� �Դϴ�.\n", 20);
//	//printf("�� ��ȭ��ȣ�� %d%d-%d-%d �Դϴ�\n",0, 10, 1234, 5679);
//
//	//printf("%d * %d = %d\n", 4, 5, 4 * 5);
//	//printf("%d * %d = %d", 7, 9, 7 * 9);
//	//return 0;
//
//	/*int num1 = 1;
//	float num2 = 1;
//	char c = 'a';
//	printf("num1(int) : %d\n", num1);
//	printf("num2(float) : %f\n", num2);
//	printf("c(char) : %c", c);
//
//	return 0;*/
//	//int num1 = 3;
//	//int num2 = 4;
//	//printf("num1: %d, num2: %d\n", num1, num2);
//	//printf("�������: %d\n", num1+num2);
//	//printf("%d��(��) %d�� ���� %d�Դϴ�.", num1, num2, num1+num2);
//	/*int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("���� one: %d\n", a);
//	printf("���� two: %d\n", b);
//	printf("%d + %d = %d", a, b, a + b);*/
//	int a, b;
//	printf("���� �� ���� �Է��ϼ���(0����) : ");
//	scanf_s("%d %d", &a, &b);
//	printf("%d * %d = %d\n", a, b, a*b);
//	printf("%d / %d = %d", a, b, a / b);
//	return 0;
//
//}
//#include <stdio.h>
//int main() {
//
//	
//	int a, b, c;
//	printf("���� �� ���� �Է��ϼ���(0����) : ");
//	scanf_s("%d %d %d", &a, &b, &c);
//	printf("%d * %d + %d = %d\n", a, b, c, a*b+c);
//	return 0;
//
//}
//#include <stdio.h>
//int main() {
//
//
//	int a;
//	printf("���� �� ���� �Է��ϼ���(0����) : ");
//	scanf_s("%d", &a);
//	printf("%d*%d = %d", a, a, a*a);
//	return 0;
//
//}
//#include <stdio.h>
//
//int main(void) {
//	int a, b;
//	printf("�� ���� ������ �Է��ϼ���.(0 ����) : ");
//	scanf_s("%d %d", &a, &b);
//	printf("%d / %d ��: %d\n", a, b, a / b);
//	printf("%d %% %d ������ : %d", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//
//int main(void) {
//
//	int a, b, c;
//	printf("�� ���� ������ �Է��ϼ���(0����) : ");
//	scanf_s("%d %d %d", &a, &b, &c);
//	printf("������ : %d", (a - b) * (b + c) * (c % a));
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3, result4;
//	result1 = (num1 == 10 && num1 <= 9);
//	result2 = (12 >= num2 || num1 != num2);
//	result3 = !(num1 > num2);
//	result4 = !num2;
//	printf("	result1:	%d\n	result2:	%d\n	result3:	%d\n	result4:	%d\n",
//		result1, result2, result3, result4);
//}
//#include <stdio.h>
//
//int main() {
//
//	int a;
//	scanf_s("%d", &a);
//	if (a > 20) printf("ADULT");
//	else printf("%d years later-> ADULT", 20-a);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a;
//	scanf_s("%d", &a);
//	if (a % 6 == 0) printf("6�� ���");
//	else printf("6�� ��� X");
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > b) {
//		if (b < c) {
//			if (c < a)
//				printf("%d\n", c);
//			else printf("%d\n", a);
//
//		}
//		else printf("%d\n", b);
//	}
//	else {
//		if (b > c) {
//			if (c < a) printf("%d\n", a);
//			else printf("%d\n", c);
//		}
//		else printf("%d\n", b);
//	}
//}
//#include <stdio.h>
//
//int main(void) {
//	
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	if (a > 3 && b > 3) printf("win");
//	else if (a > 3 || b > 3) printf("draw");
//	else printf("lose");
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a;
//	scanf_s("%d", &a);
//	if (a > 0) {
//		if (a % 2 == 0)
//			printf("���\n¦��");
//		else printf("���\nȦ��");
//	}
//	else if (a < 0) {
//		if (a % 2 == 0)
//			printf("����\n¦��");
//		else printf("����\nȦ��");
//		
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//    int a, b;
//    scanf_s("%d %d", &a, &b);
//    if (a % 2 == 0) {
//        if (b % 2 == 0)
//            printf("¦��+¦��=¦��");
//        else if (b % 2 != 0)
//            printf("¦��+Ȧ��=Ȧ��");
//    }
//    else if (a % 2 != 0) {
//        if (b % 2 != 0)
//            printf("Ȧ��+Ȧ��=¦��");
//        else if (b % 2 == 0)
//            printf("Ȧ��+¦��=Ȧ��");
//    }
//        return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//		if ((a-b+c) % 10 == 0) printf("���");
//		else printf("�׷�����");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//    int a, b, c, min, mid, max;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a >= b && b >= c)
//    {
//        min = c;
//        mid = b;
//        max = a;
//    }
//    else if (c >= b && b >= a)
//    {
//        min = a;
//        mid = b;
//        max = c;
//    }
//    else if (c >= a && a >= b)
//    {
//        min = b;
//        mid = a;
//        max = c;
//    }
//    else if (b >= a && a >= c)
//    {
//        min = c;
//        mid = a;
//        max = b;
//
//    }
//    else if (b >= c && c >= a)
//    {
//        min = a;
//        mid = c;
//        max = b;
//    }
//    else if (a >= c && c >= b)
//    {
//        min = b;
//        mid = c;
//        max = a;
//    }
//    printf("%d %d %d", min, mid, max);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//    int a, b, c;
//    scanf("%1d%1d", &a, &b);
//    c = ((10 * b) + a) * 2;
//    if (c > 100) c -= 100;
//    printf("%d\n", c);
//    if (c <= 50) printf("GOOD");
//    else printf("OH MY GOD");
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("1");
//		break;
//	case 2:
//		printf("2");
//		break;
//	case 3:
//		printf("3");
//		break;
//	default:
//		printf("����");
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("���� �ҹ��ڸ� �Է��ϼ��� : ");
//	scanf("%c", &ch);
//	switch (ch) {
//	case 'a':
//	case 'e':
//	case 'i':
//	case 'o': // break�� ������� ������ case�� ��� �����ϴ� Ư¡�� ����
//	case 'u':
//		printf("�Է���	%c��	�����Դϴ�\n", ch);
//		break; // break�� Ư¡�� Ȱ���Ͽ� �̿� �� �� �̻��� case�� ��� ǥ�� ����
//	default:
//		printf("�Է���	%c��	�����Դϴ�\n", ch);
//	}//����Ʈ �Ŀ��� ����ġ���� ������ �극��ũ�� �ʿ����
//	return 0;
// 
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c;
//	scanf("%d %c %d", &a, &b, &c);
//
//	switch ((char)b)
//	{
//	case ('+'):
//		printf("%d", a + c);
//		break;
//	case ('-'):
//		printf("%d", a - c);
//		break;
//	case ('*'):
//		printf("%d", a * c);
//		break;
//	case ('%'):
//		printf("%d", a % c);
//		break;
//	case ('/'):
//		printf("%d", a / c);
//		break;
//	default:
//		printf("ERROR : ��������ڰ� �ƴմϴ�.");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	int num1, num2, num3;
//	int num 3 = (num1 > num2) ? num1 : num2;
//	if (num1 > num2)
//		num3 = num1;
//	else
//		num3 = num2;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("�� ���� ū �� : %d", (a > b) ? a : b);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	float a, b, c, d;
//	scanf("%f %f %f", &a, &b, &c);
//	d = (a + b + c) / 3;
//	printf("����� ���: %.2f\n", d);
//	printf("����� ���: %c", (d >= 80.5) ? 'O' : 'X');
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", (a > b ? (a > c ? a : c) : (b > c ? b : c)));
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	d = (a < b ? (a < c ? a : c) : (b < c ? b : c));
//	if (d <= 170) printf("CRASH");
//	else printf("PASS");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//    int a, b, c, min, mid, max;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a >= b && b >= c)
//    {
//        min = c;
//        mid = b;
//        max = a;
//    }
//    else if (c >= b && b >= a)
//    {
//        min = a;
//        mid = b;
//        max = c;
//    }
//    else if (c >= a && a >= b)
//    {
//        min = b;
//        mid = a;
//        max = c;
//    }
//    else if (b >= a && a >= c)
//    {
//        min = c;
//        mid = a;
//        max = b;
//
//    }
//    else if (b >= c && c >= a)
//    {
//        min = a;
//        mid = c;
//        max = b;
//    }
//    else if (a >= c && c >= b)
//    {
//        min = b;
//        mid = c;
//        max = a;
//    }
//    printf("%d %d %d", min, mid, max);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//    int h, m;
//    scanf("%d %d", &h, &m);
//    if (m <= 29) {
//        if (h > 0) printf("%d %d", h - 1, m + 30);
//        else printf("%d %d", 23, m + 30);
//    }
//    else if (m >= 30) printf("%d %d", h, m - 30);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//    int y, m;
//    scanf("%d %d", &y, &m);
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//        if (m == 2) {
//            printf("29");
//        }
//    }
//    else {
//        if (m == 2) {
//            printf("28");
//        }
//    }
//    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//        printf("31");
//    else if (m == 4 || m == 6 || m == 9 || m == 11)
//        printf("30");
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int i = 1, num;
//	scanf("%d", &num);
//
//	while (1) {
//		if (i > num)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n���α׷� ����\n");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a = 65;
//	int num;
//	scanf("%d", &num);
//
//	while (a <= num) {
//
//		printf("%c ", a);
//		a++;
//	}
//	printf("\n���α׷� ����\n");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int i = 1, b = 0;
//	int a;
//	scanf("%d", &a);
//
//	while (i <= a) {
//		b += i;
//		i++;
//		
//	}
//	printf("1���� %d������ �� : %d", a, b);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int i = 1, num;
//	scanf("%d", &num);
//
//	while (i <= num)
//	{
//		printf("while �� ���� %d�� ����\n", i);
//		i++;
//	}
//	printf("���α׷� ����\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		c = a;
//		d = b;
//	}
//	else {
//		c = b;
//		d = a;
//	}
//	while (d <= c)
//	{
//		printf("%d ", d);
//		d++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c, d;
//	scanf("%c %c", &a, &b);
//	if (a > b) {
//		c = a;
//		d = b;
//	}
//	else {
//		c = b;
//		d = a;
//	}
//	while (d <= c)
//	{
//		printf("%c ", d);
//		d++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b=1;
//	scanf("%d", &a);
//	while (b <= a)
//	{
//		printf("*");
//		b++;
//	}
//
//	return 0;
//}
//#define CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a, b;
//	scanf("%d %d", &a, &b);
//	while (a <= b)
//	{
//		if (a % 2 != 0)
//			printf("%d ", a);
//		a++;
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a , b;
//
//	scanf("%d %d", &a, &b);
//	while (a != 0 && b != 0) {
//		printf("%d\n", a + b);
//		scanf("%d %d", &a, &b);
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i, num;
//	scanf("%d", &num);
//	for (i = 1; i <= num; num--)
//	{
//		printf("%d ", num);
//	}
//	printf("\n���α׷� ����\n");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a = 0, n, i;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		a = a + i;
//	}
//	printf("1���� %d������ �� : %d", n, a);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b;
//	scanf("%d", &a);
//	for (b = 1; b < 10; b++)
//	{
//		printf("%d*%d=%d\n", a, b, a * b);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int n, a, b;
//	scanf("%d", &n);
//	b = 0;
//	for (a = 1; a <= n; a++)
//	{
//		if (a % 2 == 0)
//			b = a + b;
//	}
//	printf("%d", b);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	for (c = 0; a <= b; a++)
//	{
//		if (a % 4 == 0)
//			c = a + c;
//	}
//	printf("%d", c);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a, b;
//	int c = 0;
//	int d = 0;
//	for (a = 1; a <= 10`; a++)
//	{
//		scanf("%d", &b);
//		if (b % 5 == 0)
//			c++;
//		if (b % 7 == 0)
//			d++;
//	}
//	printf("5�� ��� : %d��, 7�� ��� : %d��", c, d);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//;
//	double a, b, c = 1;
//	double d = 0;
//	for (a = 1; c > 0; a++)
//	{
//		scanf("%lf", &c);
//		if (c < 0)
//			break;
//		d = d + c;
//		b = d / a;
//	}
//	printf("�Է¹��� ���� ��� : %.2lf", b);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b = 0, c = 0;
//	scanf("%d", &a);
//	while (a >= c)
//	{
//		b++;
//		c += b;
//	}
//	printf("%d %d", b, c);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b, c = 1;
//	int d=0;
//	scanf("%d", &a);
//	while (a >= c)
//	{
//		c++;
//		scanf("%d", &b);
//		if (b > d) d = b;
//	}
//	printf("%d", d);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//
//	int a = 1;
//	while (a > 0)
//	{
//		printf("\n�ڿ����� �Է��ϼ���(����� 0):");
//		scanf("%d", &a);
//		if (a == 0) printf("�����մϴ�!");
//		else if (a % 2 == 0) printf("%d�� ¦��!", a);
//		else printf("%d�� Ȧ��!", a);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	while (a > b)
//	{
//		b++;
//		c += b;
//	}
//	printf("%d", c);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, x;
//	int i, j;
//	scanf("%d %d", &a, &x);
//	for (i = 1; i <= a; i++)
//	{
//		scanf("%d", &j);
//		if (j < x)
//		{
//			printf("%d ", j);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a, i;
//	scanf("%d", &a);
//
//	for (i = 2; a > i; i++)
//	{
//		if (a % i == 0)
//		{
//			printf("�Ҽ� �ƴ�");
//			return 0;
//		}
//
//	}
//	printf("�Ҽ�!");
//}
//#include <stdio.h>
//
//int main() {
//
//	int num, i, number;
//	scanf("%d", &num);
//	for (i = 0; i <= num; i++)
//	{
//		scanf("%d", &number);
//		if (i == 1)
//			printf("%d ", number);
//		if (i == (num+1)/2)
//			printf("%d ", number);
//		if (i == num)
//			printf("%d ", number);
//
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= a; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h> // ���ﰢ��
//
//int main() {
//
//	int n, j, i;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = n; j >= i; j--)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//���簢�� ���� �Է��� ������ �۾�����
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//			for (int k = n; k >= j; k--)
//			{
//				printf("*");
//			}
//			
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//�¿���� ���ﰢ��
//
//int main(){
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{	
//		for(int j = 1; j <= n; j++)
//		{
//			if (j <= i - 1)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//��� ���� �� �ﰢ��
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	for (int k = 2; k <= n; k++)
//	{
//		for (int l = n; l >= k; l--)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//}
//#include  <stdio.h>//�Ƕ�̵� �����
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int a = 0; a < n / 2 + 1; a++)
//	{
//
//		for (int b = 0; b < n / 2 - a; b++)
//			printf(" ");
//		for (int b = 0; b < a * 2+1; b++)
//			printf("*");
//
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//�¿���� �ﰢ��
//
//int main(){
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{	
//		for(int j = 1; j <= n-i; j++) printf(" ");
//		for (int j = 1; j <= i; j++) printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//���Ϲ����� �Ƕ�̵�
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 2 * n - i; j++)
//		{
//			if (j > i - 1) printf("*");
//			else printf(" ");
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//���� ���̾Ƹ�� ���
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = n; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < (i+1)*2-1; j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < i+2; j++)
//		{
//			printf(" ");
//		}
//		for (int j = (n-1)*2-1; j > i*2; j--)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//�¿������ �ﰢ��
//
//int main() {
//
//	int n, i, j;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j <= n - i)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//�¿������ ����� ���� �� �ﰢ��
//
//int main() {
//
//	int n, i, j, k, l;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (j <= n - i)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//	for (k = 2; k <= n; k++)
//	{
//		for (l = 1; l <= n; l++)
//		{
//			if (k > l) printf(" ");
//			else printf("*");
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	for (i = 2; i <= n; i++)
//	{
//		for (j = n; j >= i; j--)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//���� �ﰢ��
//
//int main() {
//
//	int i, j, n;
//	int a = 65;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = n; j >= i; j--)
//		{
//			printf("%c", a++);
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//����ﰢ��+���ڻﰢ��=�������� 1 �� �� ���簢��
//
//int main() {
//
//	int n, i, j, k, l;
//	scanf("%d", &n);
//	char a = 65;
//	int b = 1;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = n; j >= 0; j--)
//		{
//			if (j+1 <= i)
//				printf("%c", a++);
//			else 
//				printf("%d", b++);
//		}printf("\n");
//	}
//
//	return 0;
//}
// 
//#include <stdio.h>//�¿���� ���ڿ��ﰢ��
//
//int main() {
//
//	int n, a = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j <= i - 1)
//				printf(" ");
//			else
//				printf("%d", a++);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>//�¿���� ���ڻﰢ��
//
//int main(){
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		int a = 1;
//		for(int j = 1; j <= n-i; j++) printf(" ");
//		for (int j = 1; j <= i; j++) {
//			printf("%d", a++);
//			
//		}printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	char a[10];
//	scanf("%c %c %c %c %c %c %c %c %c %c", &a[0], & a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9], &a[10]);
//	printf("%c%c%c%c%c%c%c%c%c%c", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10]);
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	char arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf(" %c", &arr[i]);//�Է¹����� ����
//
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%c", arr[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf(" %d", &a[i]);
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d", a[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	int num[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		num[i] = i+1;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", num[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//
//	char arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf(" %c", &arr[i]);
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%c ", arr[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int cnt = 0;
//	char sName[100], sNum[10];
//	printf("�̸���	�����	�Է��ϼ���	:	");
//	scanf("%s", sName);
//	printf("�й���	�Է��ϼ���	:	");
//	scanf("%s", sNum);
//	while (sName[cnt] != '\0')
//	{
//		cnt++;
//	}
//	printf("����� �̸��� %s(%d����)�̰� �й��� %s�Դϴ�.\n", sName, cnt, sNum);
//	return 0;
//}

//#include <stdio.h> // �迭�� �հ�� ��ձ��ϱ�
//
//int main() {
//	int n=0, k=1, arr[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf(" %d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		n += arr[i];
//
//	}
//	k = n / 10;
//	printf("�Է��� ���� �հ� : %d\n", n);
//	printf("�Է��� ���� ��� : %d", k);
//	return 0;
//}

//#include <stdio.h>//�Ųٷ� ���
//
//int  main() {
//
//	int i, arr[500];
//	for (i = 0; ; i++)
//	{
//		scanf(" %d", &arr[i]);
//		if (arr[i] == 0)
//			break;
//	}
//	i--;
//	for (; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>//�迭�� ���� ū �� ���
//
//int main() {
//
//	int arr[10], max=0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	int i, j, arr[10], min=0, max=0;
//	for (int j = 0; j < 10; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] <= 99)
//		{
//			if (arr[i] > arr[i - 1])
//				min = arr[i];
//		}
//		if (arr[i] >= 100)
//		{
//			if (arr[i] < arr[i - 1])
//				max = arr[i];
//
//		}
//	}
//	if (min == 0) printf("100 %d", max);
//	else if (max == 0) printf("%d 100", min);
//	else printf("%d %d", min, max);
//
//	return 0;
//}  //4��

//#include <stdio.h>//¦����, Ȧ����� ���
//
//int main() {
//
//	int arr[10], sum=0, avg=0;
//	for (int i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i % 2 == 0) avg += arr[i];
//		else sum += arr[i];
//	}
//	printf("sum : %d\n", sum);
//	printf("avg : %.1f", avg/5.0);
//
//	return 0;
////}

//#include <stdio.h>
//
//int main() {
//
//	int a[5] = { 95, 75, 85, 100, 50 };
//	int i, j, temp, min;
//	for (i = 0; i < 4; i++)
//	{
//		min = i;
//		for (j = i + 1; j < 5; j++)
//		{
//			if (a[j] < a[min])
//				min = j;
//		}
//		if (min != i)
//		{
//			temp = a[min];
//			a[min] = a[i];
//			a[i] = temp;
//		}
//
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	 
//	return 0;
//}

//#include <stdio.h> //�ҹ��� �빮�� �ٲٱ�
//
//int main() {
//
//	char a[1001], i;
//	scanf("%s", a);
//	for(i = 0; a[i] != '\0'; i++)
//	{
//		if (a[i] >= 97 && a[i] <= 122) {
//			a[i] -= 32;
//		}
//		else if (a[i] >= 65 && a[i] <= 90) {
//			a[i] += 32;
//		}
//		
//	}
//	printf("%s", a);
//
//	return 0;
//}

//#include <stdio.h> //3�ǹ�� Ȯ��
//
//int main() {
//
//	char a[501];
//	int sum = 0;
//	scanf("%s", a);
//
//	for (int i = 0; a[i] != 0; i++)
//	{
//		sum += (int)a[i] - 48;
//	}
//	if (sum % 3 == 0) printf("1");
//	else printf("0");
//	return 0;
//}

//#include <stdio.h> //�ڰ����� 1��
//
//int main()
//{
//    int i;
//    int c[26] = { 0 };
//    char a;
//    for (i = 0; i < 100; i++) {
//        scanf(" %c", &a);
//        if (a < 65 || 90 < a) break;
//        c[a - 65]++;
//    }
//
//    for (i = 0; i < 26; i++) {
//        if (c[i] > 0) {
//            printf("%c : %d\n", 'A' + i, c[i]);
//        }
//    }
//}

//#include <stdio.h> // �ڰ����� 2
//
//int main() {
//
//	int arr[1000] = { 0 }, i, number;
//
//	while (1)
//	{
//		scanf("%d", &number);
//		if (number == 0) break;
//		arr[(number / 10)]++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("�����ڸ� ����[%d] : %d��\n", i, arr[i]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h> // 2���� ��ȯ��
//
//int main() {
//
//    unsigned int a, n;
//    printf("���Ʈ ���� :  ");
//    scanf_s("%d", &n);
//    printf("�ٲ� ���� :  ");
//    scanf_s("%d", &a);
//    for (int i = n-1; i >= 0; --i)
//    {
//        int b = a >> i & 1;
//        printf("%d", b);
//        if (i % 4 == 0) printf(" ");
//    }
//    return 0;
//}

//#include <stdio.h> // �ڰ����� 4��
//
//int main() {
//
//	char num[3][5] =
//	{
//	{ 5, 8, 10, 6, 4 }, { 11, 20, 1, 13, 2 }, { 7, 9, 14, 22, 3 } //å ����
//	};
//
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%2d    ", num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////#include <stdio.h> //�ڰ����� 3��
////
////int main() {
////
////	int a[66], i;
////	a[0] = 100;
////	scanf("%d", a[1]);
////	printf("100 %d", a[1]);
////	for (i = 2; i < 100; i++)
////	{
////		a[i] = a[i - 2] - a[i - 1];
////			printf("%d ", a[i]);
////		if (a[i] < 0) break;
////	}
////	return 0;
////}
//
//#include <stdio.h>
//
//int main() {
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p;
//
//	printf("%d\n", arr[0]);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	return 0;
//}
// 

//#include<stdio.h>
//
//int main()
//{
//	int arr[1000];
//	int a, i;
//
//	scanf("%d", &a);
//	printf("%d", a);
//	for (i = 1; i <= a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = a; i >= 1; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//

//#include <stdio.h>
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = n; j >= i; j--)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= i; k++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void printn(double m)
//{
//	double o = m * m * 3.14;
//	printf("%.2lf", o);
//}
//int main(){

//	int a, b, min, max;
//	scanf_s("%d %d", &a, &b);
//	if (a > b) {
//		min = b;
//		max = a;
//	}
//	else {
//		min = a;
//		max = b;
//	}
//	for (int i = min; min <= max; min++)
//	{
//		printf("%d ", min);
//	}
//	return 0;
//}

//	int n, sum=0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 5 == 0) sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//	int n, a, i;
//	float avg = 0;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		scanf("%d", &a);
//		avg += a;
//	}
//	avg /= (double)i;
//	printf("%.2lf", avg);
//	return 0;
//}


//	int n=0, even=0, odd=0, i;
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &n);
//		if (n % 2 == 0) even++;
//		else odd++;
//	}
//	printf("even : %d\n odd : %d", even, odd);
//	return 0;
//}

//	int a, b, i, sum=0, min=0, max=0;
//	float avg, k = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		max = a;
//		min = b;
//	}
//	else {
//		max = b;
//		min = a;
//	}
//	for (i = min; i <= max; i++)
//	{
//		if (i % 3 == 0 || i % 5 == 0)
//		{
//			sum += i;
//			k++;
//		}
//	}
//	avg = sum / k;
//	printf("sum : %d\navg : %.1f", sum, avg);
//	return 0;
//}

//	int i = 0, j=0, k=0, l=0; 
//	char arr[3][5] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf(" %c", &arr[i][j]);
//			if (arr[i][j] >= 65 && arr[i][j] <= 90) arr[i][j] += 32;
//			else if(arr[i][j]>=97&&arr[i][j]<=122)
//				arr[i][j] -= 32;
//		}
//	}
//	for (k = 0; k < 3; k++)
//	{
//		printf("\n");
//		for (l = 0; l < 5; l++)
//		{
//			printf("%c ", arr[k][l]);
//		}
//	}
//	return 0;
//
//}


/*int arr[100], max=0, min=0;
for (int i = 0; i < 100; i++)
{
scanf("%d", &arr[i]);

if (arr[i] == 999) break;
if (max < arr[i]) max = arr[i];
if (min > arr[i]) min = arr[i];
}
printf("max : %d\nmin : %d", max, min);*/


//int i, j, num;
//int sum = 0;//for������ �ʱ�ȭ ���ֱ�
//int arr[4][2];
//for (int i = 0; i < 4; i++)
//{
//    for (j = 0; j < 2; j++)
//    {
//        scanf(" %d", &arr[i][j]);
//    }
//}
//
//for (i = 0; i < 4; i++)
//{
//    sum = 0;
//    for (j = 0; j < 2; j++)
//    {
//        sum += arr[i][j];
//    }
//    printf("%d ", sum / 2);
//}
//printf("\n");
//for (j = 0; j < 2; j++)
//{
//    sum = 0;
//    for (i = 0; i < 4; i++)
//    {
//        sum += arr[i][j];
//    }
//    printf("%d ", sum / 4);
//}
//printf("\n");
//sum = 0;
//for (int i = 0; i < 4; i++)
//{
//    for (j = 0; j < 2; j++)
//    {
//        sum += arr[i][j];
//    }
//}
//printf("%d", sum / 8);


/*int a, b, c;
scanf("%d %d %d", &a, &b, &c);

if (a > b && b > c) printf("%d", b);
else if (a > c && c > b) printf("%d", c);
else if (b > a && a > c) printf("%d", a);
else if (b > c && c > a) printf("%d", c);
else if (c > a && a > b) printf("%d", a);
else if (c > b && b > a) printf("%d", b);*/ //������ ��Ʈ

//double n;
//scanf("%lf", &n);
//printn(n);
//	return 0;
//}

//	��	����	������	���ڷ�	���޹޾Ƽ�	����	����	ū	����	��ȯ�ϴ�	�Լ���
//	����	����	����	��ȯ�ϴ�	�Լ���	�����غ���!
//#include <stdio.h>
//	�Լ�	����
//int GetMax(int num1, int num2, int num3);	//	����	ū	��	��ȯ�ϴ�	�Լ�
//int GetMin(int num1, int num2, int num3);	//	����	����	��	��ȯ�ϴ�	�Լ�
//int main()
//{
//	int num1, num2, num3;
//	printf("��	����	����	�Է�	:	");
//	scanf("%d	%d	%d", &num1, &num2, &num3);
//	printf("����	ū	��	:	%d\n", GetMax(num1, num2, num3));
//	printf("����	����	��	:	%d\n", GetMin(num1, num2, num3));
//	return 0;
//}
//int GetMax(int num1, int num2, int num3)
//{
//	int temp=0;
//	if (num1 > temp) temp = num1;
//	if (num2 > temp) temp = num2;
//	if (num3 > temp) temp = num3;
//	return temp;
//
//}
//int GetMin(int num1, int num2, int num3)
//{
//	int temp1 = num1;
//	if (num1 < temp1) temp1 = num1;
//	if (num2 < temp1) temp1 = num2;
//	if (num3 < temp1) temp1 = num3;
//	return temp1;
//}


//#include <stdio.h>
//int Fun1(int A, int B, int C);	//	(A+B)%C	��	��ȯ
//int Fun2(int A, int B, int C);	//	((A%C)	+	(B%C))%C	��	��ȯ
//int Fun3(int A, int B, int C);	//	(A��B)%C	��	��ȯ
//int Fun4(int A, int B, int C);	//	((A%C)	��	(B%C))%C	��	��ȯ
//int main()
//{
//	int A, B, C;
//	scanf("%d %d %d", &A, &B, &C);
//	printf("%d\n", Fun1(A, B, C));
//	printf("%d\n", Fun2(A, B, C));
//	printf("%d\n", Fun3(A, B, C));
//	printf("%d\n", Fun4(A, B, C));
//	return 0;
//}
//int Fun1(int A, int B, int C)
//{
//	return (A + B) % C;
//}
//int Fun2(int A, int B, int C)
//{
//	return ((A % C) + (B % C)) % C;
//}
//int Fun3(int A, int B, int C)
//{
//	return (A * B) % C;
//}
//int Fun4(int A, int B, int C)
//{
//	return ((A % C) * (B % C)) % C;
//}


//#include <stdio.h>
//int isPrime(int N);	//	N��	�Ҽ��̸�	1,	�ƴϸ�	0��	��ȯ�ϴ�	�Լ�
//int main()
//{
//	int N, TC;
//	scanf("%d", &TC);
//	while (TC--)
//	{
//		scanf("%d", &N);
//		printf("%d\n", isPrime(N));
//	}
//	return 0;
//}
//int isPrime(int N) {
//	int a = 0;
//	for (int i = 2; i <= N; i++) {
//		if (N % i == 0) a++;
//	}
//	if (a == 1)
//		return 1;
//	else
//		return 0;
//}

//#include <stdio.h> 
//
//int square(int n);
//int main() {
//
//	int n;
//	printf("������ ���� �Է� : ");
//	scanf("%d", &n);
//	printf("%d�� ���� : %d\n",n, square(n));
//	return 0;
//}
//
//int square(int n) {
//	return n * n;
//}
//
//#include <stdio.h>
//int n1, n2, n3;
//int getmax(int n1, int n2, int n3);
//int getmin(int n1, int n2, int n3);
//
//int main()
//{
//	int n1, n2, n3;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d %d", &n1, &n2, &n3);
//	printf("���� ū �� : %d\n", getmax(n1, n2, n3));
//	printf("���� ���� �� : %d", getmin(n1, n2, n3));
//	return 0;
//
//}
//int getmax(int n1, int n2, int n3)
//{
//	if (n1 > n2 && n1 > n3) return n1;
//	else if (n2 > n1 && n2 > n3) return n2;
//	else return n3;
//}
//int getmin(int n1, int n2, int n3)
//{
//	if (n1 < n2 && n1 < n3) return n1;
//	else if (n2 < n1 && n2 < n3) return n2;
//	else return n3;
//}

//#include <stdio.h> 
//
//int plus(int n);
//int minus(int n);
//int main() {
//
//	int n;
//	printf("�����Է� : ");
//	scanf("%d", &n);
//	printf("10 ���Ѱ� : %d\n10 ���� : %d", plus(n), minus(n));
//	return 0;
//}
//
//int plus(int n) {
//	return n + 10;
//}
//int minus(int n) {
//	return n - 10;
//}


//#include <stdio.h> 
//
//int k = 1;
//int b(int a, int n);
//int main() {
//
//	int a, n;
//	scanf("%d %d", &a, &n);
//	printf("%d", b(a, n));
//	return 0;
//}
//
//int b(int a, int n) {
//	for (int i = 1; i <= n; i++)
//	{
//		k *= a;
//	}
//	return k;
//}

//#include <stdio.h>
//
//int b(int n);
//int k = 1;
//int main() {
//
//	int n;
//	printf("�Է� : ");
//	scanf("%d", &n);
//	printf("%d! = %d", n, b(n));
//	return 0;
//}
//int b(int n) {
//	for (int i = 1; i <= n; i++)
//	{
//		k *= i;
//	}
//	return k;
//}

//#include <stdio.h>
//
//int b(int n);
//int a = 0;
//int main() {
//
//	int n;
//	printf("�Է� : ");
//	scanf("%d", &n);
//	printf("%d�� ��� ���� : %d", n, b(n));
//	return 0;
//}
//
//int b(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0) a++;
//	}
//	return a;
//}

//#include <stdio.h>
//
//int b(int n1, char a, int n2);
//
//int main() {
//	char a;
//	int n1, n2;
//	printf("�� ���� �Է� : ");
//	scanf("%d %d", &n1, &n2);
//	printf("������ �Է� : ");
//	scanf("%c", &a);
//	printf("%d %c %d = %d", n1, a, n2, b(n1, a, n2));
//	return 0;
//}
//int b(int n1, char a, int n2) {
//	if (a == '+') return n1 + n2;
//	else if (a == '-') return n1 - n2;
//	else if (a == '*') return n1 * n2;
//	else if (a == '/') return n1 / n2;
//	else
//		return 0;
//}

//#include <stdio.h>
//int addToTotal(int num);
//int main()
//{
//	int num, i;
//	for (i = 0; i < 3; i++) {
//		printf("�Է�%d	:	", i + 1);
//		scanf("%d", &num);
//		printf("\t����	:	%d\n", addToTotal(num));
//	}
//}
//int addToTotal(int num)
//{
//	static int total;
//	total += num;
//	return total;
//}

//#include <stdio.h>
//int a(int n)
//{
//	if (n <= 1) return 1;
//	return n + a(n - 1);
//}
// 
//int n;
//int main() {
//	scanf("%d", &n);
//	printf("%d\n", a(n));
//	return 0;
//}

//#include <stdio.h> 
//
//void k(int a, int b)
//{
//	if (a > b) return;
//	if (a % 2 == 1) printf("%d\n", a);
//	k(a + 1, b);
//}
// 
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	k(a, b);
//	return 0;
//}

//#include <stdio.h> 
//
//int a(int n)
//{
//	if (n <= 2) return 1;
//	return a(n - 1) + a(n - 2);
//}
// 
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d ", a(n));
//}

//#include<stdio.h>
//int main()
// {
//	int nData = 10;
//	int* pData = &nData;
// 
//	//	����	nData��	����ִ�	����	���
//	printf("nData	:	%d\n", nData);
// 
//	//	����	nData��	�޸�	�ּҸ�	���
//	printf("&nData	:	%p\n", &nData);
// 
//	//	����	pData��	����ִ�	����	���
//	printf("pData	:	%p\n", pData);
// 
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num1 = 20;
//	int num2 = 30;
//
//	int* pnum1 = &num1;
//	int* pnum2 = &num2;
//
//	printf("num1  value: %8d,		&num1 : %p\n", num1, &num1);
//	printf("num2  value: %8d,		&num2 :	%p\n", num2, &num2);
//	printf("pnum1 value: %p,	&pnum1:	%p\n", pnum1, &pnum1);
//	printf("pnum2 value: %p,	&pnum2:	%p\n", pnum2, &pnum2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i;
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;	//	int	*ptr	=	&arr[0];��	������	����
//	printf("ptr	:	%p,	arr	:	%p\n", ptr, arr);
//	for (i = 0; i < 5; i++)
//		printf("%d	", arr[i]);  //�迭�� �̾Ƴ��� for��
//	printf("\n");
//	for (i = 0; i < 5; i++)
//		printf("%d	", *(ptr + i)); //*ptr�� arr[0]�� ������Ű�� i��ŭ ���ϴ� for��
//	printf("\n");
//	for (i = 0; i < 5; i++)
//		printf("%d	", *(ptr++)); //arr[0]���� �����ؼ� 4���� ���� for��
//	printf("\n");
//	printf("*ptr	:	%d\n", *ptr);		//	������	����Ű��	������?
//	printf("ptr	:	%p,	arr	:	%p\n", ptr, arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a, b, c;
//scanf("%d %d %d", &a, &b, &c);
//if (a > b && a > c)
//printf("%d", a);
//else if (b > a && b > c)
//printf("%d", b);
//else
//printf("%d", c);
//return 0;
//}

//#include <stdio.h>
//// �Լ� ����
//void MyFunc();
//struct Point //Point��� �̸��� ����ü ���� (�Լ� �ܺ�)
//{
//	int x;	// Point ����ü�� �����ϴ� ��� x
//	int y;	//	Point ����ü�� �����ϴ� ��� y
//};
//struct Point g_myPoint;	// struct Point�� (����)���� ���� ����
//int main()
//{
//	struct Point myPoint0;	//	struct	Point�� (����)���� ���� ����
//	return 0;
//}
//void MyFunc()
//{
//	struct Point myPoint1;	// struct Point�� (����)���� ���� ����
//}

//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996)
//struct Person	//	struct	Person	����ü	����
//{
//	double height;
//	double weight;
//	char name[10];
//	short grade;
//};
//int main()
//{
//	//	struct	Person	����ü	����	person	����
//	//	����ü	���	����	��	��	ä���
//	//	����ü	���	����	��	���
//	struct Person p1;
//	p1.height = 180;
//	p1.weight = 67;
//	strcpy(p1.name, "����ȫ");
//	p1.grade = 3;
//
//	printf("person.height : %.1lf\n", p1.height);
//	printf("person.weight :	%.1lf\n", p1.weight);
//	printf("person.name : %s\n", p1.name);
//	printf("person.grade : %d\n", p1.grade);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996)
//
//struct employee
//{
//	int rmqduwjdqh;
//	char jumin[14];
//	char name[20];
//};

//int main() {
//
//	struct employee e1;
//
//	printf("�̸�: ");
//	scanf("%s", e1.name);
//	printf("�޿�����: ");
//	scanf("%d", &e1.rmqduwjdqh);
//	printf("�ֹι�ȣ : ");
//	scanf("%s", e1.jumin);
//
//	printf("�̸�: %s\n", e1.name);
//	printf("�޿�����: %d\n", e1.rmqduwjdqh);
//	printf("�ֹι�ȣ : %s\n", e1.jumin);
//
//
//	return 0;
//}
//1734�� ���� Ǯ��
//#include <stdio.h>
//
//
//int main()
//{
//
//    char a[100];
//    char b[100];
//
//    scanf("%s %s", a, b);
//    int i, j, l, k;
//    for (i = 0; a[i] != '\0'; i++) {}
//    for (j = 0; b[j] != '\0'; j++) {}
//
//    l = i;
//    k = j;
//    if (l > k) {
//        for (j = 0; b[j] != '\0'; j++)
//        {
//            printf("%c", b[j]);
//        }
//        printf(" ");
//        for (i = 0; a[i] != '\0'; i++)
//        {
//            printf("%c", a[i]);
//        }
//
//    }
//    else if (l < k) {
//        for (i = 0; a[i] != '\0'; i++)
//        {
//            printf("%c", a[i]);
//        }
//        printf(" ");
//        for (j = 0; b[j] != '\0'; j++)
//        {
//            printf("%c", b[j]);
//        }
//
//
//
//    }
//    else if (l == k) {
//        for (i = 0; a[i] != '\0'; i++) {
//            if (a[i] > b[i]) {
//                for (j = 0; b[j] != '\0'; j++)
//                {
//                    printf("%c", b[j]);
//                }
//                printf(" ");
//                for (i = 0; a[i] != '\0'; i++)
//                {
//                    printf("%c", a[i]);
//                }
//
//
//                break;
//            }
//            else if (a[i] < b[i]) {
//                for (i = 0; a[i] != '\0'; i++)
//                {
//                    printf("%c", a[i]);
//                }
//                printf(" ");
//                for (j = 0; b[j] != '\0'; j++)
//                {
//                    printf("%c", b[j]);
//                }
//
//
//                break;
//            }
//
//
//        }
//
//    }
//    return 0;
<<<<<<< HEAD
//}

//����ü �迭�� �Է¹ޱ�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 100
//
//
//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//int main()
//{
//	int i;
//	char status;
//	struct student a[SIZE];
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("�й� �Է� : ");
//		scanf("%d", &a[i].number);
//		printf("�̸� �Է� : ");
//		scanf("%s", &a[i].name[0]);
//		printf("���� �Է� : ");
//		scanf("%lf", &a[i].grade);
//
//		printf("�� �Է�  �Ͻðڽ��ϱ�?(y/n)\n");
//		scanf(" %c", &status);
//		if (status == 'n') {
//			break;
//		}
//	}
//	for (int j = 0; j <= i; j++)
//	{
//		printf("�й� : %d, �̸� : %s, ���� : %.2lf\n", a[j].number, a[j].name, a[j].grade);
//	}
//	return 0;
=======
>>>>>>> master
//}