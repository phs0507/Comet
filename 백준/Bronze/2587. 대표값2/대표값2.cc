#include <stdio.h>
int main() {
    int num[5];
    int sum = 0;
    int temp, least;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    for (int i = 0; i < 5; i++)
    {
        least = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (num[j] < num[least])
                least = j;
        }
        temp = num[i];
        num[i] = num[least];
        num[least] = temp;
    }

    printf("%d\n", sum / 5);

    printf("%d", num[2]);

    return 0;
}