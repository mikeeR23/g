#include <stdio.h>
#include <stdlib.h>


// testing out git stuff

int main(void)
{

	int age = 0;
	char *name;

	name = malloc(sizeof(char *) * (20+1));

	puts("Enter age");
	scanf("%d", &age);

	puts("enter first name");
	scanf("%s", name);

	printf("Your age is %d and your name is %s", age,name);

	free(name);
}