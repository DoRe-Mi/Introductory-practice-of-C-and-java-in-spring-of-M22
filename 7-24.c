//猜数字游戏//

#include<stdio.h>

int main()
{
    int i, t, n;
    scanf("%d %d", &n, &t);
    for (i = 1; i <= t; i++)
    {
        int x;
        scanf("%d", &x);
        if (i == 1 && x == n)
        {
            printf("Bingo!\n");
            break;            
        }
        else if (i > 1 && i <= 3 && x == n)
        {
            printf("Lucky You!\n");
            break;
        }
        else if (i > 3 && i <= t && x == n)
        {
            printf("Good Guess!\n");
            break;
        }
        else if (i > t || i < 0)
        {
            printf("Game Over\n");
            break;
        }
        else if (x > n)
        {
            printf("Too big\n");
        }
        else if (x < n)
        {
            printf("Too small\n");
        }
    }

    return 0;
}