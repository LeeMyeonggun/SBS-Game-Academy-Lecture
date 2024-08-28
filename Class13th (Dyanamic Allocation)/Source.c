#include <stdio.h>
#include <math.h>

struct Unit
{
	char grade;
	int health;
	float attack;
	double experience;
};

struct coordinate
{
	int x;
	int y;
};

int main()
{
	
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화 한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Unit unit;
	// 
	// unit.grade = 'B';
	// unit.health = 100;
	// unit.attack = 32.5f;
	// unit.experience = 1075.75;
	// 
	// printf("unit의 등급   : %c\n", unit.grade);
	// printf("unit의 체력   : %d\n", unit.health);
	// printf("unit의 공격력 : %f\n", unit.attack);
	// printf("unit의 경험치 : %f\n", unit.experience);

	// 구조체에 있는 데이터를 초기화할 때 왼쪽에 있는 데이터부터
	// 구조체에 있는 멤버 변수의 순서로 초기화를 진행합니다.
	
	// struct Unit marine = { 'A', 60, 6.5f, 36.5 };
	// 
	// printf("marine의 등급   : %c\n", marine.grade);
	// printf("marine의 체력   : %d\n", marine.health);
	// printf("marine의 공격력 : %f\n", marine.attack);
	// printf("marine의 경험치 : %f\n", marine.experience);



	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화 할 수 없습니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	struct coordinate player = {0, 0};
	struct coordinate enemy = {5, 5};
	double distance = sqrt(pow(player.x - enemy.x, 2) + pow(player.y - enemy.y, 2));
	
	if ( distance >= 5.0 )
	{
		printf("player좌표 (%d, %d)\n", player.x, player.y);
		printf("enemy좌표 (%d, %d)\n", enemy.x, enemy.y);
		printf("공격범위에 들어오지 않았습니다. (거리 : %lf)", distance);
	}
	else
	{
		printf("player좌표 (%d, %d)\n", player.x, player.y);
		printf("enemy좌표 (%d, %d)\n", enemy.x, enemy.y);
		printf("공격범위에 들어왔습니다. (거리 : %lf)", distance);
	}

#pragma endregion

	return 0;
}