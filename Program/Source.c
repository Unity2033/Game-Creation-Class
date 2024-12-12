#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void Shuffle(int array [], int size)
{
	for (int i = 0; i < size; i++)
	{
		int range = rand() % size;

		int temporary = array[range];
		array[range] = array[i];
		array[i] = temporary;
	}
}

void View(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("��");
	}

	printf("\n");
}

int main()
{
#pragma region rand() �Լ�

	// seed ���� ���� rand�� ���� �ٲ�� �˴ϴ�.
	// srand(time(NULL));
	// 
	// int random = rand() % 10 + 1;
	// 
	// printf("random ������ �� : %d\n", random);

#pragma endregion

#pragma region ���� �Լ�

	//	srand(time(NULL));
	//	
	//	int list[SIZE] = { 1,2,3,4,5 };
	//	
	//	Shuffle(list, SIZE);
	//	
	//	for (int i = 0; i < SIZE; i++)
	//	{
	//		printf("%d ", list[i]);
	//	}

#pragma endregion

#pragma region localtime() �Լ�

	//	time_t currentTime = 0;
	//	
	//	time(&currentTime);
	//	
	//	struct tm * timePointer = localtime(&currentTime);
	//	
	//	printf("%d ��\n", timePointer->tm_sec);
	//	printf("%d ��\n", timePointer->tm_min);
	//	printf("%d ��\n", timePointer->tm_hour);
	//	printf("%d ��\n", timePointer->tm_hour);
	//	
	//	printf("%d ��\n", timePointer->tm_mday);
	//	printf("%d ��\n", timePointer->tm_mon + 1);
	//	printf("%d ��\n", timePointer->tm_year + 1900);
	//	
	//	switch (timePointer->tm_wday)
	//	{
	//	case 0 : printf("�Ͽ���");
	//		break;
	//	case 1 : printf("������");
	//		break;
	//	case 2: printf("ȭ����");
	//		break;
	//	case 3: printf("������");
	//		break;
	//	case 4: printf("�����");
	//		break;
	//	case 5: printf("�ݿ���");
	//		break;
	//	case 6: printf("�����");
	//		break;
	//	}

#pragma endregion

#pragma region UP - DOWN Game

	srand(time(NULL));

	int health = 5;
	int answer = 0;
	int computer = rand() % 50 + 1;

	printf(" > Game Start < \n\n");

	while (health > 0)
	{
		printf("ü�� : ");
		View(health);

		printf("computer�� ������ �ִ� �� : ");
		scanf_s("%d", &answer);

		if (answer == computer)
		{
			printf("\nV I C T O R Y\n");
			break;
		}
		else if (answer < computer)
		{
			printf("\ncomputer�� ������ �ִ� ������ �۽��ϴ�.\n");
			health--;
		}
		else if (answer > computer)
		{
			printf("\ncomputer�� ������ �ִ� ������ Ů�ϴ�.\n");
			health--;
		}

		printf("\n");
	}

	if (health <= 0)
	{
		printf("\nD E F E A T\n");
	}

#pragma endregion



	
	return 0;
}											    