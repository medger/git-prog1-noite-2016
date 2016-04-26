#include <stdio.h>

int main()

{
    int hora;
    printf("Que horas são?\n");
    scanf("%d", &hora);
    
    if (hora<12)
    {
        printf("\nEntão, Bom dia!\n");
    }
    else if (hora<18)
    {
        printf("\nBoa tarde\n");
    }
    else if (hora<=24)
    {
        printf("\nBoa noite\n");
    }
    
    return 0;
}