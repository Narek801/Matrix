#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n = 0;
	int sum = 0;

	printf("Enter the size of matrix: ");
	scanf("%d", &n);

	int** p = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; ++i) {
		p[i] = (int*)malloc(n*sizeof(int));
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &p[i][j]);
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			sum += *(*(p + i) + j);
		}
	}
	printf("%d\n", sum);

	for (int i = 0; i < n; ++i) {
		free(p[i]);
	}
	free(p);
	p = NULL;

	return 0;
}
