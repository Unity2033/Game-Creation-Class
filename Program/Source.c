#include <stdio.h>
#include <stdlib.h>

int password = 10;

void Increase()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

int main()
{
#pragma region 변수의 유효 범위
	// 변수의 선언 위치에 따라 해당 변수의	메모리 반환 시기
	// 초기화 여부, 저장되는 장소를 의미하는 범위입니다.

#pragma region 지역 변수
	// 함수 내에서 선언된 변수로 함수 내에서만 사용할 수 있으며,
	// 함수가 종료되면 메모리에서 사라지는 특징을 가지는 변수입니다.

	//	int data = 10;
	//	
	//	{
	//		int data = 20;
	//		printf("{} 안에 있는 data 변수의 값 : %d\n", data);
	//	}
	//	
	//	printf("{} 바깥에 있는 data 변수의 값 : %d\n", data);
#pragma endregion

#pragma region 전역 변수
	// 함수 외부에 선언된 변수로 프로그램 내에서 어느 영역에서나
	// 접근할 수 있으며, 프로그램이 실행될 때 메모리에서 생성되고,
	// 프로그램이 종료될 때 메모리에서 사라지는 특징을 가지고 있습니다.

	// printf("전역 변수 password의 값 : %d\n", password);

#pragma endregion

#pragma region 정적 변수
	// 프로그램이 실행될 때 단 한번만 초기화가 이루어지며,
	// 프로그램이 실행될 때 메모리에 생성되고, 프로그램이
	// 종료될 때 메모리에서 해제되는 특징을 가지는 변수입니다.

	// Increase(); 
	// Increase();
	// Increase();
	// Increase();
	// Increase();

#pragma endregion

#pragma endregion

#pragma region 동적 할당
	// 프로그램이 실행 중에 필요한 만큼 메모리를 
	// 할당하는 작업입니다.

	int * ptr = (int *)malloc(sizeof(int));
	int * dynamicArray = (int*)malloc(sizeof(int) * 3);

	// 메모리를 동적 할당할 때 주소를 범용 포인터로
	// 반환하기 때문에 자료형을 변환한 다음 메모리에
	// 할당해야 합니다.

	if (ptr != NULL)
	{
		*ptr = 99;
		printf("동적 할당한 메모리의 값 : %d\n", *ptr);
	}

	dynamicArray[0] = 10;
	dynamicArray[1] = 20;
	dynamicArray[2] = 30;

	free(dynamicArray);

	dynamicArray = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < (sizeof(int) * 5) / sizeof(int); i++)
	{
		dynamicArray[i] = i;

		printf("dynamicArray[%d] = %d\n", i, dynamicArray[i]);
	}

	free(dynamicArray);

	// 동적으로 할당한 메모리는 힙 영역에 보관되어 있기 때문에
	// 사용이 끝나면 직접 해제해주어야 합니다.
	free(ptr);

	// 동적 할당은 실행 시간에 가변적으로 메모리의
	// 크기를 변경시킬 수 있으며, 동적으로 메모리의
	// 크기가 할당할 때 바이트 단위로 지정합니다.
#pragma endregion



	return 0;
}
