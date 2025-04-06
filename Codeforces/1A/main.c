#include <stdio.h>
#include <math.h>

int main(void){
    int n, m, a;
    long long int x, y;

    scanf("%d %d %d", &n, &m, &a);

    x = (int) ceil((double) n / a);
    y = (int) ceil((double) m / a);

    printf("%lld\n", x * y);

    return 0;
}