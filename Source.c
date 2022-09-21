#include <stdio.h>
#include <string.h>

void MYstrcat(char * str1, const char * str2)
{
	// str1이 NULL문자가 아니라면
	while (*str1 != '\0')
	{
		// str1이 가리키는 포인터를 증가시킵니다.
		str1++;
	}

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}	
}

int main()
{
	// strcmp 문자열 비교 함수
    /*
	char memory1[] = { "ABCD" }; 
	char memory2[] = { "ABCT" };
	char memory3[] = { "ABCC" };	

	// strcmp는 첫번째 문자열의 크기가 크다면 양수(+1)을 반환합니다.
	// 그런데 두번째 문자열의 크기가 크다면 음수(-1)을 반환합니다.
	// 만약에 두 개다 문자열의 크기가 같다면 0을 반환합니다.
	printf("두 개의 문자열을 비교한 값 : %d\n", strcmp(memory1, memory2));
	printf("두 개의 문자열을 비교한 값 : %d\n", strcmp(memory1, memory3));

	// strcmp 영어 사전 순서로 우선 순위가 결정됩니다.

	// strncmp : 첫번째 매개변수에 비교할 문자열
	// strncmp : 두번째 매개변수에 비교할 문자열
	// strncmp : 세번째 비교할 문자열의 길이

	// ABC == ABC = 0
	// 한글과 컴퓨터 
	printf("두 개의 문자열을 비교한 값 : %d\n", strncmp(memory1, memory2, 3));
	*/

	// strcat 문자열 연결 함수
	char name1[10] = { "Kim" };
	char name2[] = { "Geum" };

	// strcat같은 경우에는 복사받을 문자열의 크기를 넉넉히 지정해주어야 합니다.
	// name1 [K][i][m][G][e][u][m][\0][ ][ ] <-
	// name2 [G][e][u][m][\0]
	// strcat_s(name1, 10, name2);
	// printf("name1의 문자열 : %s", name1);

	MYstrcat(name1, name2);

	printf("%s", name1);

	return 0;
}

