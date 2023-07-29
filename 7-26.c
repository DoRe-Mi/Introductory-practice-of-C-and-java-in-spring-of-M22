//最大公约数和最小公倍数//

#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a = m, b = n;
    while (m % n != 0)
    {
        int temp = m % n;
        m = n;
        n = temp;
    }
    printf("%d %d", n, a * b / n);

    return 0;
}