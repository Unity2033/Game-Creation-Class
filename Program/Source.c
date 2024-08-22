#include <stdio.h>

void main()
{
#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	// const char * string = "Alistar";
	// char content[10] = { 0, };
	// 
	// // string[0] = 'B';
	// content[0] = 'P';
	// 
	// // content = "League";
	// 
	// printf("string의 값 : %s\n", string);
	// printf("content의 값 : %s\n", content);
	// 
	// string = "Janna";
	// // 문자열은 공백도 함께 메모리 공간에 포함하여 
	// // 크기가 결정되며, 마지막에 문자열의 끝을 알려
	// // 주는 제어 문자가 추가됩니다.
	// 
	// printf("string의 값 : %s\n", string);
	// 
	// string = "Tower\0Defense";
	// // 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어
	// // 있지만, 문자 배열 사이에 무효의 문자를 넣게 되면 무효
	// // 의 문자까지만 문자열을 출력합니다.
	// 
	// printf("string의 값 : %s\n", string);

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
	// 할 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용 공간에
	// 저장되기 때문에 문자열의 값을 변경할 수 없습니다.
#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	// char grade = 'A';
	// 
	// int health = 100;
	// 
	// float attack = 32.5f;
	// 
	// // 범용 포인터는 메모리 주소에 접근해서 값을
	// // 변경할 수 없습니다.
	// 
	// void * vptr = NULL;
	// 
	// vptr = &grade;
	// 
	// *(char *)vptr = 'B';
	// 
	// printf("grade 변수의 값 : %c\n", grade);
	// 
	// vptr = &health;
	// 
	// *(int*)vptr = 999;
	// 
	// printf("health 변수의 값 : %d\n", health);
	// 
	// vptr = &attack;
	// 
	// *(float*)vptr = 365.0f;
	// 
	// printf("attack 변수의 값 : %f\n", attack);
	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가
	// 가리키는 변수의 자료형으로 형 변환해주어야 합니다.

#pragma endregion

#pragma region 펠린드롬

	char word[] = { "level" };

	int flag = 1;

	int size = sizeof(word) - 1;

	for (int i = 0; i < size / 2; i++)
	{
		if (word[i] != word[size - 1 - i])
		{
			flag = 0;
			break;
		}
	}

	if (flag == 1)
	{
		printf("회문입니다.\n");
	}
	else
	{
		printf("회문이 아닙니다.\n");
	}

#pragma endregion

}
