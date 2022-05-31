#include<stdio.h>
#include<stdlib.h>

void fun(int **tab,int **tab2, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab2[i][j]=tab[i][j];
        }
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

int main()
{
    int ** tab = (int**)malloc(sizeof(int*)*2);
    tab[0]=(int*)malloc(sizeof(int)*2);
    tab[1]=(int*)malloc(sizeof(int)*2);
    *(*(tab+0)+0)= 1;
    *(*(tab+0)+1)= 2;
    *(*(tab+1)+0)= 3;
    *(*(tab+1)+1)= 4;
    int ** tab2 = (int**)malloc(sizeof(int*)*2);
    tab2[0]=(int*)malloc(sizeof(int)*2);
    tab2[1]=(int*)malloc(sizeof(int)*2);

    fun(tab,tab2,2,2);
    printf("tab:\n");
    print(2,2,tab);
    printf("tab2:\n");
    print(2,2,tab2);
}
