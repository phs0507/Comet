#include <stdio.h>
 
int main() {
    
    int x1, y1, z1, x2, y2, z2;
    int i, j;
 
    scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
 
    for (i = -999; i <= 999; i++) {
        for (j = -999; j <= 999; j++) {
            if (x1 * i + y1 * j == z1 && x2 * i + y2 * j == z2) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
 
    return 0;
}