#include <stdio.h>
#include <stdlib.h>
enum zwierzak { PIES, KOT, KROLIK};
int main()
{
    enum zwierzak z1 = KOT;
    printf("%d\n",z1);
    return 0;
}
