#include <stdio.h>
#include "../Class7th (Type Conversion)/GameManager.h"

#define SIZE 5

void main()
{
#pragma region 상수 지시 포인터

	// int a = 10;
	// int b = 20;
	// 
	// const int *ptr = NULL;
	// 
	// // printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// ptr = &a;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// ptr = &b;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// // *ptr = 99;

	
#pragma endregion


#pragma region 포인터 상수
	// 포인터를 상수로 선언하여, 포인터 변수가
	// 가리키는 있는 주소에 존재하는 값을 변경할
	// 수 없도록 설정할 수 있습니다.

	// int x = 10;
	// int y = 20;
	// 
	// int * const cptr = &x;
	// 
	// *cptr = 99;
	// 
	// printf("x변수의 값 : %d\n", x);

	// cptr = &y;

#pragma endregion


#pragma region 배열

	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.

	// array[0] = 10;

	// printf("array[0]의 값 : %d\n", array[0]);

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	// 공간을 가지게 됩니다.
	
#pragma region (1)0 ~ 50 배열에 담기

	// [10] [20] [30] [40] [50]
	
	// int array[5];
	// printf("array의 크기 %d\n", sizeof(array));
	// 
	// int size = sizeof(array) / sizeof(int);
	// 
	// 
	// for (int i = 1; i <= size; i++)
	// {
	// 	array[i - 1] = i * 10;
	// }
	// 
	// printf("Method 1\n");
	// for (int i = 1; i <= size; i++)
	// {
	// 	printf("array[%d]의 값 : %d\n", i - 1, array[i - 1]);
	// }

	// 또는 
	// i → 0
	// array[i -1] → array[i]
	// i * 10 → (i + 1)*10
	// 치환해도 결과는 동일함


	// printf("Method 2\n");
	// for (int i = 0; i < size; i++)
	// {
	// 	array[i] = (i + 1) * 10;
	// }
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("array[%d]의 값 : %d\n", i, array[i]);
	// }

#pragma endregion

	// int list[] = { 1, 2, 3, 4, 5, 6, 7 };
	// 
	// 
	// for (int i = 0; i < sizeof(list) / sizeof(int); i++)
	// {
	// 	printf("list[%d]의 값 : %d\n", i, list[i]);
	// }

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	// int table[] = { 1, 2, 3 };
	// 
	// printf("table의 주소는 : %p\n", table);
	// printf("table[0]의 주소는 : %p\n", &table[0]);
	// 
	// int * p = NULL;
	// 
	// p = table;
	// 
	// p += 1;
	// 
	// *p = 135;
	// 
	// printf("table[1]의 값 : %d\n", *table);
	
	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다.

#pragma endregion



}