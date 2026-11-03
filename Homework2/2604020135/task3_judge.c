/*
 * 学号：2604020135
 * 姓名：刘如霞
 * 题目：Homework2 - 题目3 奇偶与大小判断
 * 编译：gcc -Wall -std=c11 task3_judge.c -o task3_judge
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n, x, y;
	//Part 1:judge odd or even
	printf("Enter an integer: ");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("%d is even.\n", n);
	}
	else
	{
		printf("%d is odd.\n", n);
	}
	//Part 2:compare two numbers
	printf("Enter two integers: ");
	scanf("%d%d", &x, &y);
	if (x > y)
	{
		printf("The larger number is:%d\n", x);
	}
	else if (y > x)
	{
		printf("The larger number is:%d\n", y);
	}
	else
	{
		printf("The two numbers are equal.\n");
	}
	return 0;
}