#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void kopiuj(char* nap, char nap2[])
{
    int i=0;
    while(*nap != 0)
    {
        nap2[i]=*nap;
        i++;
        *nap++;
    }
    nap2[i]=0;
}
void kopiuj_w(wchar_t* nap, wchar_t nap2[])
{
    int i=0;
    while(*nap != 0)
    {
        nap2[i]=*nap;
        i++;
        *nap++;
    }
    nap2[i]=0;
}
int main()
{
    char * nap = "abdc";
    char nap2[20];
    kopiuj(nap,nap2);
    printf("%s\n",nap);
    printf("%s\n",nap2);

    //wchar_t
    wchar_t * napw = L"efghij";
    wchar_t napw2[20];
    kopiuj_w(napw,napw2);
    wprintf(L"%s\n",napw);
    wprintf(L"%s\n",napw2);

}
