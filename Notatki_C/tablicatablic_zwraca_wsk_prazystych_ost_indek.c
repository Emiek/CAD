#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcje, której argumentem jest dwuwymiarowa tablica tablic i jej wymiary n i m. Funkcja ma
zwrócic wskaznik na element w ostatnim wierszu i ostatniej kolumnie o parzystym indeksie. Stwórz
przypadek testowy prezentujacy wartosc przechowywana na adresie zwróconym przez funkcje.
*/
int *fun(int **tab, int n, int m)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(i%2==0 && j%2==0)
            {
                return *(tab+i)+j;
            }
        }
    }
}

void wyswietl(int **tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int n=4,m=4;
    int ** tab = malloc(3 * sizeof(int*));
    tab[0] = malloc(4 * sizeof(int));
    tab[1] = malloc(4 * sizeof(int));
    tab[2] = malloc(4 * sizeof(int));
    tab[3] = malloc(4 * sizeof(int));
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
    tab[3][0] = 1;
    tab[3][1] = 1;
    tab[3][2] = -1;
    tab[3][3] = -1;

    wyswietl(tab, n, m);
    printf("%d\n",*fun(tab, n, m));

    return 0;
}
