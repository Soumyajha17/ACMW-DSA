#include <stdio.h>

void printPascalsTriangle(int N) {
    int triangle[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];

            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printPascalsTriangle(N);
    return 0;
}
