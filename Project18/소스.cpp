//#include<stdio.h>
//int main()
//{
//	int num = 100;
//	if (num != 100)
//	
//		printf("100�� �ƴϳ׿�.\n");
//		printf("�ƽ��׿�\n");
//	
//	printf("���α׷� �����մϴ�\n");
//}
//#include<stdio.h>
//int main()
//{
//	int age = 21;
//	switch (age / 10)
//	{
//    case 0:printf("���\n");
//    case 1:printf("10��\n");
//    case 2:printf("20��\n");
//    case 3:printf("30��\n");
//    case 4:printf("40��\n");
//	default:printf("50�� �̻�\n");
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
//		printf("a�� 200����");
//		printf("�۽��ϴ�\n");
//	}
//	else {
//		printf("a�� 200���� Ů�ϴ�.\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	
//	int a = 2;
//	switch (a)
//	{
//	case 1:printf("1�̴�");
//	case 2:printf("2��");
//	case 3:printf("3�̴�");
//		
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int num = 100;
//	if (num != 100)
//	{
//		printf("100�ƴϳ׿�.\n");
//		printf("�ƽ��׿�\n");
//	}
//	else
//	
//		printf("100�̳׿�\n");
//	
//	printf("���α׷��� �����մϴ�\n");
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case'i':
//		printf("������â ����\n");
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
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case'i':printf("������â ����\n");
//	case'm':printf("����â ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i' : printf("������â ����\n");
//		break;
//	case 'm' : printf("����â ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case'i':printf("������â ����\n");
//		break;
//	case 'm':printf("����â ����\n");
//		break;
//	default:printf("�����ȱ���� �����ϴ�.\n");
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
//	printf("�� ���ڸ� �Է��ϰ� ������ ��ȣ�� �Է��϶� \n");
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
//	printf("<, a���� �̵�\n");
//	printf("> d �������̵�\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("�������� �̵��մϴ�\n");
//		break;
//	case '>':case 'd':
//		printf("���������� �̵��մϴ�.\n");
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
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1 :
//		printf("�� ���� ����.\n");
//		break;	
//	case 2 :
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case option :
//	    printf("�ɼ� ����.\n");
//	    break;
//	default :
//		printf("������ ����� �����ϴ�\n");
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
//	printf("0~9�� ���� �Է��϶�");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:case 6:case 9:
//		printf("¦");
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
//	case 'x': printf("���ĺ� x�Է�.\n");
//			break;
//	case 'X': printf("����ǥ �Է�.\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//
//
//	{
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d =  %d\n",
//			number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//
//		int number3, number4;
//		printf("���� �� ���� �Է��ϼ��� \n");
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
//        printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//        break;
//    case 'a':
//        printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//        break;
//    case 'd':
//        printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//        break;
//    case 's':
//        printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.");
//        break;
//
//    }
//}
#include<stdio.h>
int main()
{
	printf("appetizer 1.ĳ��� 2.������ 3.Ǫ�Ʊ׶�\n");
	printf("mainDish 1.������ũ 2.�����丮 3.�簥��\n");
	printf("dessert 1.�ɟ� 2.���̽�ũ�� 3.���ݸ�����\n");
	char a, m, d;
	scanf("%c %c %c",&a, &m, &d);
	printf("�ֹ��� ������ %c,%c,%c�Դϴ�\n",a,m,d);

}

//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("������ ���� ��� �ݺ� ���\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("���� count : %d", count);
//		printf("count�� 3���� ���� ���� �ݺ�\n");
//		count++;
//	}
//	return 0;
//}
































