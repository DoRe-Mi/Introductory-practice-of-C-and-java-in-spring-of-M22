//到底是不是太胖了

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, high, weight;
    int i;
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        scanf("%d %d", &high, &weight);
        char result;
        result = (high - 100) * 0.9 * 2;
        weight = weight - result;
        if (weight < 0)
        {
            printf("You are tai shou le!\n");
        }
        else if (weight > result * 0.1)
        {
            printf("You are tai pang le!\n");
        }
        else if (weight < result * 0.1)
        {
            printf("You are wan mei!\n");
        }
    }

    return 0;
}