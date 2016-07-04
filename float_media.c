#include <stdio.h>


float media_lasalle(float av1, float av2, float av3)
{
    float media;
    media = (av1+av2+av3) /3;
    return media;
}

int main()
{
    float av1, av2, av3, media;
    printf("Entre com a av1");
    scanf("%f", &av1);
    printf("Entre com a av2");
    scanf("%f", &av2);
    printf("Entre com a av3");
    scanf("%f", &av3);
    
    media = media_lasalle(av1, av2, av3);
    
    
    printf("\nMedia = %.2f", media);
    
    return 0;
    
}