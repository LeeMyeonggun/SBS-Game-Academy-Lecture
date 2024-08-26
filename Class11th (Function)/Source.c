#include <stdio.h>

void Execute(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("Execute\n");
	Execute(count - 1);
	printf("%d\n", count);
}

int main()
{

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을
	// 수행하는 함수입니다.

	// Execute(3);

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생하게 됩니다.


#pragma endregion

#pragma region ASCII code
	// 미국 국립 표준 협회에서 표준화한 정보 교환용
	// 7 bit 부호 체계입니다.

	//int alphabet = 'A' + 1;

	// printf("alphabet 변수의 값: %d\n", alphabet);
	// printf("alphabet 변수의 값: %c\n", alphabet);


	// for (int i = 65; i < 65 + 26; i++)
	// {
	// 	printf("%c\n", i);
	// }
#pragma endregion

#pragma region 대소문자 변환

	// char content [] = "League of Legend";
	// 
	// 
	// for (int i = 0; i < sizeof(content)-1; i++)
	// {
	// 	if (65 <= content[i] && content[i] <= 90)
	// 	{
	// 		printf("%c", content[i] + 32);
	// 	}
	// 	else if(97 <= content[i] && content[i] <= 122)
	// 	{
	// 		printf("%c", content[i] - 32);
	// 	}
	// }

	

#pragma endregion

	
	return 0;
}