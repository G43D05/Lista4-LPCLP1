#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    double media = .0, soma = .0;

    scanf("%d", &n);
    double notas[n], pesos[n];

    for (int i = 0; i < n; i++)
        scanf("%lf", &notas[i]);

    for (int i = 0; i < n; i++)
        scanf("%lf", &pesos[i]);

    for (int i = 0; i < n; i++){

        media += (notas[i] * pesos[i]);
        soma += pesos[i];

    }

    media = media / soma;

    printf("%.2lf", media);

    return 0;
}
