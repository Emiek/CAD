#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcje, która dostaje w argumencie dwa napisy i liczbe ca³kowita n. Funkcja ma zwrócic 1 jesli
znak o indeksie n w pierwszym napisie jest wczesniej w tablicy ASCII niz znak o indeksie n w drugim
napisie. W przeciwnym wypadku albo gdy którys z napisów jest krótszy, to funkcja ma zwrócic 0. W
zadaniu nie korzystaj z funkcji bibliotecznych. Stwórz przypadek testowy.
*/
int dlugosc(char * nap)
{
    int licz=0;
    for(int i=0; nap[i] != 0; i++)
    {
        licz++;
    }
    return licz;
}

int fun(char * nap, char * nap2, int n)
{
    if (dlugosc(nap)<n || dlugosc(nap2)<n)
    {
        return 0;
    }
    if(nap[n]<nap2[n])
    {
        return 1;
    }
    return 0;
}


int main()
{
    char nap[] = "Aaaaaa";
    char nap2[] = "World";
    printf("%d\n",fun(nap,nap2,0));
    return 0;
}
