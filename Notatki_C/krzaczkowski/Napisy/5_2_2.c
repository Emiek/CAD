#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
int dlugosc(char napis[])
{
    int i=0;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}
int dlugosc_w(wchar_t napis[])
{
    int i=0;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}
int main()
{
    char nap[10]="ab\tcd";
    wchar_t nap2[10]=L"abd";
    printf("%s\n",nap);
    printf("%d\n",dlugosc(nap));
    wprintf(L"%s\n",nap2);
    wprintf(L"%d\n",dlugosc_w(nap2));
    return 0;
}
