#include <stdio.h>
#include <stdlib.h>

// wyswietla marke i cena najdrozszego samochodu

struct Samochod
{
    char * napis;
    int cena;
};

struct Samochod fun(struct Samochod tab[], int n)
{
    struct Samochod maks = *tab;
    for(int i=0;i<n;i++)
    {
        if(tab[i].cena > maks.cena)
        {
            maks.cena= tab[i].cena;
            maks.napis = tab[i].napis;
        }
    }
    return maks;
};

int main()
{
    struct Samochod car1 = {"Volvo",10000};
    struct Samochod car2 = {"BMW",60000};
    struct Samochod car3 = {"Opel",9000};
    struct Samochod car4 = {"Fiat",3000};
    struct Samochod tab[4] = {car1,car2,car3,car4};
    struct Samochod wynik = fun(tab,4);
    printf("Marka : %s      Cena: %d\n",wynik.napis,wynik.cena);
    return 0;
}
