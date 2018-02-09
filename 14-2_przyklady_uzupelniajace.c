
// przykład 1. typedef

// przykłąd 2. enum

#include <stdio.h>

typedef enum {R = 4, W = 2, X = 1}chmod;
// 100, 010, 001
int main()
{
    int mod=R+X; //101

    printf("#o\n",mod);

    if(mod & R ) printf("readable\n");
    if(mod & W ) printf("writable\n");
    if(mod & X ) printf("executable\n");

    return 0;
}

// przykład 3. getline

#include <stdio.h>

int main()
{
    FILE fp;
    fp=fopen("file.txt","r");
    char *line=NULL;
    size_t size;
    while(1)
    {
        size=getline(&line, &size, fp);
        if(size==EOF)
            break;
        printf("%s",line);
    }
    free(line);
    fclose(fp);
    return 0;
}

