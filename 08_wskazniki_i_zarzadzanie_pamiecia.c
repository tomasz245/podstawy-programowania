
//przykład 1
//%p do wyswietlania adresu

#include <stdio.h>

void zwyklaZmienna(int zmienna){zmienna = 1; }
void wskWArgumencie(int *zmienna){*zmienna = 2; } //gwiazdka i przy deklaracji i przy przyrównaniu
int main()
{
    int i=3; //zmienna i
    int *wsk = &i; //deklaracja wskaznika i przypisanie adresu zmiennej i
    //pod wsk podstawiamy adres liczby
    //przy deklaracji wskaznika podstawiamy inny wskaznik lub adres ale nie wartosc!!!
    printf("Wartosc: %d, adres: %p. \n", i , &i);
    printf("Adres wskaznika: %p, wartosc wskazywania: %d. \n", wsk , *wsk);
    *wsk=4; //gwiazdka informuje ze podstawiamy pod wartosc
    printf("Wartosc zmiennej i: %d, wartosc wskaznika:%d\n", i, *wsk);
    int j=5;
    int *wsk2 = &j;
    printf("wartosc wskaznika wsk2: %d\n", *wsk2);
    wsk2= wsk; //podstawienie pod wskaznik inny wskaznik;
    printf("wartos wskaznika wsk2 po podstawieniu: %d\n", *wsk2);
    int liczba = 3;
    printf ("wartosc liczby %d\n", liczba); //db
    zwyklaZmienna(liczba);
    printf("wartosc liczby po wykonaniu funkcji = %d\n", liczba);
    wskWArgumencie(&liczba);
    printf("wartosc liczby po wykonaniu funkcji operujacej na wskazniku = %d\n", liczba);
    return 0;
}




//przykład 2
int *f1(int a)
{
    a*=2;
    return &a;  //błąd ponieważ przekazany adres będzie adresem kopii argumentu //mówiąc krótko - nie ma dwóch gwiazdek, brakuje przy argumencie
}

int *f2(int *b)
{
    *b*=3;
    return b;
}

int main()
{
    int a=2;
    int *wsk = &a;
    wsk = f1(a);
    printf("wartosc wskaznika: %i ardes wskaznika: %p \n", *wsk, wsk);
    printf("wartosc zmiennej: %i adres zmiennej %p \n", a , &a);
    int b=5;
    int *wsk2=f2(&b);
    printf("wartosc wskaznika %i ardes wskaznika: %p \n", *wsk2, wsk2 );
    printf("wartosc zmiennej: %i adres zmiennej %p\n", b, &b);
    printf("ponownie wartosc wskaznika wsk: %i i wartos wskaznika wsk2: %i", *wsk, *wsk2);
    return 0;
}

//przykład 3 (z kolokwium) //cnt
//free - deallocate memory block

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* f(float*a, float *b)
{
    int* c = malloc(sizeof(int));
    *c=(*a)*(*b);
    printf("adres w funkcji: %p", c);
    return c;
}

int main()
{
    float a=3.0, b=5.4;
    int *d = f(&a,&b);
    printf("\n wynik = %i, *d");
    printf("\n adres w mainie:%p\n",d);
    free(d);
    return 0;
}

//przykład 4
#include <stdio.h>
#include

int main()
{
    int a = 5;

    int *w1;
    int *w2;
    int *w3;
    w1=&a;
    w2=&a;
    w3=w2;

    printf("%i %i %i\n",*w1, *w2, *w3);
    *w1=8;
    //1l_bz...
}

//przykład 5

int main()
{
    unsigned int *t, i;
    int n=10;
    t=malloc(n*sizeof(unsigned int));
    //podstawienie 0-9
    for(i=0;i<n;i++){printf("%i - adres: %p\n", *(t+i),&t[i]);}
    printf("\n");
    //kl_z...
    //w pozostałych sizeof też zamienić na unsigned
}

//przykład 6

int main()
{
    unsigned int *t, *t2, i;
    int n=10;
    t = alloc(n, sizeof(unsigned int));

    for(i=0;i<n;i++)
    {
        printf("%i - adres: %p\n", *(t+i), &t[i]);
    }
    printf("\n");
    t2= (int*) realloc (t,n*2*sizeof(unsigned int));

    for (i=0; i<n*3; i++)
    {
        printf("%i - adres: %p\n",*(t2+i),&t[i]);
    }
    free(t2);

    return 0;
}

//zad 1

int mniejsza(unsigned int *a, unsigned int *b)
{
    if (*a>*b) return *b;
    else return *a;

}

int main()
{
    unsigned int a, b;
    scanf("%i%i",&a,&b);
    mniejsza(&a,&b);
    printf("%i", mniejsza(&a,&b));
    return 0;
}

//zad 2

int* mniejsza(unsigned int *a, unsigned int *b)
{
    if (*a>*b) return b;
    else return a;

}

int main()
{
    unsigned int a, b;
    scanf("%i%i",&a,&b);
    int *c=mniejsza(&a,&b); // czy musi być *c??
    printf("%i", *c);
    return 0;
}

//zad 3

void f3(unsigned int *a, unsigned int *b)
{
    c=*a;
    *a=*b;
    *b=c;

}

int main()
{
    unsigned a, b, c;
    scanf("%d%d",&a,&b);
    f3("%i%i",a,b);
    return 0;
}

//zad 4
void f3(unsigned int *a, unsigned int *b)
{
    if (*b<*a)
    {
        c=*a;
        *a=*b;
        *b=c;
    }

}

int main()
{
    unsigned a, b, c;
    scanf("%d%d",&a,&b);
    f3("%i%i",a,b);
    return 0;
}

//zad 5

int f5 (const int *i,const int *w )
{
    return *i+*w;
}

int main()
{
    const int x=1;
    const int y=z;
    printf("%d",f5(&x,&y));
}

//zad 6
void f6 (const int i,const int *w )
{
    (*w)=i;
}

int main()
{
    int i,w;
    scanf("%d%d",&i,&w);
    f6(i,&w);
    printf("%i",w);
    return 0;
}

//zad 7
#include <stdio.h>
#include <stdlib.h>
int *alokuj(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int *tab = alokuj(5);
    tab1[0] = 5;
    printf("Zad7 = %i\n", tab1[0]);
}

//zad 8

#include <stdio.h>
#include <stdlib.h>
int *alokuj(int n)
{
    return malloc(n*sizeof(int));
}

void zwolnij(int *tab)
{
    free(tab);
}

int main()
{
    int *tab = alokuj(5);
    tab1[0] = 5;
    printf("Zad7 = %i\n", tab1[0]);
    zwolnij(tab1);
    printf("Zad8 = %i\n", tab[0]);
}

//Zad 10

int f10(int* tab_in, int* tab_out, int n)
{
    int b=1;
    int j=1;
    tab_out [0] = tab_in[0];
    for (int i=1; i<n ; i++)
    {
        for (int k=0;k<j;k++)
        {
            if(tab_out[k]==tab_in[i])
            {
                b=0;
                break;
            }
        }
        if (b) tab_out [j++]=tab_in[i];
        b=1;
    }
    return j;
}

//4.2.17

/*
f4217(unsigned n, double tab[n])
{
    int m=0;
    int tab2[];
    for(int i=0;i<n;i++)
    {
        tab2[j] = tab[i]
}
*/

double f(int n, double*tab)
{
    double* wsk=malloc(n*sizeof(double));
    for (int i=0;i<n;i++)
        wsk[i]=tab[i];
    return wsk;
}
