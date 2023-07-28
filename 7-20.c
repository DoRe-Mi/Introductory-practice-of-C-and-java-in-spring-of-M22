#include <stdio.h>

int main()
{
    int a, sum;
    char c;
    scanf("%d%c", &sum, &c);
    while (c != '=')
    {
        scanf("%d", &a);
        switch (c)
        {
        case '+':
            sum += a;
            break;
        case '-':   
            sum -= a;
            break;
        case '*':
            sum *= a;
            break;
        case '/':
            if (a == 0)
            {
                printf("ERROR");
                return 0;
            }
            sum /= a;
            break;
        default:
            printf("ERROR");
            break;
        }
        scanf("%c", &c);
    }
    printf("%d",sum);

    return 0;
}