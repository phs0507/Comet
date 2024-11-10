#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
	int i, j, n, k;
	int *w, *v, *arr;

	scanf("%d %d", &n, &k);


	w = (int *)malloc(sizeof(int) * n);
	v = (int *)malloc(sizeof(int) * n);
	arr = (int *)malloc(sizeof(int) * (k+1));

	for (i = 0; i < n; i++) {
		scanf("%d %d", &w[i], &v[i]);
		if (v[i] == 0)
			w[i] = 0;
	}

	for (i = 0; i < k; i++)
		arr[i] = 0;

	for (i = 0; i < n; i++)
	{
		for (j = k; j > 0; j--)
		{
			if (w[i] <= j)
			{
				if (arr[j] < arr[j - w[i]] + v[i])
					arr[j] = arr[j - w[i]] + v[i];
			}
		}
	}

	printf("%d", arr[k]);

	free(w);
	free(v);
	free(arr);

	return 0;
}