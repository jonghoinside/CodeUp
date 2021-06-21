//
// Created by ajh07 on 2021-06-21.
//
#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("*");
            else if((i+j)%k + 1 == k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}