#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i < 10; i++){
        for (j = n*i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}