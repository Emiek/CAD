#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>


void wytnijzn(char nap[], char nap2[])
{
    int i,j;
    int niewyst[100]={};
    for(i=0;nap2[i]!=0;i++)
    {
        niewyst[nap2[i]]=1;
    }
    for(i=0,j=0;nap[i]!=0;i++)
    {
        if(niewyst[nap[i]]==1)
        {
            if(j<i)
                nap[j]=nap[i];
            j++;
        }
    }
    nap[j]=0;
}
void wytnijzn_w(wchar_t nap[], wchar_t nap2[])
{
    int i,j;
    int niewyst[100]={};
    for(i=0;nap2[i]!=0;i++)
    {
        niewyst[nap2[i]]=1;
    }
    for(i=0,j=0;nap[i]!=0;i++)
    {
        if(niewyst[nap[i]]==1)
        {
            if(j<i)
                nap[j]=nap[i];
            j++;
        }
    }
    nap[j]=0;
}

int main()
{
    char n[]="abcd";
    char n2[]="ad";
    wytnijzn(n,n2);
    printf("%s\n",n);
    printf("%s\n",n2);

    //wchar_t
    wchar_t nw[]=L"abcdefs";
    wchar_t nw2[]=L"adcxd";
    wytnijzn_w(nw,nw2);
    wprintf(L"%s\n",nw);
    wprintf(L"%s\n",nw2);
}
