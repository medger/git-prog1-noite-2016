#include <stdio.h>

int main()

{
    int i, multi;
    printf("\nTabuada do nº 7");
    printf("\n_______________\n");
    for (i=1; i<=10; i++)
       {
           multi=7*i;
           printf("\n7x%d=%d", i, multi);
       }
       
    return 0;
}