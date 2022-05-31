#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
/*
Napisz funkcjê przepisz, która otrzymuje dwie tablice znaków i przepisuje napis znajduj¹cy siê w pierwszej tablicy do drugiej tablicy. Zak³adamy, ¿e w drugiej tablicy jest wystarczaj¹co du¿o miejsca. Napisz
dwie wersje funkcji przepisz dla napisów sk³adaj¹cych siê ze znaków
typu char i wchar_t.
*/
void przepisz(char nap[], char nap2[])
{
    int i;
    for(i=0;i<nap[i]!=0;i++)
        {
            nap2[i]=nap[i];
        }
    nap2[i]=0;
}
void przepisz_w(wchar_t nap[], wchar_t nap2[])
{
    int i;
    for(i=0;i<nap[i]!=0;i++)
        {
            nap2[i]=nap[i];
        }
    nap2[i]=0;
}

int main()
{
    char n[]="abcxz";
    char n2[7];
    przepisz(n,n2);
    printf("%s\n",n);
    printf("%s\n",n);
    // wchar_t
    wchar_t nw[]=L"abcxz";
    wchar_t nw2[7];
    przepisz_w(nw,nw2);
    wprintf(L"%s\n",nw);
    wprintf(L"%s\n",nw2);
}
