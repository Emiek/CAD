#include <stdio.h>
#include <stdlib.h>
/*
Stw�rz strukture Uczen o dw�ch polach imie (napis) oraz wiek (dowolny typ ca�kowity). Nastepnie
stw�rz funkcje, kt�rej argumentami jest tablica struktur Uczen oraz rozmiar tablicy. Funkcja ma zwr�cic
liczbe znak�w najd�uzszego imienia z tablicy. Stw�rz przypadek testowy.
*/
int dlug(char * nap)
{
    int i=0;
    while(nap[i]!=0)
    {
        i++;
    }
    return i;
}

struct Uczen
{
    char * imie;
    int wiek;
};

int fun(struct Uczen tab[], int n)
{
   int maks=0;
   for(int i=0;i<n;i++)
   {
       if(dlug(tab[i].imie)>maks)
       {
           maks= dlug(tab[i].imie);
       }
   }
   return maks;

}

int main()
{
    struct Uczen nap = {"adam", 20};
    struct Uczen nap2 = {"adam2", 20};
    struct Uczen nap3 = {"ad000am13", 20};
    struct Uczen tab[3] = {nap,nap2,nap3};
    printf("%d\n",fun(tab,3));
    return 0;
}
