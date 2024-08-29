#include <stdio.h>
#include <stdlib.h>

struct GameObject
{
	char grade;	   // 1 byte
	               // 3 byte
	int x;	       // 4 byte
	double scale;  // 8 byte

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의
	// 크기가 다르게 설정될 수 있으며, 구조체 크기를 결정하는
	// 형태는 기본 자료형으로만 구성됩니다.
};

struct Node
{
	int data;
	struct Node * next;
};

inline void OnCollisionEnter()
{
	printf("Collision\n");
}

int main()
{
#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// struct GameObject gameObject;

	// printf("GameObject의 크기 : %d\n", sizeof(gameObject));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// 가장 큰 자료형의 배수가 되도록 정렬합니다.

#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	// OnCollisionEnter();

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 
	// 속도가 빠르지만, 인라인 함수를 많이 사용하게 되면
	// 함수의 코드가 복사되기 때문에 실행 파일의 크기가 커지게 됩니다.
#pragma endregion

#pragma region 구조체 포인터

	// struct Node * node = malloc(sizeof(struct Node));
	// 
	// node->data = 100;
	// 
	// printf("node1의 data 값 : %d\n", node->data);
	// 
	// free(node);

#pragma endregion

#pragma region 자기 참조 구조체

	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;




#pragma endregion



	return 0;
}
