#include <stdio.h>
#include <stdlib.h> // qsort()

int compare(const void *a, const void *b){
    return (*(int*)b - *(int*)a);
}

int main(void){
    int n, k, S = 0;
    int *a;

    scanf("%d %d", &n, &k);

    a = (int*) malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), compare);

    for(int i = 0; i < n; i++){
        if(a[i] >= a[k - 1] && a[i] > 0)
            S++;
    }

    printf("%d\n", S);

    free(a);

    return 0;
}