#include <stdio.h>

int main(void){
    int n, a, p, S = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        p = 0;
        
        for(int j = 0; j < 3; j++){
            scanf("%d", &a);

            if(a == 1)
                p++;
        }

        if(p >= 2)
            S++;
    }

    printf("%d\n", S);

    return 0;
}