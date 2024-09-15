#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int dp[1000000];
	int i, n;
	scanf("%d", &n);
	dp[2] = 1;
	dp[3] = 1;
	i = 4;
    
	while (i <= n)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0)
		{
			dp[i] = fmin(dp[i], dp[i / 3] + 1);
		}
		if (i % 2 == 0)
		{
			dp[i] = fmin(dp[i], dp[i / 2] + 1);
		}
		i++;
	}
	printf("%d", dp[n]);
    
    return 0;
}