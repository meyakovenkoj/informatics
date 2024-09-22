#include "nums/nums.h"
#include <stdio.h>


int main(void)
{
    int err = -1;
    float a, b, c;
    float discr;
    printf("Enter coefficients of equation:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    err = discriminant(a, b, c, &discr);
    if (err) {
        printf("It is not square equation!\n");
        return 1;
    }

    printf("Discriminant = %f\n", discr);
    
    float x_1, x_2;
    err = find_root(a, b, discr, &x_1, &x_2);
    if (err < 0) {
        printf("There is no roots!\n");
    } else if (x_1 == x_2) {
        printf("One root: %f\n", x_1);
    } else {
        printf("First root: %f\n", x_1);
        printf("Second root: %f\n", x_2);
    }

    return 0;
}
