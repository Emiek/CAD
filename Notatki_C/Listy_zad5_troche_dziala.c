#include <stdio.h>
#include <stdlib.h>

struct element {
float x;
struct element * next;
};
int dlugosc(struct element * lista)
{
    int licz=0;
    while(lista != 0)
    {
        licz++;
        lista=lista->next;
    }
    return licz;
}

void foo(struct element * lista)
{
    struct element * wsk,*wsk2,*wsk3;

    int i=dlugosc(lista);
    for(int j=0;j<=i;j++)
    {
        wsk=lista;
        wsk2=NULL;
        while(wsk!=NULL)
        {
            if(wsk->x < 0)
            {
                wsk2=wsk;
            }
            wsk=wsk->next;
        }
        if (wsk2!=NULL)
        {
            wsk3=lista;
            while(wsk3->next != wsk2)
            {
                wsk3=wsk3->next;
            }
            wsk3->next= wsk2->next;
            free(wsk2);
        }
   }
}

void wyswietl(struct element* lista)
{
    struct element * current=lista;
    if(current==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(current!=NULL)
    {
        printf("%f\n", current->x);
        current = current->next;
    }
    printf("---\n");
}
int main()
{
    struct element* lista1 = malloc(sizeof(struct element));
    lista1->x=-4;
    lista1->next=malloc(sizeof(struct element));
    lista1->next->x=-7;
    lista1->next->next=malloc(sizeof(struct element));
    lista1->next->next->x=-8;
    lista1->next->next->next=malloc(sizeof(struct element));
    lista1->next->next->next->x=-12;
    lista1->next->next->next->next=NULL;
    printf("%d\n",dlugosc(lista1));
    wyswietl(lista1);
    foo(lista1);
    wyswietl(lista1);


    return 0;
}
