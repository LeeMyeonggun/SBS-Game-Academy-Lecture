#include <stdio.h>

void Function()
{
	printf("Execute");
}

void coordinate(int x, int y)
{
	printf("�Ű� ���� x�� �� : %d\n", x);
	printf("�Ű� ���� y�� �� : %d\n", y);
}

int Damage(int damage)
{
	damage = damage * 5;

	return damage;
}

void Swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Function();
	
	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� ������,
	// ���� �̸��� �Լ��� �ߺ����� ������ �� �����ϴ�.

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ�
	// ���� ����ϴ� �����Դϴ�.

	// coordinate(5, 10);

	// �Ű������� �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� �������, ���� ����
	// �Ű� ������ ������ �� �ֽ��ϴ�.

	// int damage = 10;
	// printf("Damage : %d\n", damage);
	// int critical = Damage(damage);
	// printf("Critical Damage : %d\n", critical);

#pragma endregion


#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	// int a = 10;
	// int b = 20;
	
	// int temp = a;
	// a = b;
	// b = temp;
	// 
	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);


	// Swap(&a, &b);
	//  
	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);



	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ ��
	// �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ����
	// ���� �޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion


#pragma endregion

}