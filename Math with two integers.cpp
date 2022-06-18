//Math with two integers
#include<stdio.h>
//
int main(void)
{
	int num1, num2;
	float result;
	printf("Enter the first integer\n");
	scanf("%d", num1);
	printf("Enter the second integer\n");
	scanf("%d", num2);
	int sum;
	sum=num1+num2;
	printf("The sum of the two integers is:%d\n", sum);
	printf("The difference of the two integers is:%d\n", num1-num2);
	printf("The product of the two integers is:%d\n", num1*num2);
	printf("The quotient of the two integers is:%d\n", num1/num2);
	printf("The remainder of the division of the two integers is:%d\n", num1%num2);
}
