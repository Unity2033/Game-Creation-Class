#include <stdio.h>

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리
	// 연산이 이루어질 때 기존에 지정했던 자료형을
	// 다른 자료형으로 변환하는 과정입니다.

#pragma region 암묵적 형변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의
	// 크기가 큰 자료형으로 변환되는 과정입니다.

	// int integer = 10;
	// float decimal = 6.5f;
	// 
	// float result = decimal + integer;
	// 
	// // printf("result 변수의 값 : %f\n", result);
	// 
	// // 표현 범위가 작은 데이터에 표현 범위가 큰 데이터를
	// // 저장하게 되면 암묵적으로 데이터 손실이 발생합니다.
	// 
	// integer = decimal;
	// 
	// printf("integer  변수의 값 : %d\n", integer);
#pragma endregion

#pragma region 명시적 형변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을
	// 변환하는 과정입니다.

	// int health = 100;
	// int damage = 3;
	// 
	// float value = (float)health / damage;
	// 
	// printf("value변수의 값 : %f\n", value);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의
	// 결과 값만 가질 수 있습니다.
#pragma endregion

#pragma endregion

#pragma region 단축 평가 계산
	// 논리 연산자를 사용할 때, 논리식을 최소한의 평가로
	// 빠르게 결정하는 동작 방식입니다.

	//	int x = 0;
	//	int y = 0;
	//	
	//	if (x != 0 && ++x)
	//	{
	//		printf("AND 연산자\n");
	//	}
	//	
	//	if (y != 0 || ++y)
	//	{
	//		printf("OR 연산자\n");
	//	}
	//	
	//	printf("x 변수의 값 : %d\n", x);
	//	printf("y 변수의 값 : %d\n", y);
#pragma endregion

#pragma region 부호 없는 자료형
	// unsigned int data = 0;
	// 
	// data = 4294967295;
	// 
	// // [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	// printf("data 변수의 값 : %d\n", data);
	// 
	// data = -1;
	// // [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	// printf("data 변수의 값 : %u\n", data);
#pragma endregion

#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	// int a = 10;

	// printf("a의 주소값 : %p\n", &a);

	// 데이터의 주소 값은 해당 데이터가 저장된
	// 메모리의 시작 주소를 의미하며, 메모리 공간은
	// 1 byte의 크기로 나누어집니다.
#pragma endregion

#pragma region scanf함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다.

	// int positionX = 0;

	// printf("positionX의 값 입력 : ");

	// scanf_s("%d", &positionX);

	// // 표준 입력 함수는 입력을 수행할 때까지 다음
	// // 작업으로 넘어갈 수 없습니다.

	// printf("positionX의 값 : %d\n", positionX);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에
	// 데이터를 보관하였다가 입력하는 순간 버퍼 안의
	// 내용을 프로그램에 전송합니다.
#pragma endregion

}
