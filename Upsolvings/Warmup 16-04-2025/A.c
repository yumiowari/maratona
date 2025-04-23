#include <stdio.h>

int main(void){
    int N, K;

    scanf("%d %d", &N, &K);

    K -= (N - 1);
    if(K < 0)K = 0;

    printf("%d\n", K / N);

    return 0;
}