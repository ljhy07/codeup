#include <stdio.h>

int main(){
    int n[5], i, max = -1000000, min = 1000000;
    for (i = 0; i < 5; i++){
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 5; i++){
        if (max <= n[i]) max = n[i];
        if (min >= n[i]) min = n[i];
    }
    printf("%d\n", max);
    printf("%d", min);

    return 0;
}