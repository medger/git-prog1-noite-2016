#include <stdio.h>
float media_lasalle (float av1, float av2, float av3)
{
    float media;
   
    if (av1>=av2 && av2>=av3)
        media = (av1+av2)/2;
        
    else if(av1>=av2 && av2<=av3)
        media =(av1+av3)/2;
    
    else
        media=(av2+av3) / 2;
    
    return media;
}

int main()
{
    float media, av1, av2, av3;
    
    printf("\nEntre com a av1\n");
    scanf("\n%f", &av1);
    printf("\nEntre com a av2\n");
    scanf("\n%f", &av2);
    printf("\nEntre com a av3\n");
    scanf("\n%f", &av3);
    
    media = media_lasalle(av1, av2, av3);
        
    printf("\nA média é %.2f", media);
    
    return 0;
}