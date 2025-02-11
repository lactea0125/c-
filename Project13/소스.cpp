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
//	printf("첫 번째 계산할 값을 입력하세요 ==>");
//	scanf("%d", &a);
//
//	printf("두 번째 계산할 값을 입력하세요 ==>");
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
//	printf("첫 번째 계산할 값을 입력하세요 ==>");
//	scanf("%d", &a);
//
//	printf("두 번째 계산할 값을 입력하세요 ==>");
//	scanf("%d", &b);
//
//	printf("세 번째 계산할 값을 입력하세요 ==>");
//	scanf("%d", &c);
//
//	printf("네 번째 계산할 값을 입력하세요 ==>");
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
//	printf("첫숫자 : %d\n", radInt);
//	printf("다음숫자 : %d", nextInt);
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
//	printf("첫숫자 : %d\n", randInt);//0~9
//	printf("다음숫자 : %d", nextInt);//50-59
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내주머니에 있는 돈은");
//	int mymoney = (rand() % 10 + 1) * 1000;
//	printf(" %d원이다.\n", mymoney);
//	int coin500 =rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf(" %d 원이다.", coin500 + coin100);
//	printf("\n나는 과자을 살수있을까?");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개 있습니다.\n");
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
//		printf("apple은 17개가 아닙니다\n");
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
//		printf("apple은 20개보다 적습니다.\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 작습니다.\n");
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int apple = 0;
	if (!apple)
	{
		printf("apple은 하나도 없습니다.\n");
	}
	return 0;
}