#include<stdio.h>
#include<stdlib.h>

void fun(int n, int m, int ** tab)
{
    int tmp;
    for(int i=0;i<n;i++)
    {
        tmp = tab[n-1][i];
        for(int j=n-1;j>0;j--)
        {
            tab[j][i]=tab[j-1][i];
        }
        tab[0][i]=tmp;
    }
}

void print(int n, int m, int** tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ",i,j,tab[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int ** tab = (int**)malloc(sizeof(int*)*3);
    tab[0]=(int*)malloc(sizeof(int)*2);
    tab[1]=(int*)malloc(sizeof(int)*2);
    tab[2]=(int*)malloc(sizeof(int)*2);
    *(*(tab+0)+0)= 1;
    *(*(tab+0)+1)= 2;
    *(*(tab+1)+0)= 3;
    *(*(tab+1)+1)= 4;
    *(*(tab+2)+0)= 5;
    *(*(tab+2)+1)= 6;

    printf("tab:\n");
    print(3,2,tab);
    fun(3,2,tab);
    printf("tab:\n");
    print(3,2,tab);

    return 0;
}


