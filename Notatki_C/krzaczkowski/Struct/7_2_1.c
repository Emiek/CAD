#include<stdio.h>
#include<stdlib.h>

struct trojkat
{
    int a,b,c;
};

int obwod(struct trojkat arg)
{
    return arg.a+arg.b+arg.c;
}
int main()
{
    struct trojkat a = {3,3,3};
    struct trojkat b = {.a=5,.b=4,.c=3};
    printf("%d\n",obwod(a));
    printf("%d\n",obwod(b));

    return 0;
}
