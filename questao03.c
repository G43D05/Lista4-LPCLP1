#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TAM 10000

int main() {
    float v[TAM], soma=0, media;
    int i=0, qtd, maiores=0;
    
    scanf("%f", &v[i]);
    while (v[i] != -1)
    {
        soma += v[i];
        i++;
        scanf("%f", &v[i]);
    }
    
    qtd = i;
    
    media = soma / qtd;
    
    soma = 0;
    for (i=0; i<qtd; i++)
    {
        if (v[i] > media)
            maiores++;
        soma += pow(v[i]-media, 2);
    }
    
    soma = soma/(qtd-1);
    printf("%.2f\n", media);
    printf("%.2f\n", sqrt(soma));
    printf("%d\n", maiores);
    
    return 0;
}
