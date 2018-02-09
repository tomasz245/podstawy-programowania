//Funkcje napisowe i pamięciowe
//warto zapamiętać: stringcopy, memcopy, kontrkatelacja?

//http://www.cplusplus.com/reference/cstring/memmove/
/* strlen - mierzy długość napisów
 * StrCpy
 * strncpy
 * fgets
 * Strcat - konkatencja napisów
 * strncat
*/

//przykład bezpieczne wczytywanie napisu:
#include <stdio.h>
int main()
{
    char nazwa[50];
    fgets(nazwa,49,stdin);
    printf("%s",nazwa);
    return 0;
}



//Zad 1 Strcat
//gdzie strlen(wsk)

#include <stdio.h>
#include <stdlib.h>

char *f1(char *tab,char *tab2)
{
    char *wsk=malloc((strlen(tab)+strlen(tab2)+1)*sizeof(char));
    wsk[0]='10';
    strcpy(wsk,tab);
    return wsk;
}

int main()
{
    char tab[]="ALA"; //rozmiar 4
    char tab2[]="MA KOTA";
    char *x=f1(tab,tab2);
    printf("%s",x);
    free(x);
}




//Zad2 Strncat

#include <stdio.h>
#include <stdlib.h>

char *f1(char *tab,char *tab2)
{
    char *wsk;
    if (strlen(tab)>=strlen(tab2))
    {
        wsk=malloc((strlen(tab)+strlen(tab2)+1)*sizeof(char));
        wsk[0]='10';
        strcpy(wsk,tab);
        strcat(wsk,tab2);
    }
        else
    {
        wsk=malloc((2*strlen(tab)+1)*sizeof(char));
        wsk[0]='\0';
        strcpy(wsk,tab);
    }
    strcat(wsk,tab2,strlen(tab)); wsk[2*strlen(tab)+1]='\0';
    return wsk;
}

int main()
{
    char tab[]="ALA"; //rozmiar 4
    char tab2[]="MA KOTA";
    char *x=f1(tab,tab2);
    printf("%s",x);
    free(x);
}


//Zad4 Strpbrk
#include <stdio.h>
#include <stdlib.h>

int f4(char* str, char* tab2)
{
    int z=0;
    char *samogloski = strpbrk(str, tab2);
    while(samogloski != NULL)
    {
        printf("%c",*samogloski);
        samogloski=strpbrk(samogloski+1,tab2);
        z++;
    }
    return z;
}

int main()
{
    char tab[]="ALA MA KOTA";
    char tab2[]="aieou";
    char *x=f4(tab,tab2);
    printf("%s",x);
    free(x);
}



//ZadX Memcpy

/*przykład

char *napis='Ala ma kota';
char kopia[6];
memcpy(kopia,napis,5);
puts(kopia);

*/


int main()
{
    printf("sizeof int: %lu \n sizeof char: %lu \n",sizeof);//...
    int tab[5]={1,2,3,4,5};
    int kopia[5]={11,12,13,14,15};
    memcpy ((int*)kopia, (int*)tab, 3*sizeof(int));
    for (int i=0;i<5;i++)
        printf("%i",kopia[i]);
    return 0;
}

}

//Zad6 Memmove

/*przykład
void f6(char *str3, int gdzie, int co, int ile)
{
    //str3 = realloc(str3,200);
    memmove (str3+gdzie,str3+co,ile);
    str3[gdzie+ile]='\0';
    puts(str3);
}

*/

void f6(char *str, int gdzie, int co, int ile)
{
    if(gdzie+ile > strlen(str))
    {
        str realloc(str, gdzie+ile+1);
    }
    else
    {
        str = realloc (str, strlen(str));
    }
    memmove (str+gdzie,str+co,ile);
    puts(str);
}


//Zad7 Memcmp
//http://www.cplusplus.com/reference/cstring/memcmp/

#include <stdio.h>
#include <string.h>

int main ()
{
  char buffer1[] = "ala ma kota";
  char buffer2[] = "ala ma psa";

  int n;
  int x=1;
  n=memcmp ( buffer1, buffer2, x*sizeof(char) );

  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
  else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

  return 0;
}

/*next:
malloc, realloc, wskaźniki i adresy, 
poczytać: wskaźnik NULL, stałe wsk i wsk na stałe
*/
