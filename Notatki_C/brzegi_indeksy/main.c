#include <stdio.h>
#include <stdlib.h>

int fun(int ** tab , int n, int m)
{
    int suma=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i%2==0 && j%2==0) || (i%2==0 && j%2==0 && i==0 && j==m-1) || (i%2==0 && j%2==0 && i==n-1 && j==0) || (i%2==0 && j%2==0 && i==n-1 && j==m-1) )
                {
                    suma+= tab[i][j] * tab[i][j];
                }
            }
        }
    return suma;
}

int main()
{
    int ** tab = malloc(3* sizeof(int*));
    tab[0] = malloc (4 * sizeof(int));
    tab[1] = malloc (4 * sizeof(int));
    tab[2] = malloc (4 * sizeof(int));
    tab[0][0] = 2;
    tab[0][1] = 3;
    tab[0][2] = -2;
    tab[0][3] = 8;
    tab[1][0] = -1;
    tab[1][1] = 8;
    tab[1][2] = -4;
    tab[1][3] = 3;
    tab[2][0] = 3;
    tab[2][1] = 5;
    tab[2][2] = -2;
    tab[2][3] = -9;
    printf("%d\n",fun(tab,3,4));
    return 0;
}
