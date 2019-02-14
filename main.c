/* A C program to check if a number is divisible by 2,3,5 and 7 */
// You can switch numbers to fit your own condition.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Please input an Integer: ");
	scanf("%d", &n);
	if(n%2 == 0 && n%5 == 0)
{
	printf("%d is divisible by 2 and 5", n);
}
	else
{
	printf("%d is either divisible by 2 or 5 or none of them.",n);
	getch();
}
}
