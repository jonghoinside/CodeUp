#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    int nums[num-1];
    for (int i = 0 ; i < num ; ++i)
        scanf("%d", &nums[i]);

    int i, j;
    for (i = 1; i <= num; ++i) {
        for (j = 0; j < num-1; ++j) {
            if (nums[j] == i)
                break;
        }
        if (j == num-1) {
            printf("%d", i);
            return 0;
        }
    }

    return 1;
}