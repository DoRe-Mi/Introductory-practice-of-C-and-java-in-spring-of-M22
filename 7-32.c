//求交错序列前N项和//

#include<stdio.h>

int main()
{
    int n, i;
    double sum = 1.0;
    scanf("%d",&n);
    if (n == 1)
    {
        printf("%.3lf",sum);
        return 0;
    }
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= (double)i / (2 * i - 1);
        }
        else
        {
            sum += (double)i / (2 * i - 1);
        }
    }
    printf("%.3lf",sum);

    return 0;
}