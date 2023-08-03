//韩信点兵//

#include <stdio.h>

int main()
{
    int x = 10;
    while (1) {
        if ((x - 1) % 7 == 4) {
            if ((x - 1) % 6 == 5) {
                if ((x - 1) % 5 == 1) {
                    printf("%d\n", x - 4);
                    break;
                }
            }
        }
        x += 11;
    }
    return 0;
}