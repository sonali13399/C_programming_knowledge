#include <stdio.h>

int main()
{
	struct bank {
		int account;
		float balance;
	};
	struct bank checking;
	checking.account = 1012;
	checking.balance = 568.32;
	printf("%d & %f",checking.account,checking.balance);
	return(0);
}

