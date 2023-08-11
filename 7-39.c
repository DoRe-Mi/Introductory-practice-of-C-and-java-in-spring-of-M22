//龟兔赛跑//

#include<stdio.h>

int main()
{
    int t, turtle = 0, rabbit = 0;
    scanf("%d",&t);

    for (int i = 1; i <= t; i++)
    {
        turtle += 3;
        rabbit += 9;

        if (i % 10 == 0)
        {
            if (rabbit > turtle)
            {
                turtle += 90;
                i += 30;
            }
            // else if (rabbit <= turtle)
            // {
            //     rabbit += 90;
            //     turtle += 30;
            //     i += 10;
            // }
        }
    }
    if (rabbit > turtle)
    {
        printf("^_^ %d", rabbit);
    }
    else if (rabbit < turtle)
    {
        printf("@_@ %d", turtle);
    }
    else if (rabbit == turtle)
    {
        printf("-_- %d", rabbit);
    }
    

    return 0;
}