//求分数序列前N项和//

#include<stdio.h>

int main()
{
    int n, i;
    int j = 2, k = 1, temp;
    double sum = 0.0;
    scanf("%d",&n);
    if (n == 1)
    {
        printf("%.2lf",sum + 1.0);
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        sum += (double)j / k;
        temp = j;
        j += k;
        k = temp;
    }
    printf("%.2lf",sum);

    return 0;
}