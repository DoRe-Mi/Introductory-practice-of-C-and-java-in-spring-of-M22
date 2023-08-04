//支票面额//

#include <stdio.h>

int main()
{
    int n, y, f;
    scanf("%d", &n);
    int found = 0;
    for (y = 0; y < 100; y++) {
        for (f = 0; f < 100; f++) {
            int x = 10000 + 98 * n + 198 * f + 199 * y;
            if (f * 100 + y == x % 10000 && x / 10000 == 0) {
                if (x / 100 == n + f - y && (x + 2 * y * 100 + 2 * f) % 10000 == 202) {
                    printf("%d.%d\n", y, f);
                    found = 1;
                    break;
                }
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        printf("No Solution\n");
    }
    return 0;
}