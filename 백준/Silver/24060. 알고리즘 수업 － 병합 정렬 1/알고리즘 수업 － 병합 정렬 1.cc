#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, K;
int A[500001];
int tmp[500001];
int count = 0;
int result = -1;

// merge 함수 구현
void merge(int* A, int p, int q, int r){
	int i = p;
	int j = q + 1;
	int t = 1;
	
	while (i <= q && j <= r){
		if (A[i] <= A[j]){
			tmp[t++] = A[i++];
		}
		else {
			tmp[t++] = A[j++];
		}
	}
	while (i <= q){
		tmp[t++] = A[i++];
	}
	while (j <= r){
		tmp[t++] = A[j++];
	}

	i = p;
	t = 1;
	while (i <= r){
		A[i++] = tmp[t++];
		count++;

		if (count == K){
			result = A[i - 1];
			break;
		}
	}
}

// merge_sort함수, 재귀호출
void merge_sort(int* A, int p, int r){
	if (p < r){
		int q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

int main(){
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
    
	merge_sort(A, 0, N - 1);

	printf("%d", result);
	return 0;
}