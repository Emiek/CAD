#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcje, której argumentem jest napis. Funkcja ma zadanie usunac znaki z napisu o nieparzystych
indeksach. Stwórz przypadek testowy.
*/
int dlug(char* nap)
{
    int i=0;
    while(nap[i]!=0)
    {
        i++;
    }
    return i;
}

void usun(char * nap)
{
    for(int j=0;nap[j]!=0;j++)
    {
        nap[j]=nap[j*2];
    }
    nap[dlug(nap)/2+1]='\0';
}

int main()
{
    char nap[]="abc1234";

    printf("%s\n",nap);
    usun(nap);
    printf("%s\n",nap);
    return 0;

}
