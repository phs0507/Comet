#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int cnt = 0;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        int error = 0;
        if(arr[i] == 1) {
            continue;
        } 
        else {
            for(int j = 2; j < arr[i]-1; j++) {
                if(arr[i] % j == 0) {
                    error += 1;
                    break;
                }
            }
            if (error == 0) {
                cnt += 1;
            }
        }
    }
    printf("%d", cnt);
    
}