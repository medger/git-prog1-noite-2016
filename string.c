#include <stdio.h>
int main()

{
    char nome[20];
    float nota1, nota2, media;
    
    printf("\nDiga seu nome");
    scanf("\n%s", nome);
    
    printf("\nEntre com a nota AV1:");
    scanf("\n%f", &nota1);
    
    printf("\nEntre com a nota AV2:");
    scanf("\n%f", &nota2);
    
    media = nota1 + nota2/2;
    
    printf("\nOla %s, sua média é %.2f", nome, media);
    
    return 0;
    
    
}