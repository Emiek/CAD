#include<stdio.h>
#include<stdlib.h>

void fun(int tab[][100], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            tab[i][j]=0;
        }
    }

}
void print(int n, int tab[n][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            printf("[%d,%d]=%d ",i,j,tab[i][j]);
        }
        printf("\n");
    }
}
int main ()
{
    int tab[2][100];
    fun(tab,2);
    print(2,tab);
    return 0;
}

