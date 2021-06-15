//
// Created by ajh07 on 2021-06-13.
//

#include <stdio.h>

int isPrimeNum(int num) {
    for(int i = 2; i <= num/2; ++i)
        if(num%i == 0)
            return 0;

    return 1;
}

int main(void) {
    // 입력
    int num;
    scanf("%d", &num);

    if (num == 1) {
        printf("wrong number");
        return 0;
    }
    // 처리
    int i , j;
    for (i = 2, j = num/i ; i < num/2; j = num/++i) {
        if ((double)num/i != j)
            continue;
        if (isPrimeNum(i) && isPrimeNum(j)) {
            printf("%d %d", i, j);
            return 0;
        }
    }
    // 출력
    printf("wrong number");
    return 0;
}