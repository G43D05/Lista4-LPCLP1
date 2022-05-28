#include <stdio.h>
#include <stdlib.h>
const int MAX = 1000;

int main()
{
    int n, i, j, maior, soma, menor, ponto;
    int v[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if (i==0 || v[i]>maior){
            maior = v[i];
        }
    }

    for (i = 1; i <= maior; i++){
        soma = 0;
        for (j = 0; j < n; j++){
            soma += abs(i-v[j]);
        }
        if (i==1 || soma<menor){
            menor = soma;
            ponto = i;
        }
    }

    printf("%d %d\n", menor, ponto);
    return 0;
}
