//求解一元三次方程的根//

#include <stdio.h>
#include <math.h>

double f(double x, double a3, double a2, double a1, double a0)
{
    return a3*x*x*x + a2*x*x + a1*x + a0;
}

int main()
{
    double a3, a2, a1, a0;
    scanf("%lf %lf %lf %lf", &a3, &a2, &a1, &a0);
    double a, b;
    scanf("%lf %lf", &a, &b);
    double x1 = a, x2 = b, x = (a + b) / 2;
    double fa = f(a, a3, a2, a1, a0), fb = f(b, a3, a2, a1, a0);
    if (fa == 0)
    {
        printf("%.2f", a);
        return 0;
    }
    else if (fb == 0)
    {
        printf("%.2f", b);
        return 0;
    }
    else if (fa * fb > 0)
    {
        printf("%.2f\n", x);
        return 0;
    }
    else
    {
        double fx = f(x, a3, a2, a1, a0);
        while (fx != 0)
        {
            if (fx * fa < 0)
            {
                x2 = x;
                fb = fx;
            }
            else if (fx * fb < 0)
            {
                x1 = x;
                fa = fx;
            }
            else if (fx * fa > 0)
            {
                x1 = x;
                fa = fx;
                x2 = (a + b) / 2;
                fb = f((a + b) / 2, a3, a2, a1, a0);
            }
            x = (x1 + x2) / 2;
            fx = f(x, a3, a2, a1, a0);
        }
        printf("%.2f", x);
    }

    return 0;
}