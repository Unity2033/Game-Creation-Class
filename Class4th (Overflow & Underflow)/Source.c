#include <stdio.h>

void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위
	// 를 넘어서 연산을 수행하는 과정입니다.

	// char data = 130;

	// printf("data 변수의 값 : %d\n", data);

	// 오버플로우는 부호 없는 자료형에서도 똑같이
	// 발생하며, 실수일 때 오버플로우가 발생하면
	// infinity라는 값으로 출력합니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위
	// 를 넘어서 연산을 수행하는 과정입니다.

	// char alphabet = -129;

	// printf("alphabet 변수의 값 : %d\n", alphabet);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력합니다.

#pragma endregion

#pragma region 시프트 연산자
	// 비트의 위치를 좌우로 특정한 값만큼 이동하는
	// 연산자입니다.

	// << (왼쪽으로 이동)
	// >> (오른쪽으로 이동)
	// int x = 3; // 0000 0011
	// 
	// printf("x 변수를 왼쪽으로 2번 시프트 연산한 결과 : %d\n", x << 2); 
	// // 0000 1100 
	// 
	// printf("x 변수를 오른쪽으로 1번 시프트 연산한 결과 : %d\n", x >> 1); // 0000 0001
#pragma endregion

#pragma region 실수를 저장하는 방법
	// float decimal = 12.1f;
	// 
	// // 표준 출력 함수로 실수를 출력할 대 4 byte 크기의
	// // 실수형 자료형은 소수점 이하 6자리까지만 표기하며,
	// // 8 byte 크기의 실수형 자료형은 소수점 이하 
	// // 15자리까지만 표기합니다.
	// printf("decimal 변수의 값 : %f\n", decimal);
#pragma endregion

}
