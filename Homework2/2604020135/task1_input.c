/*
 * 学号：2604020135
 * 姓名：刘如霞
 * 题目：Homework2 - 题目1 个人信息录入
 * 编译：gcc -Wall -std=c11 task1_input.c -o task1_input
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int age;
	double height;
	char blood;
	printf("Please enter age:");
	scanf("%d", &age);
	printf("Please enter height(m):");
	scanf("%lf", &height);
	printf("Please enter blood type:");
	scanf(" %c", &blood);
	printf("+-------------------+\n");
	printf("|   Personal Card   |\n");
	printf("+-------------------+\n");
	printf("|   Age: %d years   |\n", age);
	printf("|   Height: %.2fm   |\n", height);
	printf("|   Blood: %c        |\n", blood);
	printf("+-------------------+\n");
	return 0;
}