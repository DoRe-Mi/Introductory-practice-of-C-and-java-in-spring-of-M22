//输出整数各位数字//

#include<stdio.h>

int main()
{
    int n, i;
    int a[10];
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    for (i = 0; n != 0; i++)
    {
        a[i] = n % 10;
        n /= 10;
    }
    for (i--; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}