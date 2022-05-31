#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

/*
Dane sa nastepujace wyrazy i znaki:
wchar_t [ ] ( ) void int int fun n m tab m [ ] , , *
U��z je we w�asciwej kolejnosci, aby otrzymac nag��wek funkcji fun, kt�ra dostaje jako argumenty napis,
liczbe ca�kowita oraz dwuwymiarowa tablice element�w. Nastepnie dodaj dowolna implementacje funkcji i
stw�rz dla niej przypadek testowy.
*/

void fun( wchar_t * n, int m, int tab[][m])
{
    wprintf(L"%s\n",n);
    for(int i=0; i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    wchar_t napis[] = L"napis";
    int tab[2][2] = {{1,2},{3,4}};
    fun(napis,2,tab);
    return 0;
}
