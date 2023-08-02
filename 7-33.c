#include<stdio.h>

int main()
{
    int m, n, i, j;
    int isPrime = 1;
    int sum = 0, count = 0;
    scanf("%d %d",&m,&n);
    for (i = m; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            sum += i;
            count++; 
        }
        isPrime = 1;
    }
    printf("%d %d\n",count,sum);

    return 0;
}