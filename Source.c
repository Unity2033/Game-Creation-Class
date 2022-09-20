#include <stdio.h>
#include <string.h> // 문자열 관련 함수

// 자기 참조 구조체
/*
struct Node
{
	int data;
	struct Node * pointer; // <- 구조체를 가리킬 수 있는 포인터 변수
};
*/

int main()
{
	// 자기 참조 구조체란?
	/*
	// 자신과 동일한 구조체를 가리킬 수 있는 포인터 변수를
	// 멤버 변수로 가지는 구조체입니다.

	struct Node node1 = { 10, NULL};
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	struct Node * structPtr = &node1;

	printf("첫 번째 구조체 data의 값 : %d\n", structPtr->data);

	structPtr->pointer = &node2;

	printf("두 번째 구조체 data의 값 : %d\n", structPtr->pointer->data);

	structPtr->pointer->pointer = &node3;

	printf("세 번째 구조체 data의 값 : %d\n", structPtr->pointer->pointer->data);
	*/

	// 문자열 함수	
	// strlen - (문자열의 길이를 출력하는 함수)
	char name [ ] = { "Bard" }; 
	printf("name의 값 : %s\n", name);

	// strlen( )함수는 문자열의 길이를 구할 때 NULL문자 이전의 문자열 길이만 계산합니다.
	printf("name배열의 길이 : %d\n", strlen(name));

	// strcpy - (문자열을 복사하는 함수)
	char A [10] = { "LEAGUE" };	 
	char B [10] = { "LEGEND" };

	// read only 영역에 있는 문자열 리터럴이기 때문에 값을 변경할 수 없습니다.
	const char * C = "Player";
	const char * D = "Monster";

    /*
	// A 와 B는 문자열의 시작주소를 의미합니다.
	// 00FF44D0(A) <- 00DD22A0(B)

	int i = 0;
	while (A[i]) // NULL문자는 0을 의미하기 때문에
	{
		A[i] = B[i];
		i++;
	} // while문의 값이 false로 변경됩니다.

	printf("A의 문자열은 : %s", A);
	*/

	// strcpy( )함수의 첫 번째 매개변수는 복사받을 문자열입니다.
	// strcpy( )함수의 두 번째 매개변수는 복사할 문자열입니다.
		
	// strcpy_s()함수의 첫 번째 매개변수는 복사받을 문자열입니다.
	// strcpy_s()함수의 두 번째 매개변수는 복사할 메모리 크기입니다.
	// strcpy_s( )함수의 세 번째 매개변수는 복사할 문자열입니다.
	strcpy_s(A, 10, B);
	printf("복사한 A 문자열의 값 : %s", A);

	// strcmp - (문자열을 비교하는 함수)
	// strcat - (문자열을 연결하는 함수)
	
	return 0;
}

