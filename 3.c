#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int size = 3;
    int arr[size][size];

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < size; ++i) {
        printf("%d", arr[i][size - 1 - i]);
    }

    return 0;
}