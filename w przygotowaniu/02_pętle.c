// 20171010

// liza.umcs.lublin.pl/~asasak
// PDF 2-1 & 3-2


// ZAD 6. Napisz program, który wczytuje ze standardowego wejścia współczynniki układu dwóch równań liniowych z dwoma niewiadomymi i wypisuje na standardowym wyjściu rozwiązanie układu równań (lub odpowiednią informacje w przypadku nieskończonej liczby lub braku rozwiązań).

// metodą wyznaczników // http://www.naukowiec.org/wiedza/matematyka/metoda-wyznacznikow_1320.html
// "często używana w programowaniu ... Rozwinięciem tej metody jest twierdzenie Cramera"

//ax+by=c
//dx+ey=f

#include <stdio.h>

int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

    float W=a*e-d*b;
    float Wx=c*e-f*b;
    float Wy=a*f-d*c;
    float x=Wx/W;
    float y=Wy/W;

    printf("x=%f , y=%f \n",x,y);

    if(W=0 && Wx=0 && Wy=0) printf("układ jest nieoznaczony, posiada nieskończenie wiele rozwiązań. ");
    if((W=0 && Wx!=0)||(W=0 && Wy!=0)) printf("to układ równań jest sprzeczny, czyli nie posiada rozwiązań");

    return 0;
}


// ZAD 8. Napisz program w którym, w zależności od wyboru użytkownika, przeliczysz podaną wartość Mil na kilometry, stopni Celsjusza na Fahrenheita, kilogramów na funty, litrów na galony, km/h na m/s. Wynik wyświetlić z dokładnością trzech miejsc po przecinku.

#include <stdio.h>

int main()
{
    int a;
    printf("podaj numer przelicznika jakiego chcesz użyć: \n 1. mile na kilometry \n 2. stopnie Celsjusza na Kelwiny \n 3,4,5...następne opcje w przygotowaniu \n");
    scanf("%d",&a);
    switch(a)
    {
    case 1: //nie w nawiasie, jak litera to w apostrof ' '
    {
        float mile,km;
        //printf
        scanf("%f",&mile);
        km=1.609*mile;
        printf("%f mil to %f km",mile,km);
    }
        break; //musi być poza klamrami danego case'a

    case 2:
    {
        float C,F;
        //printf
        scanf("%f",&C);
        F=C*9/5+32;
        printf("%f stopni Celsjusza to %f stopni Farenheita",C,F);
    }
        break;

    //case 3:........

    default:
        printf("wybrano nieobsługiwaną wartość");
    }
    return 0;
}

// pdf 3-2 ////////// ////////// //////////

// ZAD 1. Napisz program, który wczyta liczbę całkowitą (dodatnią) n, a następnie wypisze wszystkie liczby całkowite od n do 1 włącznie.

#include <stdio.h>

int main()
{
    unsigned n;
    printf("liczbę całkowitą (dodatnią) \n");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
        printf("%d \n",i);
    return 0;
}

// ZAD 2. Zmodyfikuj program ze wcześniejszego zadania tak, aby zamiast wypisywać liczby, sumował je i na końcu wypisał ostateczny wynik.

#include <stdio.h>

int main()
{
    unsigned n,suma=0;
    printf("liczbę całkowitą (dodatnią) \n");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
        suma+=i;
    printf("%d \n",suma);
    return 0;
}

