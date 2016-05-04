#include <stdio.h>
int main()
{
    int i;
    printf("\nDigite um número de 1 a 10\n");
    scanf("%d", &i);

    while (i>10 || i<0)
    {
        printf("\nDigite um número entre 1 a 10\n");
        scanf("%d", &i);
    }
    
    return 0;
}