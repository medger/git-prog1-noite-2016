#include <stdio.h>
int main()
{
    int ano, idade;
    printf("\nEm que ano você nasceu?\n");
    scanf("%d", &ano);
        
    idade = 2016 - ano;
        
    printf("\nSua idade é %d", idade);
   
return 0;
}