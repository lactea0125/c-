//#include<stdio.h>
//int main()
//{
//	int num = 100;
//	if (num != 100)
//	
//		printf("100이 아니네요.\n");
//		printf("아쉽네요\n");
//	
//	printf("프로그램 종료합니다\n");
//}
//#include<stdio.h>
//int main()
//{
//	int age = 21;
//	switch (age / 10)
//	{
//    case 0:printf("어린이\n");
//    case 1:printf("10대\n");
//    case 2:printf("20대\n");
//    case 3:printf("30대\n");
//    case 4:printf("40대\n");
//	default:printf("50대 이상\n");
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case'a':printf("adl"); break;
//	case 'A':printf("adl");
//	}
//
// }
//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	if (a < 200)
//
//	{
//		printf("a가 200보다");
//		printf("작습니다\n");
//	}
//	else {
//		printf("a가 200보다 큽니다.\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	
//	int a = 2;
//	switch (a)
//	{
//	case 1:printf("1이다");
//	case 2:printf("2다");
//	case 3:printf("3이다");
//		
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int num = 100;
//	if (num != 100)
//	{
//		printf("100아니네요.\n");
//		printf("아쉽네요\n");
//	}
//	else
//	
//		printf("100이네요\n");
//	
//	printf("프로그램을 종료합니다\n");
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case'i':printf("아이템창 오픈\n");
//	case'm':printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i' : printf("아이템창 오픈\n");
//		break;
//	case 'm' : printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case'i':printf("아이템창 오픈\n");
//		break;
//	case 'm':printf("지도창 오픈\n");
//		break;
//	default:printf("지정된기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1:printf("one\n"); break;
//	case 2:printf("two\n"); break;
//	case 3:printf("three\n"); break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	int s;
//	char op;
//	printf("두 숫자를 입력하고 임의의 기호를 입력하라 \n");
//	scanf("%d %d", &a, &s);
//	scanf(" %c", &op);
//	switch (op)
//	{
//	case '+':
//		printf("%d + %d = %d\n", a, s, a + s);
//		break;
//	case '-':
//		printf("%d - %d = %d\n", a, s, a - s);
//		break;
//	case '*':
//		printf("%d * %d = %d\n", a, s, a * s);
//		break;
//	case '/':
//		printf("%d / %d = %d\n", a, s, a / s);
//			break;
//	case '%':
//		printf("%d %% %d = %d\n", a, s, a % s);
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command ;
//	printf("<, a왼쪽 이동\n");
//	printf("> d 오른쪽이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다\n");
//		break;
//	case '>':case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//	const int option = 3;
//	
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1 :
//		printf("새 게임 시작.\n");
//		break;	
//	case 2 :
//		printf("세이브 테이터 로드.\n");
//		break;
//	case option :
//	    printf("옵션 세팅.\n");
//	    break;
//	default :
//		printf("지정된 기능이 없습니다\n");
//	}
//	return 0;
//}
// 
// 
//#include<stdio.h>
//int main()
//{
//	int month;
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1 :
//		printf("January");
//		break;
//	case 2:
//		printf("Febrary");
//		break;
//	case 3:
//		printf("March");
//		break;
//	case 4:
//		printf("April");
//		break;
//	case 5:
//		printf("May");
//		break;
//	case 6:
//		printf("June");
//		break;
//	case 7:
//		printf("July");
//		break;
//	case 8:
//	    printf("August");
//		break;
//	case 9:
//		printf("September");
//		break;
//	case 10:
//		printf("October");
//		break;
//	case 11:
//		printf("Nobember");
//		break;
//	case 12:
//		printf("December");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("0~9의 수를 입력하라");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:case 6:case 9:
//		printf("짝");
//		break;
//	
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'X';
//	switch (command)
//	{
//	case 'x': printf("알파벳 x입력.\n");
//			break;
//	case 'X': printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//
//
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d =  %d\n",
//			number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//
//		break;
//	}
//  }
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char h;
//    scanf("%c", &h);
//    switch(h)
//    {
//    case 'w':
//        printf("위 방향키를 입력하셨습니다.");
//        break;
//    case 'a':
//        printf("좌 방향키를 입력하셨습니다.");
//        break;
//    case 'd':
//        printf("우 방향키를 입력하셨습니다.");
//        break;
//    case 's':
//        printf("아래 방향키를 입력하셨습니다.");
//        break;
//
//    }
//}
#include<stdio.h>
int main()
{
	printf("appetizer 1.캐비어 2.샐러드 3.푸아그라\n");
	printf("mainDish 1.스테이크 2.생선요리 3.양갈비\n");
	printf("dessert 1.케잌 2.아이스크림 3.초콜릿무스\n");
	char a, m, d;
	scanf("%c %c %c",&a, &m, &d);
	printf("주문한 음식은 %c,%c,%c입니다\n",a,m,d);

}

//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}
































