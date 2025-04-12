#include <stdio.h>

int main(void){
    float e, t;
    int n = 1;

    scanf("%f", &e);

    while(1){
        t = 1.0 / (2 * n - 1);

        if(t < e){
            break;
        }else{
            n++;
        }
    }

    printf("%d\n", n);

    return 0;
}