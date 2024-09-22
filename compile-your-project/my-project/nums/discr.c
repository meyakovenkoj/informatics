#include "nums.h"


int discriminant(float a, float b, float c, float *discr)
{
    if (a == 0.0) {
        return -1;
    }

    float result = b * b - 4 * a * c;
    *discr = result;

    return 0;
}
