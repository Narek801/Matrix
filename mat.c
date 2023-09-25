#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N = 0;
    int M = 0;
    int sum = 0;
    int qua = 0;

    printf("Rows: ");
    scanf("%d", &N);
    printf("Columns: ");
    scanf("%d", &M);  

    int arr[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            ++qua;
            sum += arr[i][j];
        }
    }

    printf("%d\n", sum / qua);
    return 0;
}
