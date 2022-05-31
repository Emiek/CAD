#include<stdio.h>
#include<stdlib.h>

int fun (int **tab, int n, int m)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            suma+=tab[i][j];
        }
    }
    return suma;
}

int main ()
{
    int ** tab = (int**)malloc(sizeof(int*)*2);
    tab[0]=(int*)malloc(sizeof(int)*2);
    tab[1]=(int*)malloc(sizeof(int)*2);
    *(*(tab+0)+0)= 2;
    *(*(tab+0)+1)= 3;
    *(*(tab+1)+0)= -2;
    *(*(tab+1)+1)= 3;
    printf("Suma elementow to: %d",fun(tab,2,2));
    return 0;
}

