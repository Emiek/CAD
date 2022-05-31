#include <stdio.h>
#include <stdlib.h>

struct zespolone
{
    double re;
    double im;
};

struct zespolone dodaj(struct zespolone z1, struct zespolone z2)
{
    struct zespolone suma;
    suma.re = z1.re+z2.re;
    suma.im = z1.im+z2.im;
    return suma;
};

int main()
{
    struct zespolone z1 = {z1.re=1,z1.im=3};
    struct zespolone z2 = {z2.re=2,z2.im=4};
    struct zespolone suma = dodaj(z1,z2);
    printf("suma to %lf + %lfi",suma.re,suma.im);
    return 0;
}
