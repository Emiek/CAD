#include<stdio.h>
#include<stdlib.h>

int fun(int **tab, int n, int m)
{
    double suma = 0,sr;
    int rowM;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            suma+=tab[i][j];
        }
        if(i==0)
        {
            rowM=i;
            sr = suma/m;
        }
        if(suma/m>sr)
        {
            rowM = sr;
        }
    }
    return rowM;
}

int main()
{
    int ** tab = (int**)malloc(sizeof(int*)*2);
    tab[0]=(int*)malloc(sizeof(int)*2);
    tab[1]=(int*)malloc(sizeof(int)*2);
    *(*(tab+0)+0)= 1;
    *(*(tab+0)+1)= 1;
    *(*(tab+1)+0)= 3;
    *(*(tab+1)+1)= 3;
    printf("wiersz z najwieksza srednia to wiersz o indeksie: %d",fun(tab,2,2));
    return 0;
}
