#include <stdio.h>
#include <stdlib.h>

int *** fun (int n, int m, int k)
{
    int ***tab=(int***)malloc(sizeof(int**)*n);
    for(int i=0;i<m;i++)
    {
        tab[i] = (int**)malloc(sizeof(int*)*k);
        for(int j=0;j<k;j++)
        {
            tab[j] = (int**)malloc(sizeof(int)*k);
        }
    }
    return tab;
}
void fun2(int ***tab,int n, int m,int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            free(tab[j]);
        free(tab[i]);
    }

    free(tab);
}

int main()
{
    int *** wsk=fun(3,4,3);
    printf("%p\n",wsk);
    fun2(wsk,3,4,3);
    return 0;
}
