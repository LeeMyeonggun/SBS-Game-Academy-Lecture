#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

typedef struct Vector2
{
	int x;
	int y;

}Vector2;

enum State
{
	WALK,
	ATTACK,
	DIE,

	// 열거형에 중간에 있는 값을 바꾸게 되면 그 다음에 있는 값은
	// 중간에 바꾼 값에서부터 +1이 더해서 계산합니다.
};

enum Vayne
{
	Q = 1,
	W,
	E,
	R,
};

int main()
{
	
#pragma region typedef
	// 이미 정해져 있는 예약어를 사용자가 원하는
	// 이름으로 새롭게 생성하는 것입니다.

	// unsigned int x = 10;
	// UINT y = 20;
	// 
	// Vector2 vector2;
	// 
	// vector2.x = 10;
	// vector2.y = 20;
	// 
	// printf("x 변수의 값 : %u\n", x);
	// printf("y 변수의 값 : %u\n", y);


#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.
	
	// int* ptr = (int *)malloc(sizeof(int));
	// 
	// *ptr = 10;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// free(ptr);
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// ptr = NULL;
	// 
	// if (ptr == NULL)
	// {
	// 	ptr = (int *)malloc(sizeof(int));
	// }

#pragma endregion

#pragma region 열거형
	// 이름이 지정된 상수 집합을 나타내는 값 형식입니다.

	// enum State state = WALK;
	// 
	// 
	// switch (state)
	// {
	// case WALK: printf("Walk\n");
	// 	break;
	// case ATTACK: printf("Attack\n");
	// 	break;
	// case DIE: printf("Die\n");
	// 	break;
	// default:
	// 	break;
	// }
#pragma endregion


	
#pragma region 베인

	enum Vayne vayne;
	int mana = 100;
	int flag = 0;

	while (flag == 0)
	{
		printf("스킬을 사용하세요.");
		scanf_s("%d", &vayne);

		switch (vayne)
		{
		case 1:
			if (mana < 10)
			{
				flag = 1;
				break;
			}
			else
			{
				mana -= 10;
				printf("구르기 / 남은 마나 : %d\n", mana);
			}
			break;
		case 2:
			if (mana < 10)
			{
				flag = 1;
				break;
			}
			else
			{
				mana -= 10;
				printf("은화살 / 남은 마나 : %d\n", mana);
			}
			break;
		case 3:
			if (mana < 20)
			{
				flag = 1;
				break;
			}
			else
			{
				mana -= 20;
				printf("선고 / 남은 마나: %d\n", mana);
			}
			break;
		case 4:
			if (mana < 20)
			{
				flag = 1;
				break;
			}
			else
			{
				mana -= 30;
				printf("결전의 시간 / 남은 마나 : %d\n", mana);
			}
			break;
		default:
			printf("잘못된 커맨드를 입력하였습니다.\n");
			break;

		}

	}

	printf("마나가 부족합니다.");
#pragma endregion

	

	return 0;
}