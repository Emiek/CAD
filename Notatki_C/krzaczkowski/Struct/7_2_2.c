#include<stdio.h>
#include<stdlib.h>

struct trojkat
{
    int a,b,c;
};

void przepisz(struct trojkat troj1, struct trojkat* troj2)
{
    *troj2=troj1;
}
int main()
{
    struct trojkat a = {.a=3,.b=4,.c=5};
    struct trojkat w = {.a=0,.b=10,.c=32};
    przepisz(a,&w);
    printf("a=%d, b=%d, c=%d\n",w.a,w.b,w.c);
    return 0;
}
