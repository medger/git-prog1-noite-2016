#include <stdio.h>

int main()


{
    int i, j, multi;
    printf("\nDigite um número de 1 a 10.");
    printf("\n_______________\n");
    scanf("%d", &j);
    
    for (i=1; i<=10; i++)
       {
           multi=j*i;
           printf("\n%dx%d=%d", j, i, multi);
       }
       
    return 0;
}