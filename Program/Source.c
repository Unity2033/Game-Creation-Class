#include <stdio.h>

void main()
{
#pragma region 변수의 이름 규칙

	// 1. 변수의 경우 이미 중복된 변수의 이름을
	//    허용하진 않지만, 변수의 이름을 대소문자로
	//    구별하여 사용할 수 있습니다.

	// ex) int data = 10;
	// ex) int DATA = 20;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.
	// ex) int int = 10;

	// 3. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int 1x = 10;

	// 4. 변수의 이름으로 공백이 포함될 수 없습니다.
	// ex) int count down = 10;

	// 5. 변수의 이름으로 특수 기호는 "_"와"$"만 허용합니다.
	// ex) int m_attack = 10;
	// ex) int m$health = 20;
	// ex) int m!defense = 30;

#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

#pragma endregion

#pragma region (2)진수를 (10)진수로 변화하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	// 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion

	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는
	// 연산자입니다.

#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.

	// char a = 10; // 0000 1010
	// char b = 13; // 0000 1101
	//              // 0000 1000
	// 
	// printf("a와 b변수를 AND 연산한 결과 : %d\n", a & b);
#pragma endregion

#pragma region OR 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다면
	// 1을 반환하는 연산자입니다.
	
	// int c = 9;   // 0000 1001
	// int d = 11;	 // 0000 1011
	// 	         // 0000 1011
	// 
	// printf("c와 d변수를 OR 연산한 결과 : %d\n", c | d);
#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고,
	// 서로 다르면 1을 반환하는 연산자입니다.

	// int e = 7; // 0000 0111;
	// int f = 5; // 0000 0101;
	//            // 0000 0010 
	// 
	// printf("e와 f변수를 XOR 연산한 결과 : %d\n", e ^ f);
#pragma endregion

#pragma region NOT 연산자
	// 하나의 피연산자를 반전시키는 연산자입니다.

	// int g = 20; // 0001 0100
	//             // 1110 1011 ~
	// 
	// //  [1] [1] [1] [0] [1] [0] [1] [1]
	// // -128  64 32     	8		 2	 1
	// printf("g변수를 NOT 연산한 결과 : %d\n", ~g);
#pragma endregion

#pragma endregion

}
