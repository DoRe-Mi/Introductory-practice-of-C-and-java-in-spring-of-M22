//求整数的位数及各位数字之和//

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int sum = 0, count = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
        count++;
    }
    printf("%d %d\n", count, sum);
    return 0;
}