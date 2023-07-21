#include <stdio.h>

int main(){
    int n1, n2, total = 0;
    char a;
    scanf("%d", &n1);
    while(1){
        scanf("%c", &a);
        if (a == '='){
            break;
        }
        scanf("%d", &n2);

        if (n1 == 0){
            if (a == '+'){
                total += n2;
            }
            else if (a == '-'){
                total -= n2;
            }
            else if (a == '*'){
                total *= n2;
            }
            else if (a == '/'){
                total /= n2;
            }
        }
        else if (a == '+'){
            total += n1 + n2;
        }
        else if (a == '-'){
            total += n1 - n2;
        }
        else if (a == '*') {
            total += n1 * n2;
        }
        else if (a == '/'){
            total += n1 / n2;
        }

        n1 = 0;
    }

    printf("%d", total);

    return 0;
}