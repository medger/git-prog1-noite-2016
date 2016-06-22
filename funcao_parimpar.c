#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ehPar (int numero)
{
    if ((numero % 2)==0)//eh par
    {return 1;}
    else
    {return 0;}
}
int main()
{
    int i, num;
    srand ((unsigned)time(NULL));
    
    for(i=1;i<=10;i++)
    {
        num=rand() %100;
        printf("\nNumero %d: \t%d", i, num);
       
        if(ehPar(num))
        {printf("\t - é par");}
        else
        {printf("\t - é impar");}
    }

    return 0;
}