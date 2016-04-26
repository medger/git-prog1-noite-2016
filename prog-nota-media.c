#include <stdio.h>

float main()

{
    float nota1, nota2, media;
    printf("\nQual foi sua nota?\n");
    scanf("%f %f",&nota1, &nota2);
    
    media=(nota1+nota2)/2;
    
    if (media<=5.0)
    {
        printf("\nReprovado\n");
    }
    
    else if(media<7)
    {
        printf("\nRecuperação!\n");
    }
    
    else
    {
        printf("\nAprovado\n");
    }
    
    return 0;
}