//#define _CRT _SECURE_NO_WARINGS
//#include<stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//
//	scanf("%d", &a);
//	scanf("%d", &b);
//
//	result = a + b;
//	printf(" %d + %d = %d\n", a, b, result);
//	
//	result = a - b;
//	printf(" %d - %d = %d\n", a, b, result);
//
//	result = a * b;
//	printf(" %d * %d = %d\n", a, b, result);
//
//	result = a / b;
//	printf(" %d / %d = %d\n", a, b, result);
//}
//#define _CRT _SECURE_NO_WARINGS
//#include<stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//
//	printf("ù ��° ����� ���� �Է��ϼ��� ==>");
//	scanf("%d", &a);
//
//	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
//	scanf("%d", &b);
//
//	result = a + b;
//	printf(" %d + %d = %d\n", a, b, result);
//
//	result = a - b;
//	printf(" %d - %d = %d\n", a, b, result);
//
//	result = a * b;
//	printf(" %d * %d = %d\n", a, b, result);
//
//	result = a / b;
//	printf(" %d / %d = %d\n", a, b, result);
//}
//#define _CRT _SECURE_NO_WARINGS
//#include<stdio.h>
//void main()
//{
//	int a, b,c,d;
//	int result;
//
//	printf("ù ��° ����� ���� �Է��ϼ��� ==>");
//	scanf("%d", &a);
//
//	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
//	scanf("%d", &b);
//
//	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
//	scanf("%d", &c);
//
//	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
//	scanf("%d", &d);
//
//	result = a + b + c + d;
//
//	printf(" %d + %d + %d + %d = %d\n", a, b, c, d, result);
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int radInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù���� : %d\n", radInt);
//	printf("�������� : %d", nextInt);
//
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("ù���� : %d\n", randInt);//0~9
//	printf("�������� : %d", nextInt);//50-59
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("���ָӴϿ� �ִ� ����");
//	int mymoney = (rand() % 10 + 1) * 1000;
//	printf(" %d���̴�.\n", mymoney);
//	int coin500 =rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������");
//	printf(" %d ���̴�.", coin500 + coin100);
//	printf("\n���� ������ ���������?");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//
//		printf("apple�� 17���� �ƴմϴ�\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �۽��ϴ�.\n");
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int apple = 0;
	if (!apple)
	{
		printf("apple�� �ϳ��� �����ϴ�.\n");
	}
	return 0;
}