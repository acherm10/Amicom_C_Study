#include <stdio.h>

// 행렬 A와 행렬 B를 더해주는 함수
void arr_sum(int N, int M, int A[N][M], int B[N][M], int sum[N][M]) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    
    int N;    // 행의 크기
    int M;    // 열의 크기
    scanf("%d %d", &N, &M);

    // 가변 길이 배열 사용
    int A[N][M];
    int B[N][M];
    int sum[N][M];

    // 행렬 A 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 행렬 B 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 행렬을 더하는 함수
    arr_sum(N, M, A, B, sum);

    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
