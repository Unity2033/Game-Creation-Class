#include <stdio.h>

void Function()
{
	printf("Execute");
}

void Coordinate(int x, int y)
{
	printf("매개 변수 x의 값 : %d\n", x);
	printf("매개 변수 y의 값 : %d\n", y);
}

int Damage(int damage)
{
	damage = damage * 5;

	return damage;
}

void Swap(int* a, int* b)
{
	int temporary = *b;
	*b = *a;
	*a = temporary;
}

void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해 
	// 독립적으로 설계된 코드의 집합입니다.

	// Function();

	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없으며,
	// 같은 이름의 함수를 중복으로 선언할 수 없습니다.

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	// Coordinate(5, 10);

	// printf("Damage 함수가 반환하는 값 : %d\n", Damage(5));

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 사라지며, 여러 개의
	// 매개 변수를 생성할 수 있습니다.
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.

	// int a = 10;
	// int b = 20;
	// 
	// Swap(&a, &b);
	// 
	// printf("a의 값 : %d\n", a);
	// printf("b의 값 : %d\n", b);

	// 인수의 경우 함수에 있는 매개 변수의 수에 따라 전달할 수
	// 있는 인수가 수가 결정되며, 값을 전달하는 인수와 값을  
	// 전달받는 매개 변수의 자료형이 서로 일치해야 합니다.
#pragma endregion

#pragma endregion
}
