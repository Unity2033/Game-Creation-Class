#include <stdio.h>

void main()
{ 
	// 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문입니다.

	// 증감 연산자란?
	/*
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자입니다.

	// 전위 (증가, 감소)
	// 변수의 값을 증감시킨 후에 연산을 수행합니다.

	int value = 0;

	int result = ++value;

	printf("value 변수의 전위 증가한 값 : %d\n", result);

	// 후위 (증가, 감소)
	// 연산을 수행한 후에 변수의 값을 증가시킵니다.

	result = value++;

	printf("value 변수의 후위 증가한 값 : %d\n", result);

	printf("value의 결과 : %d", value);
	*/

	// for 문
	/*
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문입니다.

	// 1. 초기식 (i = 0)
	// 2. 조건식 (i가 5보다 작을 때)
	// 3. 실행하고 싶은 명령문 (printf("안녕하세요?"))
	// 4. 증감식 (i++)
	
	for (int i = 0; i < 10; i++)
	{
		printf("안녕하세요?\n");
	}
	
    // for문을 이용해서 순차적으로 증감하는 초기식의 값을 출력해주세요.
	for (int i = 5; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	*/

	// 약수
	// 어떤 수를 나누어떨어지게는 수입니다.
	/*
	int value = 6;

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			printf("%d  ", i);
		}
	}
	*/

	// 2중 for문
	/*
	for (int i = 0; i < 3; i++)
	{
		printf("주황색\n");

		for (int j = 0; j < 3; j++)
		{
			printf("검은색\n");
		}
	}
	*/

}


