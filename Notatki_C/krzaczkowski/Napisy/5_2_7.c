#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void sklej (char nap[], char nap2[], char nap3[])
{
    int i,j;
    for(i=0;i<nap[i]!=0;i++)
    {
        nap3[i]=nap[i];
    }
    for(j=0;j<nap2[j]!=0;j++)
    {
        nap3[j+i]=nap2[j];
    }
    nap3[i+j]=0;
}
void sklej_w (wchar_t nap[], wchar_t nap2[], wchar_t nap3[])
{
    int i,j;
    for(i=0;i<nap[i]!=0;i++)
    {
        nap3[i]=nap[i];
    }
    for(j=0;j<nap2[j]!=0;j++)
    {
        nap3[j+i]=nap2[j];
    }
    nap3[i+j]=0;
}

int main()
{
    char n[]="addd";
    char n2[]="bbb";
    char n3[20];
    sklej(n,n2,n3);
    printf("%s\n",n);
    printf("%s\n",n2);
    printf("%s\n",n3);

    // wchar_t

    wchar_t nw[]=L"cccc";
    wchar_t nw2[]=L"aaa";
    wchar_t nw3[20];
    sklej_w(nw,nw2,nw3);
    wprintf(L"%s\n",nw);
    wprintf(L"%s\n",nw2);
    wprintf(L"%s\n",nw3);

}
