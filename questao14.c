#include <stdio.h>
const int MAX = 1000;

int main()
{
    int v[MAX], f[MAX];
    int c, n, x, y, i, j, menor, aux, cont, maior_frequencia;
    double soma, media, mediana;
  
    scanf("%d", &c);
  
    for (x = 0; x < c; x++){
        scanf("%d", &n);
        soma = 0;
        for (y = 0; y < n; y++){
            scanf("%d", &v[y]);
            soma += v[y];
        }
      
       media = soma / n;

       for (i = 0; i < n-1; i++){
            menor = i;
            for (j = i+1; j < n; j++){
                if (v[j] < v[menor]){
                    menor = j;
                }
            }
            if (menor != i){
                aux = v[menor];
                v[menor] = v[i];
                v[i] = aux;
            }
        }

        printf("sequencia %d:\n", x+1);

        for (i = 0; i < n; i++){
            if (i > 0){
            }
            printf("%d ", v[i]);
        }
        printf("\n");

        printf("%d %d\n", v[0], v[n-1]);

        printf("%g\n", media);


        for (i = 0; i < n; i++){
            f[i] = 0;
        }

        maior_frequencia = 1;
        for (i = 0; i < n-1; i++){
            cont = 1;
            for (j = i+1; j < n; j++){
                if (v[j] == v[i]){
                    cont++;
                    f[j] = -1;
                }
            }
            if (f[i] == 0){
                f[i] = cont;

                if (cont > maior_frequencia){
                    maior_frequencia = cont;
                }
            }
        }

        if (maior_frequencia > 1){
            aux = 0;
            for (i = 0; i < n; i++){
                if (f[i] == maior_frequencia){
                    if (aux > 0){
                        //printf(" ");
                    }
                    printf("%d ", v[i]);
                    aux++;
                }
            }
        }
        printf("\n");

        if (n % 2 == 0){
            mediana = (v[n/2 - 1] + v[n/2]) / 2.0;
        }
        else{
            mediana = v[n/2];
        }
        printf("%g\n", mediana);

    }
    return 0;
}
