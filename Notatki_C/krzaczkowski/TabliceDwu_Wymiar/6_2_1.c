#include<stdio.h>
#include<stdlib.h>

int ** fun (int n, int m)
{
    int **tab=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        tab[i] = (int*)malloc(sizeof(int)*m);
    }
    return tab;
}

int main ()
{
    int ** wsk = fun(2,3);
    printf("%p\n",wsk);
    return 0;
}

