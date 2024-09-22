#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[6];
	char inandout[6];
}record;

record arr[1000001];

int compare(const void* a, const void* b)
{
	record num1 = *(record*)a;
	record num2 = *(record*)b;

	if (strcmp(num1.name, num2.name) < 0)
	{
		return 1;
	}
	else if (strcmp(num1.name, num2.name) > 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %s", arr[i].name, arr[i].inandout);
	}
	qsort(arr, n, sizeof(record), compare);

	for (int i = 0; i < n; i++)
	{
		if (!strcmp(arr[i].name, arr[i + 1].name))
		{
			i++;
		}
		else
		{
			printf("%s\n", arr[i].name);
		}
	}

	return 0;
}