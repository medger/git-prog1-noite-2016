#include <stdio.h>
int main()
{
	int lado, lin, col;
	printf("\nEntre com o lado:");
	scanf("%d", &lado);

	for(lin=1; lin<=lado; lin++)
	{
		for(col=1; col<=lado; col++)
		{
			if((lin==1) || (lin==lado) || (col==1) || (col==lado))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	
	}
	

return 0;
}