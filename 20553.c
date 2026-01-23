/*
    利用模运算，解同余方程，后续搞明白模运算和同余是怎么回事
*/

#include <stdio.h>

int main()
{
    long long N, d1 = 20250412LL, d2 = 20240413LL, k = 1LL;

    N = k * (d1 * d2) - d1 - d2;

    printf("%lld", N);

    return 0;
}