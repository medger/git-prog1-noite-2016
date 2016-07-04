#include <stdio.h>
//declarei a função
int fat(int n)
{
	if (n) 
  	  return n*fat(n-1);
	else return 1;
}
//fim da função 

int main()
{
	int n;
	printf("\n\nDigite um valor para n: ");
	scanf("%d", &n);
	printf("\nO fatorial de %d e' %d", n, fat(n));
	return 0;
}