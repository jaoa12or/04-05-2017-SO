#include "fibo.h"


int fibo(int n)
{
	if(n == 1)
	{
		return 1;

	}

	if (n == 2)

	{
		return 1;
	}


	else 

	return (fibo(n-1) + fibo (n-2));
}
