#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TAM 101
int main()
{
	int a[TAM], b[TAM], m, i, j, aux, achou;
  
	scanf("%d", &m);
  
	for (i=0; i<m; i++)
		scanf("%d", &a[i]);
  
	for (i=0; i<m; i++)
		scanf("%d", &b[i]);
	
	for (i=0; i<m; i++)
	{
		for (j=i+1; j<m; j++)
		{
			if (a[j] < a[i])
			{
				aux = a[j];
				a[j] = a[i];
				a[i] = aux;
			}
		}
	}

	
	for (i=0; i<m; i++)
	{
		if (i==0 || (i>0 && a[i]!=a[i-1]))
		{
			achou = 0; j = 0;
			while (j<m && !achou)
			{
				if (b[j] == a[i])
					achou = 1;
				j++;
			}
			if (achou)
				printf("%d\n", a[i]);
		}
	}
  
	return 0;		
}
