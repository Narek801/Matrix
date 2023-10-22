#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int** ptr = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; ++i) {
        ptr[i] = (int*)calloc(n, sizeof(int));
    }
    if (ptr == NULL) {return 0;}

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &ptr[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                printf("%d ", ptr[i][j]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        free(ptr[i]);
    }
    ptr = NULL;
}