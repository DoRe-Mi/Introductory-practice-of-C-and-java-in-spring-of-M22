//兔子繁衍问题//

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int f1 = 1, f2 = 1, f3, month = 2;
    while (f2 < N) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        month++;
    }
    printf("%d\n", month);
    return 0;
}