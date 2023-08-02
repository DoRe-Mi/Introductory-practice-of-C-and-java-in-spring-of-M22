#include<stdio.h>
#include<string.h>

char *Ping[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main()
{
    int n;
    scanf("%d", &n);
    if(n < 0)
    {
        printf("fu ");
        n = -n;
    }
    int a[10];
    int i = 0;
    while(n)
    {
        a[i++] = n % 10;
        n /= 10;
    }
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%s", Ping[a[j]]);
        if(j != 0)
        {
            printf(" ");
        }
    }

    return 0;
}