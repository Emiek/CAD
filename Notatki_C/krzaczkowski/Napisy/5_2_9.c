#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void wytnij(char nap[], int n, int m)
{
    int i,j;
    for(i=0;nap[i]!=0;i++);
    if(i+1>m)
    {
        for(j=0;j+m<i;j++)
        {
            nap[n+j]=nap[j+m+1];
        }
    }
    else
        if((n<i)&&(i+1<=m))
            nap[n]=0;
}
void wytnij_w(wchar_t nap[], int n, int m)
{
    int i,j;
    for(i=0;nap[i]!=0;i++);
    if(i+1>m)
    {
        for(j=0;j+m<i;j++)
        {
            nap[n+j]=nap[j+m+1];
        }
    }
    else
        if((n<i)&&(i+1<=m))
            nap[n]=0;
}


int main()
{
    char n[]="abcd";
    wytnij(n,1,3);
    printf("%s\n",n);

    //wchar_t
    wchar_t nw[]=L"abcde";
    wytnij_w(nw,1,3);
    wprintf(L"%s\n",nw);
}
