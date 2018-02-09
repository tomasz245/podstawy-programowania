//przykład 1

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char znak1='A';
    char znak2='B';
    if(znak1==znak2)
        printf("A = B\n");
    else
        printf("A w ASCI nie jest rowne B");
    return 0;
}


//przykład 2

#include <stdio.h>

int main()
{
    char odpowiedz;
    printf("Czy uruchomic programy? [T/N]");
    scanf("%c",&odpowiedz);
    if(odpowiedz == 'T')
        printf("Tak\n");
    else
        printf("Nie\n");
    return 0;
}


//przykład 3

#include <stdio.h>

//operacje na cyfrach i literach
int main()
{
    char cyfra = '3';
    int liczba = cyfra - '0';
    liczba *=2;
    cyfra = liczba + '0';
    printf("%c\n",cyfra);
    return 0;
}


//przykład 4

#include <stdio.h>

//wczytywanie i wypisywanie napisow
int main()
{
    char t[100]; gets(t); printf("%s\n",t);
    char t2[100]; scanf("%s",&t2); printf("%s\n",t2);
    puts(t2);
    puts(t);
    return 0;
}

//ZAD 1

#include <stdio.h>

int funkcja (char *napis);
{
    int licznik = 0;
    for (int i=0;napis[i] !='\0';i++)
        licznik=licznik+1;
    return licznik;
}

int main()
{
    char napis[100];
    printf("podaj napis\n");
    .
    .
    .
    return 0;
}


/*

  int dlugosc(char *napis)
  {
  //strlen(napis);
  int i = 0;
  int counter = 0;
  // NULL lub '\0'
  while(napis[i] !='\0'
  {
  counter++;
  i++;
  }
  return counter;
*/


//ZAD 2 chyba nd

#include <stdio.h>

void funkcja (char *napis, char napis);
{
    int a,i;
    a=strlen(napis1)-1;
    for (int i=0;napis[i] !='\0',i++)
    {
        napis[a-i]=napis1[i];
        napis2[a+1]='\0';
    }
}

int main()
{
    char napis1[];
    char napis2[strlen(napis1)+1];
    return 0;
}


//ZAD 3 cnt

#include <stdio.h>

void funkcja (char *napis)
{
    a=strlen(napis1)-1; i<=a/2;
    for(int i=0;napis[i]!='\0')
        .
        .
        .

}
//dd
int main()
{

    printf("Hello World!\n");
    return 0;
}


//ZAD 4

#include <stdio.h>

int funkcja(char*napis)
{
    int licznik=1;
    for (int i=0;napis[i]!='0\';i++)
    {
         if (napis[i]==' '})
         licznik = licznik + 1;
}
         return licznik;
}

int main()
{
         char napis[30];
         printf("podaj slowa");
         gets(napis);
         printf("%i",funkcja(napis));
         return 0;
}
