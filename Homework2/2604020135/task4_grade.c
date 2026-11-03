/*
 * 学号：2604020135
 * 姓名：刘如霞
 * 题目：Homework2 - 题目4 成绩等级
 * 编译：gcc -Wall -std=c11 task4_grade.c -o task4_grade
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int score;
	printf("Enter your score: ");
	scanf("%d", &score);
	if (score < 0 || score>100)
	{
		printf("Input error: Score must be between 0 and 100.\n");
	}
	else if (score >= 90)
	{
		printf("Score %d, Grade:A\n", score);
	}
	else if (score >= 80)
	{
		printf("Score %d, Grade:B\n", score);
	}
	else if (score >= 70)
	{
		printf("Score %d, Grade:C\n", score);
	}
	else if (score >= 60)
	{
		printf("Score %d, Grade:D\n", score);
	}
	else
	{
		printf("Score %d, Grade:E\n", score);
	}
	return 0;
}