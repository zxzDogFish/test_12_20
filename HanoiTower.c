#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void HanoiTower(int n ,char A ,char B ,char C)
{
	if (n == 1)
	{
		printf("%c-->%c\n", A, C);
	}
	else
	{
		HanoiTower(n - 1, A, C, B);
		printf("%c-->%c\n", A, C);
		HanoiTower(n - 1, B, A, C);
	}
}
int main()
{
	int n;
	char A = 'A', B = 'B', C = 'C';
	scanf("%d", &n);
	HanoiTower(n, A, B, C);
	return;
}