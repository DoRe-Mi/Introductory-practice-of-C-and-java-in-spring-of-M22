//猴子吃桃问题//

#include<stdio.h>

int main()
{
    int n, i;
    int sum = 1;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d", sum);
        return 0;
    }
    for (i = 1; i < n; i++)
    {
        sum = (sum + 1) * 2;
    }
    printf("%d", sum);

    return 0;
}