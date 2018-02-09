// 20180109

//przykład 1

#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen(*pliki1.txt,"r");
    if (fp==NULL)
    {
        printf("komunikat nieoficjalny:"); //zwykle wypisanie
        fprintf(stdout, "cos") //..........
    }
}

//przykład 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("plik1.txt", "w");
    int i;
    for(i=0;i<10;i++);
    {
        fprintf(fp,"%i",i);
    }

    fclose(fp);

    fp=fopen("plik1.txt", "r");
    char znak = getc( fp );
    while (znak != EOF)
    {
        printf("%c",znak);
        znak = getc( fp );
    }
    fclose(fp);
    return 0;
}


//przykład 3 //img

//przykład 4

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    fp=fopen("plik1.txt", "w");
    char burrer[100];
    int i;
    for(i=0;i<5;i++);
    {
        scanf("%s",buffer);
        fprintf(fp,"%s\n",buffer);
    }
    fclose(fp);

    fp=fopen("plik1.txt", "r");

    fscanf(fp,"%s",&buffer);
    printf("%s",buffer);

    fclose(fp);
    return 0;
}

//przykład 5

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    fp=fopen("plik1.txt", "w");
    char burrer[100];
    int i;
    for(i=0;i<5;i++);
    {
        //scanf("%s",buffer);
        fgets (buffer, 99, stdin);
        fprintf(fp,"%s\n",buffer);
    }
    fclose(fp);

    fp=fopen("plik1.txt", "r");

    while (fscnaf(fp,"%s",&buffer) !=EOF )
    {
        printf("%c",z);
    }

    fclose(fp);
    return 0;
}

//przykład 6?

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    fp=fopen("plik1.txt", "w");
    char burrer[100];
    int i;
    for(i=0;i<5;i++);
    {
        //scanf("%s",buffer);
        fgets (buffer, 99, stdin);
        fprintf(fp,"%s\n",buffer);
    }
    fclose(fp);

    fp=fopen("plik1.txt", "r");

    while (!feof(fp))
    {
        fgets(buffer, 99, fp);
        printf("%s",buffer);
    }

    fclose(fp);
    return 0;
}

// Pliki

// ZAD 1 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    FILE *fp2;
    if ((fp=fopen("plik1.txt","r"))==NULL)
    {
        printf ("Nie moge otworzyc pliku plik1.txt do odczytu\n");
        exit(1);
    }
    int iloscZnakow=0;
    int iloscSlow=0;
    int iloscZdan=0;

    int znak;
    znak = getc( fp );
    while( znak != EOF )
    {
        znak = getc( fp );
        if (znak !=' ')
            iloscZnakow++;
        if (znak ==' ')
            iloscSlow++;
        if (znak=='.')
            iloscZdan++;
    }
    if ((fp2=fopen("plik2.txt","w"))==NULL)
    {
        printf ("Nie moge otworzyc pliku plik2.txt\n");
        exit(1);
    }

    fprintf (fp2, "%s", "ilosc znakow: ");
    fprintf (fp2, "%i", iloscZnakow);
    fprintf (fp2, "%s", "ilosc slow: ");
    fprintf (fp2, "%i", iloscSlow);
    fprintf (fp2, "%s", "ilosc zdan: ");
    fprintf (fp2, "%i", iloscZdan);
    fclose(fp);
    fclose(fp2);
    return 0;
}

// ZAD 2

#include <stdio.h>
#include <stdlib.h>

double srednia(const char *nazwa)
{
    int suma=0;
    float wynik;
    FILE* fp;
    if ((fp=fopen(nazwa, "r"))==NULL
    {
            printf ("nie moge otworzyc pliku plik1.txt do odczytu\n");
            exit(1);
    }
    int liczba=0;
    //
}
;
//
//tab_
// ZAD 3
//...
