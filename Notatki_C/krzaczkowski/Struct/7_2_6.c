#include <stdio.h>
#include <stdlib.h>

struct punktn{
    int w;
    double *tab;
};

void printStruct(struct punktn pkt){
    for(int i=0; i<pkt.w; i++){
        printf("%lf ", pkt.tab[i]);
    }
    printf("\n");
}

void printTabStruct(struct punktn tab[], int n){
    for(int i=0; i<n; i++){
        printStruct(tab[i]);
    }
    printf("\n");
}

void przepisz(struct punktn tab1[], struct punktn tab2[], int n){
    for(int i=0; i<n; i++){
        tab2[i].w = tab1[i].w;
        tab2[i].tab = malloc(tab1[i].w*sizeof(double));
        for(int j=0; j<tab1[i].w; j++){
            tab2[i].tab[j] = tab1[i].tab[j];
        }
    }
}

int main()
{
    struct punktn p1 = {.w = 2};
    p1.tab = malloc(2*sizeof(double));
    p1.tab[0] = 1;
    p1.tab[1] = 2;
    struct punktn p2 = {.w = 2};
    p2.tab = malloc(2*sizeof(double));
    p2.tab[0] = 4.4;
    p2.tab[1] = 5.5;
    struct punktn tab[2] = {p1, p2};
    struct punktn tab2[2]= {};
    printTabStruct(tab, 2);
    przepisz(tab, tab2, 2);
    printf("Po zmianie:\n");
    printTabStruct(tab, 2);
    printTabStruct(tab2, 2);
    return 0;
}
