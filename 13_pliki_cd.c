// 20180116

/*
 * PLIKI BINARNE
 * fread
 * fwrite
 * OPERATORY BITOWE (BITWISE OPERATOR)
 * POLA BITOWE
 *
 *
 *
*/

// ZAD 1


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wypisz(const char * nazwa, const char * napis)
{
    FILE * plik = fopen( nazwa , "wb" );
    fwrite( napis, sizeof(int), 1, plik);
    fclose ( plik );
}

void wyswietl(const char * nazwa)
{
    FILE * plik = fopen( nazwa, "rb" );
    char bufor [500];
    int bajty = fread( bufor, sizeof ( char ), 500, plik);
    printf( "Zawartosc bufora: %s\n", bufor);
    fclose ( plik );

}

bool wyswietl ( const char * nazwa)
{
    FILE * plik = fopen( nazwa, "rb");
    if ( !plik )
        return false;
    const int ile = 500;
    char bufor [ ile ];
    int bajty = fread( bufor, sizeof( char ), ile, plik );
    if (bajty != ile)
        printf( " bufor nie zostal zapelniony\n" );
    printf ("Zawartosc bufora w bajtach: %i\n",bajty);
    printf( "Zawartosc bufora: %s\n",bufor);
    fclose(plik);
    return true;
}

/*int main()
{
    wypisz(plik.txt, napis);
    wyswietl()
}
*/

// ZAD 2
// nd

int main()
{
    FILE * fp;
    char c[] = "to jest trudne zadanie";
    char buffer[100];
    fp = fopen("file.txt", "w+b");
    fwrite(c, strlen(c)+1, 1, fp);
    fseek(fp, 0, SEEK_SET);
    fread(buffer, strlen(c)+1, 1, fp);
    printf("%s\n", buffer);
    printf("pozycja aktualna: %i\n",ftell (fp));
    fseek (fp, -15, SEEK_CUR);
    fputs( "latwe" , fp );
    printf("zmiana pozycji na: %i\n", ftell (fp));
    fseek(fp, 0, SEEK_SET);
    fread(buffer, strlen(c)+1, 1, fp);
    printf("%s\n", buffer);
    fseek(fp, 0, SEEK_END);
    printf("ostatnia pozycja to: %i\n",ftell(fp));
    fclose(fp);
}

// ZAD 3
#include <stdio.h>
#include <stdlib.h>

struct Punkt3d
{
    int x;
    int y;
    int z;
};

struct Punkt3d p1= {1,2,3};
struct Punkt3d p1Kopia;
//struct Punkt p2 = {4,5,6};
//struct Punkt3d p3 = {7,8,9};

int main()
{
    FILE* f = fopen("punkty.bin", "wb");
    fwrite(&p1, sizeof(struct Punkt3d),1,f);
    fclose(f);
    f = fopen("punkty.txt", "rb");
    fread(&p1Kopia, sizeof(struct Punkt3d), 1, f);

    printf("%i\n",p1Kopia.x);
    printf("%i\n",p1Kopia.y);
    printf("%i\n",p1Kopia.z);

    return 0;
}

// ZAD 4

#include <stdio.h>
#include <stdlib.h>

struct Punkt3d
{
    int x;
    int y;
    int z;
};

struct Punkt3d p1= {1,2,3};
struct Punkt3d p1Kopia;
struct Punkt3d p2 = {4,5,6};
//struct Punkt3d p3 = {7,8,9};


int main()
{
    FILE* f = fopen("punkty.bin", "wb");
    fwrite(&p1, sizeof(struct Punkt3d),1,f);
    fwrite(&p2, sizeof(struct Punkt3d),1,f);
    fclose(f);
    f = fopen("punkty.txt", "rb");
    fread(&p1Kopia, sizeof(struct Punkt3d), 1, f);
    printf("Pierwsza przeczytana struktura: \n");
    printf("%i\n",p1Kopia.x);
    printf("%i\n",p1Kopia.y);
    printf("%i\n",p1Kopia.z);
    printf("pozycja w pliku: %i\n",ftell (f));
    fread(&kopia, sizeof(struct Punkt3d). 1. f);
    printf("Druga przeczytana struktura: \n");
    printf("%i\n",kopia.x);
    return 0;
}

// ZAD 5
//nd
#include <stdio.h>

int main()
{
    int n=5;
    int m=12;
    printf("and 0101, 1100 = 0100 \n");
    printf("%d\n",n & m);
    printf("or 0101, 1100 = 1101 \n");
    printf("%d\n", n | m);
    printf("xor 0101, 1100 = 1001 \n")
    printf("%d\n", ...);
    .....;

}

// ZAD 6
#include <stdio.h>

char check (int value)
{
    printf("%i\n",value);
    printf("%i\n",value-1);
    return !(value & (value-1));
}

int main()
{
    printf("%d", check(33));
    return 0;
}

//ZAD 7
//nd
void swap (int *x, int *y)
{
    if (x != y)
        *x ^= *y;
    printf("x=%i, y=%i \n", *x, *y);
    *y ^= *x;
    printf("x=%i...");
    *x ^= *y;
    printf("x=%i");
    ...;
}


//ZAD 8
int main()
{

}

// ZAD 9 - przykłady

void f2()
{
    int szestnastkowo=0x5B;
    unsigned char decymalnie=szesnastkowo;

    printf("wartosc 0x5B decymalnie\n");
    printf("%u",decymalnie);

    szesnastkowo=0;
    szesnastkowo |= decymalnie;
    printf ("\nwartosc 91 szesnastkowo");
    printf("\n%x",szesnastkowo);
}

void f3()
{
    int szes
}

void f5()
{
    int szesnastkowo=0x5BAB;
    unsigned int decymalnie=(szesastkowo & 0xFF00) >> 8;
    printf("\nwartosc 0x5B decymalnie");
    printf("\n%u",decymalnie);

    szesnastkowo=0;
    szesnastkowo |= decymalnie;
    printf ("\nwartosc 91 szesnastkowo");
    printf("\n%x",szesnastkowo);
}

//...tyle przykładów

// ZAD 9

int main()
{
    int color=0x5B90B7;
    unsigned char b=color & 0xFF;
    unsigned char g=(color & 0xFF00) >> 8;
    unsigned char r=(color & 0xFF0000) >> 16;
    ...;
}

/* flag.ujemne = 1 if -> l<0
 * flag.przeszuk? = 1 if -> l < LONG_MIN ; i=LONG_MIN
 *
*/


// ZAD 10
#include <stdio.h>
#include <limits.h>

struct bitowe
{
    unsigned int p1 :1;
    unsigned int p2 :1;
} flag;

int main()
{
    long liczba = -811425114251221228411;
    if( liczba < 0); flag.ujemna=1;
    if( liczba < LONG_MIN ) flag.pozaZakresem=1;
    if( flag.pozaZakresem ) liczba = LONG_MIN;

    printf("%s: %d", ( flag ujemna ? "liczba ujemna" : "liczba ..."));
    return 0;
}
