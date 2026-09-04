#include <stdio.h>
#include <math.h> // If we write this then we use pow() to find power,pow(base, exponent).

int main()
{
    for (float p = 1; p <= 10; p++)
    {
        for (float r = 1; r <= 10; r++)
        {
            for (float n = 1; n <= 10; n++)
            {
                for (float q = 1; q <= 10; q++)
                {
                    float a;
                    a = p * pow((1 + r / q), n * q);

                    printf("If p is %.2f , q is %.2f , r is %.2f , n is %.2f then a is %.2f\n", p, q, r, n, a);
                }
            }
        }
    }

    return 0;
}