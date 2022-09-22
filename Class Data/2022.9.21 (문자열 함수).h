#pragma once
#include <stdio.h>
#include <string.h>

void MYstrcat(char* str1, const char* str2)
{
	// str1�� NULL���ڰ� �ƴ϶��
	while (*str1 != '\0')
	{
		// str1�� ����Ű�� �����͸� ������ŵ�ϴ�.
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
	// strcmp ���ڿ� �� �Լ�
	/*
	char memory1[] = { "ABCD" };
	char memory2[] = { "ABCT" };
	char memory3[] = { "ABCC" };

	// strcmp�� ù��° ���ڿ��� ũ�Ⱑ ũ�ٸ� ���(+1)�� ��ȯ�մϴ�.
	// �׷��� �ι�° ���ڿ��� ũ�Ⱑ ũ�ٸ� ����(-1)�� ��ȯ�մϴ�.
	// ���࿡ �� ���� ���ڿ��� ũ�Ⱑ ���ٸ� 0�� ��ȯ�մϴ�.
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory2));
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory3));

	// strcmp ���� ���� ������ �켱 ������ �����˴ϴ�.

	// strncmp : ù��° �Ű������� ���� ���ڿ�
	// strncmp : �ι�° �Ű������� ���� ���ڿ�
	// strncmp : ����° ���� ���ڿ��� ����

	// ABC == ABC = 0
	// �ѱ۰� ��ǻ��
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strncmp(memory1, memory2, 3));
	*/

	// strcat ���ڿ� ���� �Լ�
	char name1[10] = { "Kim" };
	char name2[] = { "Geum" };

	// strcat���� ��쿡�� ������� ���ڿ��� ũ�⸦ �˳��� �������־�� �մϴ�.
	// name1 [K][i][m][G][e][u][m][\0][ ][ ] <-
	// name2 [G][e][u][m][\0]
	// strcat_s(name1, 10, name2);
	// printf("name1�� ���ڿ� : %s", name1);

	MYstrcat(name1, name2);

	printf("%s", name1);

	return 0;
}

