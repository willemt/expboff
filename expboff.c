#include <math.h>

#define min(a,b) ((a) < (b) ? (a) : (b))

int expboff(int n, int lmin, int lmax)
{
    return min(lmin + (pow(n + 1, 2) - 1) / 2, lmax);
}
