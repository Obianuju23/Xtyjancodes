#include <stdio.h>

int main()
{
int age;
	printf("How old are you?");
	scanf("%d", &age);

	if (age < 0)
		printf("invalid age");
	else if (age >= 18)
		printf("You are eligible to vote");
	else
		printf("You are ineligible to vote");
return 0;
}
