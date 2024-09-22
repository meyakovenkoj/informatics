#include "nums.h"
#include <math.h>


int find_root(float a, float b, float discr, float *x_1, float *x_2)
{
    if (discr < 0.0) {
        return -1;
    }

    if (!x_1 || !x_2) {
        return -2;
    }
    
    float tmp1 = -b + sqrtf(discr);
    *x_1 = tmp1 / (2 * a);

    float tmp2 = -b - sqrtf(discr);
    *x_2 = tmp2 / (2 * a);

    return 0;
}
