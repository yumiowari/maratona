#include <stdio.h>

int main(void){
    int x = 0, n;
    char str[4];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", str);

        if(
           str[0] == '+' && str[1] == '+' ||
           str[1] == '+' && str[2] == '+'
          ){
            x++;
          }else if(
           str[0] == '-' && str[1] == '-' ||
           str[1] == '-' && str[2] == '-'
          ){
            x--;
          }
    }

    printf("%d\n", x);

    return 0;
}