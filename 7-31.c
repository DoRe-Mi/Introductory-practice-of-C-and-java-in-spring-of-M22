//掉入陷阱的数字//

#include <stdio.h>

int main()
{
    int n, sum, step = 1, prev = -1;
    scanf("%d", &n);
    while (1) 
    {
        sum = 0;
        while (n > 0) 
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum * 3 + 1;
        printf("%d:%d\n", step, n);
        if (n == prev) 
        {
            break;
        }
        prev = n;
        step++;
    }
    return 0;
}