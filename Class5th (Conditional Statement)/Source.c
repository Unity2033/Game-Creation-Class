#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라
	// 동작을 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0
	// 또는 1이라는 값으로 나타내는 연산자입니다.

	// int condition1 = 10 > 0;
	// int condition2 = 10 < 0;
	// int condition3 = 10 >= 0;
	// int condition4 = 10 <= 0;
	// int condition5 = 10 == 10;
	// int condition6 = 10 != 10;
	// 
	// printf("condition1 변수의 값 : %d\n", condition1);
	// printf("condition2 변수의 값 : %d\n", condition2);
	// printf("condition3 변수의 값 : %d\n", condition3);
	// printf("condition4 변수의 값 : %d\n", condition4);
	// printf("condition5 변수의 값 : %d\n", condition5);
	// printf("condition6 변수의 값 : %d\n", condition6);

	// 관계 연산자는 조건이 맞을 때 1이라는 값을 반환하며,
	// 조건이 틀릴 땐 0이라는 값으로 반환합니다.
#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면
	// 실행되는 명령문입니다.

	//	int health = 0;
	//	
	//	if (health <= 0)
	//	{
	//		printf("Destroy");
	//	}

#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 
	// 조건이 맞다면 실행되는 명령문입니다.

	//	int level = 99;
	//	
	//	if (level == 71)
	//	{
	//		printf("1차 전직\n");
	//	}
	//	else if (level == 99)
	//	{
	//		printf("2차 전직\n");
	//	}

#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.

	//	int money = 0;
	//	
	//	if (money < 100)
	//	{
	//		printf("100원\n");
	//	}
	//	else if (money < 1000)
	//	{
	//		printf("1000원\n");
	//	}
	//	else
	//	{
	//		printf("예외 처리\n");
	//	}

	// if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됩니다.

#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	// char grade = 'F';

#pragma region break문
	// 특정한 지점에서 분기를 탈출하는 제어문입니다.

	// break 문을 만나는 순간 현재 진행하고 있는 
	// 위치에서 종료합니다.
#pragma endregion

	//	switch (grade)
	//	{
	//	case 'A': printf("A 등급\n");
	//		break;
	//	case 'B': printf("B 등급\n");
	//		break;
	//	case 'C': printf("C 등급\n");
	//		break;
	//	case 'D': printf("D 등급\n");
	//		break;
	//	default: printf("예외 처리\n");
	//		break;
	//	}

	// switch 문의 경우 조건에 해당하는 값에 따라
	// 조건의 위치로 이동합니다.

#pragma endregion

#pragma region 논리 연산자

	//	int price = 1000;
	//	int speed = 10;
	//	
	//	if (price >= 0 && speed >= 0)
	//	{
	//		printf("AND\n");
	//	}
	//	
	//	if (price >= 0 || speed <= 0)
	//	{
	//		printf("OR\n");
	//	}
	//	
	//	if (!(price >= 0))
	//	{
	//		printf("NOT\n");
	//	}

#pragma endregion

#pragma region 사분면

	//	int x = 1;
	//	int y = -1;
	//	
	//	if (x > 0 && y > 0)
	//	{
	//		printf("제 1 사분면\n");
	//	}
	//	else if (x < 0 && y > 0)
	//	{
	//		printf("제 2 사분면\n");
	//	}
	//	else if (x < 0 && y < 0)
	//	{
	//		printf("제 3 사분면\n");
	//	}
	//	else if (x > 0 && y < 0)
	//	{
	//		printf("제 4 사분면\n");
	//	}
	//	else if (x != 0 && y == 0)
	//	{
	//		printf("x 절편\n");
	//	}
	//	else if (x == 0 && y != 0)
	//	{
	//		printf("y 절편\n");
	//	}
	//	else
	//	{
	//		printf("원점\n");
	//	}
	//	
#pragma endregion


#pragma endregion

}
