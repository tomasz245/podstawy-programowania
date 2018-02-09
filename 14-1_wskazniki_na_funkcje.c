// 20180123

// przykład 1
// https://pl.wikibooks.org/wiki/C/Wskaźniki_-_więcej

#include <stdio.h>

 int suma (int lhs, int rhs)
 {
   return lhs+rhs;
 }

 int main ()
 {
   int (*wsk_suma)(int a, int b);
   wsk_suma = suma;
   printf("4+5=%d\n", wsk_suma(4,5));
   return 0;
 }

 // ZAD 1

 #include <stdio.h>

 int add(int a, int b)
 {
     return a+b;
 }

 int sub(int a, int b)
 {
     return a-b;
 }

 int main()
 {
     int (*fun)(int, int);
     fun=add;
     printf("%d\n",fun(10,2));
     fun=sub;
     printf("%d\n",fun(10,2));
     return 0;
 }

 // ZAD 2

 int add(int a, int b)
 {
     return a+b;
 }

 int sub(int a, int b)
 {
     return a-b;
 }

 int main()
 {
     int (*fun[4])(int, int);
     funn[0]=add;
     funn[1]=add;
     funn[2]=sub;
     funn[3]=sub;
     int result=0;
     int arr[4]={100,50,25,5};

     int i;
     for(i=0; i<4;i++)
     {
         result=fun[i](result,arr[i]);
         printf("%d\n",result);
     }
     return 0;
 }

 // ZAD 3

int min(int a, int b)
{
    return a < b ? a : b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int extreme(int arr[],int n, int (*fun)(int n, int n))
{
    int ex=arr[0];
    int i;
    for( i=1; i<n ; i++)
    {
        ex=fun(ex,arr[i]);
    }
    return ex;
}

int main()
{
    int arr[4]={5,20,3,8};
    printf("%d\n",extreme(arr,4,min));
    printf("%d\n",extreme(arr,4,max));
    return 0;
}

// https://pl.wikibooks.org/wiki/C/qsort

/*

#include <stdio.h>
#include <stdlib.h>

// Porównywacz
int my_compare (const void * a, const void * b)
{
    int _a = *(int*)a;  //piewrwsza gwiazdka to wyłuskanie, druga to rzutowanie
    int _b = *(int*)b;
    if(_a < _b) return -1;
    else if(_a == _b) return 0;
    else return 1;
}

int main ()
{
    int i;
    int ile;
    int *tablica;

    puts("Podaj ile bedziesz wprowadzal wartosci: ");
    scanf("%d", &ile);

    tablica= malloc(ile * sizeof(int) );

    for (i=0; i<ile; ++i)
    {
        printf("Podaj %d liczbe: ", i+1);
        scanf("%d", &tablica[i]);
    }

    puts("\n\n");   //przerwa miedzy liczbamy podanymi a liczbami wyswietlonymi

    qsort(tablica, ile, sizeof(int), my_compare);

    for(i=0; i<ile; ++i)
        printf("%d\n", tablica[i]);

    free(tablica);

    return 0;
}

*/

// ZAD 4 //dd

#include <stdio.h>
#include <stdlib.h>

int min(const void *a, const void *b)
{
    int av = *(int*)a;
    int bv = *(int*)b;
    if(av < bv) return -1;
    else if(av==bv) return 0;
    else return 1;
}

int max(const void *a, const void *b)
{

}
//...

// ZAD 5

#include <stdio.h>
typedef struct Point
{
    float x, y;
    void(*move)(struct Point *, float, float); //wskaznik na funkcje (*move)
}Point; //alias (w mainie nie trzeba pisać "Struct Point")

void movePoint(Point *p, float tx, float ty)
{
    p->x+=tx;
    p->y+=ty;
}

int main()
{
    Point p={3,5};
    p.move=movePoint;
    p.move(&p,10,20);
    printf("%.0f %.0f", p.x, p.y);
    return 0;
}

// ZAD 6 //tylko dok float min
//https://pl.wikipedia.org/wiki/Przestrzeń_metryczna#Metryka_euklidesowa

#include <stdio.h>
#include <math.h>

struct Punkt
{
    int x,y;
}p1={1,2},p2={4,5};

struct Odcinek
{
    struct Punkt o1;
    struct Punkt o2;
};

float euklides(struct Odcinek o)
{
    return sqrt((pow(o.o1x - o.o2.x,2))+(pow(o.o1.y - o.o2.y,2)));
}

float miejska(struct Odcinek o)
{
    return abs(o.o1.x - o.o2.x)+abs(o.o1.y - o.o2.y);
}

float min(struct Punkt *tabP,int rozmiar, float (*fun)(struct//.... ))
{
    struct Odcinek o;
    o.o1 = tabP[0];
    o.o2 = tabP[1];
    float minimum = fun(o);
    int i,j;
    for(i=0;i<rozmiar;i++)
    {
        for(j=i+1;j<rozmiar;j++)
        {
            o.o1=tabP[i];
            o.o2=tabP[j];
            if(fun(o) < minimum)
            {
                minimum = fun(o);
            }
        }
    }
    return minimum;
}


int main()
{
    int rozmiar = 10;
    int i;
    struct Punkt tabP[rozmiar];
    for (i=0;i<rozmiar;i++)
    {
        tabP[i].x=i+2;
        tabP[i].y=i+3;
    }

    printf("euklides = %f\n",min(tabP,rozmiar,euklides));
    printf("miejska = %f\n", min(tabP,rozmiar,miejska));
    return 0;
}


// ZAD* Sortowanie napisów względem ilości samogłosek przy użyciu funkcji qsort. Napisy z największą ilością samogłosek na samej górze
