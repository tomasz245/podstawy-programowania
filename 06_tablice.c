// TABLICE

// PDF 6-2

// ZAD 1

#include <stdio.h>

void f1(int n,int tab[n])
{
    for (int i=0;i<n;i++)
        tab[i]=0;
}


int main()
{
    int tab[5]={1,2,3,4,5}; //podajemy wartości el. tablicy żeby było co zerować
    f1(5,tab);
    for(int i=0;i<5;i++) printf("%i\n",tab[i]);
    return 0;
}


// ZAD 2

#include <stdio.h>

void f2(int n,int tab[n])
{
    for (int i=0;i<n;i++)
            tab[i]*=2;
}


int main()
{
    //nie ma deklaracji n
    int tab[5]={1,2,3,4,5};
    f2(5,tab);
    for(int i=0;i<5;i++)
        printf("%i\n",tab[i]);
    return 0;
}


// ZAD 3 bk

#include <stdio.h>

int f3(int n,int tab[n])
{
    int suma=0;
    for (int i=0;i<n;i++)
            suma+=tab[i];
    return suma;
}

int main()
{
    int tab[5]={1,2,3,4,5};
    printf("%i\n",f3(5,tab));
}

// ZAD 4

#include <stdio.h>

int f4(int n,int tab[n])
{
    int iloczyn=0;
    for (int i=0;i<n;i++)
            iloczyn*=tab[i];
    return iloczyn;
}

int main()
{
    int tab[5]={1,2,3,4,5};
    printf("%i\n",f4(5,tab));
    return 0;
}

// ZAD 5

#include <stdio.h>

int f5(int n,int tab[n])
{
    int suma=0;
    for (int i=0;i<n;i+=2) // niecodzienna inkrementacja
            suma+=tab[i];
    return suma;
}

int main()
{
    int tab[5]={1,2,3,4,5};
    printf("%i\n",f5(5,tab));
    return 0;
}

/* ?? jaka pętla żeby wyświetlał kolejne wartości sumy?
int main()
{
    int tab[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
        printf("%i\n",f5(5,tab));//??
    return 0;
}
*/

// ZAD 6

#include <stdio.h>

int f6(int n,int tab[n])
{
    int suma;
    float srednia;
    for (int i=0;i<n;i++)
        suma+=tab[i];
        srednia=(float)suma/n;
    return srednia;
}

/*
int main()
{
int tab[5]={1,2,3,4,5};
f6(5,tab);
for(int i=0;i<5;i++)
    printf("%i\n",tab[i]); //??
    return 0;
}
*/

// ZAD 7

