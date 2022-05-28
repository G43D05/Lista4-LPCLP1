#include <stdio.h>

#define MAX 15
#define TAM 5

void incluir(int *p, int *n, int x)
{
	int qtd;
	qtd = *n;
	*(p+qtd) = x;
	*n = qtd+1;
}

void mostrar(int *p, int n, char *texto)
{
	int i;
	for (i=0; i<n; i++)
		printf("%s[%d] = %d\n", texto, i, *(p+i));
}

int main()
{
	int v[MAX], vPar[TAM], vImpar[TAM], nPar, nImpar;
	int i;

	for(i = 0; i < MAX; i++)
		scanf("%d", &v[i]);

	nPar = nImpar = 0;
	for (i = 0; i < MAX; i++)
	{
		if (v[i] % 2)
		{
			incluir(vImpar, &nImpar, v[i]);
			if(nImpar == TAM)
			{
				mostrar(vImpar, nImpar, "impar");
				nImpar = 0;
			}
		}
		else
		{
			//vPar[nPar++] = v[i];
			incluir(vPar, &nPar, v[i]);
			if(nPar == TAM)
			{
				mostrar(vPar, nPar, "par");
				nPar = 0;
			}
		}
	}

	mostrar(vImpar, nImpar, "impar");
	mostrar(vPar, nPar, "par");

	return 0;
}
