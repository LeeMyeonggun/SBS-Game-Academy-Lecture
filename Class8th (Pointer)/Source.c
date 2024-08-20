#include <stdio.h>
#include "../Class7th (Type Conversion)/GameManager.h"

#define SIZE 5

void main()
{
#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	// int x = 10;
	// int y = 20;
	// float z = 30.0f;
	// 
	// int * ptr = NULL;
	// 
	// ptr = &x;
	// 
	// *ptr = 300;
	// 
	// printf("ptr 변수의 값 : %p\n", ptr);
	// printf("x 변수의 주소값 : %p\n", &x);
	// printf("x 변수의 값 : %d\n", x);
	// 
	// //포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// // 포인터 변수에 변수의 주소를 저장하게 되면 해당
	// // 변수의 시작 주소를 가리키게 됩니다.
	// 
	// printf("포인터 변수의 크기 : %d\n", sizeof(ptr));
	// 
	// // 포인터 변수의 크기는 중앙 처리 장치가 한 번에
	// // 처리할 수 있는 크기로 정해지며, 한 번에 처리할
	// // 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.
	// 
	// ptr = &y;
	//  	
	// *ptr = 99;
	// 
	// printf("ptr 변수의 주소값 : %p\n", &ptr);
	// printf("ptr 변수의 값 : %p\n", ptr);
	// printf("y 변수의 주소값 %p\n", & ptr);
	// printf("y 변수의 값 : %d\n", y);
	// 
	// 
	// ptr = &z;
	// 
	// *ptr = 100;
	// 
	// // 포인터 변수를 저장하기 위해 주소값을 저장할
	// // 변수의 자료형과 포인터 변수의 자료형이 일치해야 합니다.
	// 
	// printf("z 변수의 값 : %f\n", z);
	// 
	// printf("포이터 변수의 크기 : %d\n", sizeof(ptr));

#pragma endregion


#pragma region 전처리기
	// 프로그램이 컴파일 되기 이전에 프로그램에 대한
	// 사전 처리를 하는 과정입니다.

	//time = 15.0f;
	//
	//printf("time 변수의 값 : %f\n", time);

	// 전처리기는 컴파일러가 아닌 선행처리기에 의해서
	// 처리되는 문장이기 때문에 명령문 끝에 ";"을
	// 사용하지 않습니다.

#pragma endregion


#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의
	// 되고 처리되는 과정입니다.

	// printf("매크로 SIZE의 값 : %d\n", SIZE);
	// 
	// // 매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가
	// // 실행될 때 매크로의 대체 목록을 넣어야 하므로 프로그램의
	// // 크기가 커지게 됩니다.
	// 
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	printf("Update\n");
	// }

	// 매크로의 경우 자료형이 존재하지 않으므로 메모리
	// 공간을 가지고 있지 않습니다.

#pragma endregion



}