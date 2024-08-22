#include <stdio.h>

void main()
{
#pragma region 상수 지시 포인터
	// 상수로 선언한 포인터는 해당 변수의 값을
	// 변경할 수 없지만, 다른 변수의 주소는
	// 가리킬 수 있습니다.

	// int a = 10;
	// int b = 20;
	// 
	// const int * ptr = NULL;
	// 
	// ptr = &a;
	// 
	// // *ptr = 99;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// ptr = &b;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);

#pragma endregion

#pragma region 포인터 상수
	// 포인터를 상수로 선언하여, 포인터 변수가 
	// 가라키고 있는 주소에 존재하는 값을 변경할
	// 수 없도록 설정할 수 있습니다.

	// int x = 10;
	// int y = 20;
	// 
	// int * const cptr = &x;
	// 
	// *cptr = 99;
	// 
	// printf("x변수의 값 : %d\n", x);

	// cptr = &y;

#pragma endregion

#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	// int array[10];
	// 
	// int size = sizeof(array) / sizeof(int);
	// 
	// // 배열의 경우 첫 번째 원소는 0부터 시작합니다.
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	array[i] = (i + 1) * 10;
	// 
	// 	printf("array[%d] = %d\n", i, array[i]);
	// }

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	// 공간을 가지게 됩니다.

	//	int list [ ] = { 1, 2, 3, 4, 5 ,6, 7};
	//	
	//	for (int i = 0; i < sizeof(list) / sizeof(int); i++)
	//	{
	//		printf("array[%d] = %d\n", i, list[i]);
	//	}

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	//             [1][2][3]
	// int table [] = { 1,2,3 };
	// 
	// printf("table의 주소는 : %p\n", table);
	// printf("table[0]의 주소는 : %p\n", &table[0]);
	// 
	// int * p = NULL;
	// 
	// p = table;
	// 
	// p = p + 1;	// [] [] 
	// 
	// *p = 135;
	// 
	// printf("table[1]의 값은 : %d\n", *table);

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다.
#pragma endregion
}
