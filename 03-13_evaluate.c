#include <stdio.h>

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	/* insert code here */
	if(x>10)
		printf("%d is greater than 10",x);
	else if(x<10)
		printf("%d is less than 10",x);
	else
		printf("%d is equal to 10",x);
}

