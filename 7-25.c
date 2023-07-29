//求奇数和//

#include<stdio.h>

int main()
{
    int n, sum = 0;
    do
    {
        scanf("%d", &n);
        if (n % 2 != 0 && n > 0)
        {
            sum += n;
        }
    } while (n>0);
    printf("%d", sum);

    return 0;
}