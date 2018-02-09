// 20171009

// liza.umcs.lublin.pl/~asasak
// PDF 1-1

// ZAD 1. obliczenie pola trójkąta o wczytanych wymiarach

#include <stdio.h>

int main()
{
    float a,h,pole;
    printf("podaj długość podstawy a i wysokość h\n");
    scanf ("%f%f",&a,&h);
    pole=0.5*(a*h); //musi być kropka, nie przecinek // pole=0,5*(a*h);
    printf("pole trójkąta wynosi %f\n", pole);
    return 0;
}

/*
#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%i%i%i",&a&b&c); //brak przecinków przy ampresandzie, źle specyfikator formatowania
    float pole=0,5*(a*b); //źle przecinek
    printf("%f",pole);
    return 0;
}
*/


// ZAD 2. sprawdzenie czy z odcinków o podanych długościach da się zbudowad trójkąt

#include <stdio.h>

int main()
{   int a,b,c;
    scanf ("%d%d%d" ,&a,&b,&c);
    if ((a+b>c)&&(a+c>b)&&(c+b>a)) {
        printf("podane zmienne tworzą trójkąt\n");
    }else{
        printf("Podane zmienne nie tworzą trójkąta");
        }
    return 0;
}

// ZAD 3. obliczenie średniej arytmetycznej trzech wczytanych liczb

#include <stdio.h>

int main ()
{
    int a,b,c;
    float srednia;
    printf("podaj 3 liczby do wyliczenia średniej arytmetycznej \n");
    scanf("%d%d%d",&a,&b,&c);
    srednia=(a+b+c)/3.0; //przecinek must be  żeby wynik nie był uśredniony
    printf("średnia arytmetyczna tych 3 liczb wynosi %f \n",srednia);
    return 0;
}

// ZAD 4. sprawdzenie parzystości wczytanej liczby

#include <stdio.h>

int main()
{
    int a;
    printf("Podaj liczbę\n");
    scanf("%d",&a);
    if(a%2 ==0) {
        printf("Parzysta\n");
    }else{
        printf("Nieparzysta\n");
    }
    return 0;
}
