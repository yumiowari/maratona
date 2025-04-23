#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n == 0){
        return 1;
    }else if(n == 1){
        return 1;
    }else{
        return sequencia(n - 1) + sequencia(n - 2);
    }
}

int main(void){
    int N;
    int *S;

    scanf("%d", &N);

    if(N == 1){
        printf("1\n");

        return 0;
    }

    S = (int*) malloc(sizeof(int) * N + 1);
    S[0] = 1;
    S[1] = 1;

    for(int i = 2; i <= N; i++)
        S[i] = (S[i - 1] + S[i - 2]);

    printf("%d\n", S[N]);

    //printf("%d\n", fibonacci(N));

    return 0;
}