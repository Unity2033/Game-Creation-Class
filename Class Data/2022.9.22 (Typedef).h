#pragma once
#define _CRT_SECURE_NO_WARNINGS // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>

// Typedef
/*
// �̹� ���Ǵ� �ڷ����� �ٸ� ���ο� �ڷ������� �������� �� �ֵ��� ���ִ� Ű�����Դϴ�.
typedef int INT32; // int == INT32

// typedef�� ����ü�� ������ �� _�̸� ex) _Player�� �����ϰ�,
// ���� ex) Player �̸����� �����մϴ�.
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

	printf("a�� �� : %d\n", a);
	printf("b�� �� : %d\n", b);

	Player player;

	char nickName1[] = { "Jason" };

	strcpy(player.name, "Jason");
	printf("player�� �̸� : %s", player.name);
	*/

	// �����̸� : ��
	/*
	// �Է°� n�� �־�������, 1���� n������ ���� ���ϴ� ���α׷��� �ۼ����ּ���.

	// ���� �Է�
	// n = 3

	// ���� ���
	// 9

	int n = 0; // �Է°� n ����
	int result = 0; // �����ؼ� ���� ����ϴ� ����

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	printf("result�� �� : %d", result);
	*/

	// �����
	// *
	// **
	// ***
	// ****
	// *****


	// ���� : �������� �����
	// ���� ���
	//     *
	//    **
	//   ***
	//  ****
	// *****

	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 1; j <= 5 - i; j++)
	//	{
	//		printf("  ");
	//	}

	//	for (int k = 1; k <= i; k++)
	//	{
	//		printf("��");
	//	}

	//	printf("\n");
	//}

	// ���� �Է��� �����ϴ�.

	// c��� ���� ���߷�
	/*
	// ù ��°
	// ���ͳݿ� ���� �ڷḦ �˻��ؼ� �ڱⰡ ���ϴ� �ڵ带 ���� �װ� �����ؼ� �����ؾ� �մϴ�.

	// �� ��°
	// ������� ������ ���־���մϴ�.
	// 1.����
	// 2.������ �˸´� ������� �����ְ� �����մϴ�.
	*/



	return 0;
}

