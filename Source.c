#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

// Typedef
/*
// 이미 사용되는 자료형을 다른 새로운 자료형으로 재정의할 수 있도록 해주는 키워드입니다.
typedef int INT32; // int == INT32

// typedef로 구조체를 선언할 때 _이름 ex) _Player로 선언하고,
// 정의 ex) Player 이름으로 선언합니다.
typedef struct _Player 
{
	int x;
	int y;
	char name [20];
	const char * shape;
}Player;
*/

int main()
{
    // typedef
	/*
	int a = 10;
	INT32 b = 20;

	printf("a의 값 : %d\n", a);
	printf("b의 값 : %d\n", b);

	Player player;

	char nickName1[] = { "Jason" };

	strcpy(player.name, "Jason");
	printf("player의 이름 : %s", player.name);
	*/

    // 문제이름 : 합
	/*
	// 입력값 n이 주어졌을때, 1부터 n까지의 합을 구하는 프로그램을 작성해주세요.

	// 예제 입력
	// n = 3

	// 예제 출력
	// 9

	int n = 0; // 입력값 n 변수
	int result = 0; // 누적해서 값을 출력하는 변수

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) 
	{
		result += i;
	}

	printf("result의 값 : %d", result);
	*/

	// 별찍기
	// *
	// **
	// ***
	// ****
	// *****

	
	// 문제 : 역순으로 별찍기
	// 예제 출력
	//     *
	//    **
	//   ***
	//  ****
	// *****

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			printf("  ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("☆");
		}

		printf("\n");
	}

	// 예제 입력은 없습니다.

	// c언어 게임 개발론
	/*
	// 첫 번째 
	// 인터넷에 많은 자료를 검색해서 자기가 원하는 코드를 보고 그걸 응용해서 개발해야 합니다.
	
	// 두 번째
	// 어느정도 구상을 해주어야합니다.
	// 1.컨셉
	// 2.컨셉에 알맞는 기술들을 깊이있게 습득합니다.
	*/



	return 0;
}

