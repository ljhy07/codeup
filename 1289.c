#include <stdio.h>

int main(){
    char arr[1000];
    int count = 0;
    
    gets(arr);
    while (arr[count]) {
        if (arr[count] >= 65 && arr[count] <= 90) // 대문자
            arr[count] += 32; //소문자 치환
        else if (arr[count] >= 97 && arr[count] <= 122) // 소문자
            arr[count] -= 32; //대문자 치환

        count++;
    }

    printf("%s", arr);
    
    return 0;
}