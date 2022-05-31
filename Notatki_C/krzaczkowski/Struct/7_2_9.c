#include <stdio.h>
#include <stdlib.h>

struct lista{
    int a;
    struct lista *b;
};

int main()
{
    struct lista a;
    a.a = 1;
    a.b = &a;
    printf("%d\n",a.a);
    printf("%p",a.b);
    return 0;
}
