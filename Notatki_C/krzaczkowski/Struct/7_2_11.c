#include<stdio.h>
#include<stdlib.h>

union Liczba
{
    int a;
    float b;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj()
{
    struct Dane tmp;
    printf("podaj 0 jesli calkowita liczba lub 1 jesli wymierna\n");
    scanf("%d",&tmp.tp);
    if(tmp.tp==0)
    {
        printf("podaj liczbe calkowita\n");
        scanf("%d",&tmp.zaw.a);
    }
    else
    {
        printf("podaj liczbe wumierna\n");
        scanf("%d",&tmp.zaw.b);
    }
    return tmp;
};
void wyswietl(struct Dane arg)
{
    if(arg.tp ==0)
    {
        printf("%d\n",arg.zaw.a);
    }
    else
    {
        printf("%f\n",arg.zaw.b);
    }
}
int main()
{
    union Liczba zm;
    zm.a=9;
    printf("%d\n",zm.a);
    printf("%f\n",zm.b);
    zm.b=1.2;
    printf("%d\n",zm.a);
    printf("%f\n",zm.b);
    struct Dane d1 = wczytaj();
    wyswietl(d1);
    return 0;
}
