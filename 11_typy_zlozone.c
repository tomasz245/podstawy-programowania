// 20180102

// TYPY ZŁOŻONE

//przykład 1 na tab cośtam


// przykład 2

#include <stdio.h>

struct TypZlozony
{
    int a;
    float b;
    char c;
}; //musi być średnik po struct

void wyswietl(struct TypZlozony tz)
{
    printf ("a = %i, b = %f, c=%c \n",tz.a,tz.b,tz.c);
}

int main()
{
    struct TypZlozony tz;
    tz.a=1;
    tz.b=2.3;
    tz.c='a';
    wyswietl(tz);
    return 0;
}


//przykład 3

#include <stdio.h>
#include <stdlib.h>

struct TypZlozony
{
    int a;
    float b;
    char c;
};

void wyswietl(struct TypZlozony tz)
{
    printf ("a = %i, b = %f, c=%c \n",tz.a,tz.b,tz.c);
}

int main()
{
    struct TypZlozony *tz2;
    tz2=malloc(sizeof(struct TypZlozony));
    tz2->a=2;
    tz2->b=3.4;
    tz2->c='b';
    wyswietl(*tz2);
    free(tz2);
    return 0;
}

//  ZAD 1
// napisz strukturę trójkąt...

#include <stdio.h>

struct Trojkat
{
    int a;
    int b;
    int c;
};

int obwod(struct Trojkat tr)
{
    return tr.a+tr.b+tr.c;
}

void wyswietl(struct Trojkat tr)
{
    printf("a=%i, b=%i, c=%i \n",tr.a,tr.b,tr.c);
}

int main()
{
    struct Trojkat tr3;
    tr3.a=2;
    tr3.b=3;
    tr3.c=4;
    wyswietl(tr3);
    printf("obwod = %i \n",obwod(tr3));
    return 0;
}

// ZAD 2 //nwcd

#include <stdio.h>
#include <stdlib.h>

struct Trojkat
{
    int a;
    int b;
    int c;
};

int obwod(struct Trojkat tr)
{
    return tr.a+tr.b+tr.c;
}

void wyswietl(struct Trojkat tr)
{
    printf("a=%i, b=%i, c=%i \n",tr.a,tr.b,tr.c);
}
//część 2:
void przepisz(struct Trojkat tr1, struct Trojkat *tr2)
{
    tr2->a=tr1.a; //przepisuje zaw. tr1 na do zmiennej wskazywanej przez tr2
    tr2->b=tr1.b;
    tr2->c=tr1.c;
}

void wyswietl2(struct Trojkat *tr)
{
    printf("a=%i, b=%i, c=%i",tr->a,tr->b,tr->c); //printf wskaznika na zmienną typu struct
}

int main()
{
    struct Trojkat tr1;
    tr1.a=2;tr1.b=3;tr1.c=3;
    struct Trojkat *tr2;
    tr2 = (struct Trojkat *) malloc(sizeof(struct Trojkat));
    wyswietl(tr1);
    printf("\nobwod %i \n",obwod(tr1));
    przepisz(tr1,tr2);
    wyswietl2(tr2);
    free(tr2);
    return 0;
}

// ZAD 3

double najmniejszaOdleglosc(int n,struct Punkt tab[n])
{
    double min=sqrt(pow(tab[0].x-tab[1].x,2.0)
            +pow(tab[0].y-tab[1].y,2.0)
            +pow(tab[0].z-tab[1].z,2.0));
    double localMin;
    int i,j;
    for(j=0;j<n;j++)
        for(i=j+1;i<n;i++)
        {
            localMin =
            (float)sqrt((float)pow(tab[i].x-tab[j].x),2.0)
                    +(float)pow(tab[i].y)///////
        }
}

int main()
{
struct Punkt p1;
p1.x=1;
p1.y=3;
p1.z=3;
struct Punkt p2;
p2.x=2;
p2.y=4;
p2.z=14;
struct Punkt p3;
p3.x=3;
p3.y=4;
p3.z=8;
struct Punkt p4;
p4.x=0;
p4.y=0;
p4.z=34;
struct Punkt p5;
p5.x=0;
p5.y=0;
p5.z=44;

wyswietl(p);

struct Punkt tab [5]={p,p2,p3,p4,p5};
for(int i=0;i<5;i++)
{
    wyswietl(tab[i]);
}
printf("\nodleglosc %f",najmniejsza0odleglosc(5,tab));
struct Punkt tab2[5];
zad4(tab,tab2,5);
printf("\nodleglosc %f",najmniejsza0odleglosc(5,tab2));

return 0;
}

// ZAD 4

// ZAD 5

void przepisz(struct Punkt10 tab1[], struct Punkt10 tab2[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}

void wyswietl(struct Punkt10 tab[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<10;j++)
        {
            printf("%i",tab[i].wymiar[j]);
        }
        printf("\n");
}

int main()
{
    int i;
    for (i=0;i<10:i++)
    {
        p.wymiar[i]=i;
    }
    struct Punkt10 tab1[10];
    for(i=0;i<10:i++)
    {
        tab1[i]=p;
    }
    struct Punkt10 tab2[10];
}

// ZAD

struct Punktn tab1[10];
for (i=0;i<n;i++)
{
    i%3==0//
}

// ZAD 9

struct Zespolone
{
    double re;
    double im;
};//

int main()
{
    struct Zespolone *z1;
    z1 = malloc(sizeof(struct Zespolone));
    struct Zespolone *z2;
    z2 = malloc(sizeof(struct Zespolone));

    z1->im = 2;
    z1->re=5;

    z2->im = 12;
    z2->re = 15;
}

// ZAD 10

struct zmiennoprzecinkowa zp1
{
    float a;
};

struct zmiennoprzecinkowa zp2
{
    float b;
};

int main()
{

}
