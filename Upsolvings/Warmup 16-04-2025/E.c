#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkS(int **M, int N){
    // linhas
    for(int i = 0; i < N; i++){
        for(int j = 1; j < N; j++){
            if(M[i][j] < M[i][j - 1])
                return false;
        }
    }
    //

    // colunas
    for(int i = 0; i < N; i++){
        for(int j = 1; j < N; j++){
            if(M[j][i] < M[j - 1][i])
                return false;
        }
    }
    //

    return true;
}

int main(void){
    int N;
    int **M, **A;

    scanf("%d", &N);

    M = (int**) malloc(sizeof(int*) * N);
    for(int i = 0; i < N; i++)
        M[i] = (int*) malloc(sizeof(int) * N);
    A = (int**) malloc(sizeof(int*) * N);
    for(int i = 0; i < N; i++)
        A[i] = (int*) malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &M[i][j]);
        }
    }

    // 0º
    if(checkS(M, N) == true){
        printf("0\n");

        return 0;
    }
    //

    // 90º
    for(int i = 0; i < N; i++){
        for(int j = 0, k = N - 1; j < N; j++){
            A[j][i] = M[i][k];

            k--;
        }
    }

    if(checkS(A, N) == true){
        printf("1\n");

        return 0;
    }
    //

    // 180º
    for(int i = 0; i < N; i++){
        for(int j = 0, k = N - 1; j < N; j++){
            M[j][i] = A[i][k];

            k--;
        }
    }
    
    if(checkS(M, N) == true){
        printf("2\n");

        return 0;
    }
    //

    // 270º
    for(int i = 0; i < N; i++){
        for(int j = 0, k = N - 1; j < N; j++){
            A[j][i] = M[i][k];

            k--;
        }
    }

    if(checkS(A, N) == true){
        printf("3\n");

        return 0;
    }
    //

    return 0;
}