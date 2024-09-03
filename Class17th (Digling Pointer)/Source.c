#include <stdio.h>
#include <stdarg.h>


void print(int count, ...)
{
	// va_list : 가변 인수의 목록을 저장하는 포인터 변수입니다.
	va_list list;

	// va_start : 가변 인수의 시작 주소를 반환하는 값입니다.
	va_start(list, count);

	// va_arg : 가변 인수의 포인터에서 특정한 자료형의 크기만큼 값을 꺼내는 함수입니다.
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", va_arg(list, int));
	}

	// va_end : 가변 인수의 처리가 끝났을 때 포인터를 NULL로 초기화하는 함수입니다.
	va_end(list);

}

int main()
{

#pragma region 가변 길이 매개 변수

	// print(3, 10, 20, 30);

	// print(5, 1, 2, 3, 4, 5);


#pragma endregion

#pragma region Star Wars

	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = 0; j <= i; i++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }
	// 
	// int layer = 5;
	// for (int i = 0; i < layer; i++)
	// {
	// 	if (i < layer / 2)
	// 	{
	// 		for (int j = (layer -1)/2; j > i; j--)
	// 		{
	// 			prinf(" ");
	// 		}
	// 		for (int k = 0; k <= i; k++)
	// 		{
	// 			printf("*");
	// 		}
	// 	 }
	// 	else
	// 	{
	// 		for (int j = 0; j <= i - layer/2; j++)
	// 		{
	// 			print(" ");
	// 		}
	// 		for (int k = i - layer / 2; k>0; k--)
	// 		{
	// 			printf("*");
	// 		}
	// 	}
	// }

#pragma endregion

#pragma region 이중 포인터

	// int** dptr = NULL;
	// 
	// int* ptr = NULL;
	// 
	// int a = 10;
	// 
	// ptr = &a;
	// 
	// dptr = &ptr;
	// 
	// printf("dptr로 접근한 a의 값: %d\n", **dptr);
	// printf("ptr로 접근한 a의 값: %d\n", *ptr);
	// printf("a의 값: %d\n", a);

#pragma endregion


#pragma region 이차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	// int array2D[][3] =
	// {
	// 	{10, 20, 30},
	// 	{40, 50, 60},
	// 	{70, 80, 90},
	// };
	// 
	// // 2차원 배열 또한 연속적인 메모리 공간의 형태로 저장되며,
	// // 2차원 배열의 크기를 생략할 때 배열의 열의 크기만 생략할 수 있습니다.
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("%d ", array2D[i][j]);
	// 	}
	// 	printf("\n");
	// }

	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은 열을
	// 의미하고, 뒤에 있는 배열은 행을 의미합니다.

	
#pragma endregion




	return 0;
}