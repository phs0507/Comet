#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			n = n / i;
			i = 1;
		}
	}
    
    return 0;
}