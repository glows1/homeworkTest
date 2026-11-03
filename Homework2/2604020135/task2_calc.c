/*
 * 学号：2604020135
 * 姓名：刘如霞
 * 题目：Homework2 - 题目2 四则运算（含除零判断）
 * 编译：gcc -Wall -std=c11 task2_calc.c -o task2_calc
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;
	printf("Enter two integers: ");
	scanf("%d%d", &a, &b);
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	printf("Sum=%d\n", sum);
	printf("Difference=%d\n", sub);
	printf("Product=%d\n", mul);
	if (b == 0)
	{
		printf("Divisor cannot be 0, quotient and remainder cannot be calculated.\n");
	}
	else
	{
		int div = a / b;
		int mod = a % b;
		printf("Quotient=%d\n", div);
		printf("Remainder=%d\n", mod);
	}
	return 0;
}