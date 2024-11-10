#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char input[21];
} name;

typedef struct
{
    char save[21];
} ans;

int compare(const void* a, const void* b)
{
    return strcmp(((name*)a)->input, ((name*)b)->input);
}

name str1[1000001];
ans str2[500001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n + m; i++)
    {
        scanf("%s", str1[i].input);
    }

    qsort(str1, n + m, sizeof(str1[0]), compare);

    int idx = 0;
    for (int i = 0; i < n + m - 1; i++)
    {
        if (strcmp(str1[i].input, str1[i + 1].input) == 0)
        {
            strcpy(str2[idx++].save, str1[i].input);
            i++;  // Skip the next element since it's a duplicate
        }
    }

    printf("%d\n", idx);
    for (int i = 0; i < idx; i++)
    {
        printf("%s\n", str2[i].save);
    }

    return 0;
}