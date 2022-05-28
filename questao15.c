#include <stdio.h>
const int MAX = 100000;

int main()
{
    int v[MAX], f[MAX];
    int n, i, j, menor, aux, cont, ha_impar;
    char c;
    n = 0;
    while (scanf("%d%c", &v[n], &c) > 0){
        n++;
    }

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

    ha_impar = 0;
    for (i = 0; i < n; i++) 
      f[i] = 0;

    for (i = 0; i < n; i++){
        cont = 1;
        for (j = i+1; j < n; j++){
            if (v[j] == v[i]){
                cont++;
                f[j] = -1;
            }
        }
        if (f[i] == 0){
            f[i] = cont;
            if (cont%2 != 0){
                ha_impar = 1;
                aux = v[i];
            }
        }
    }

    for (i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
  
    printf("\n");

    if (ha_impar){
        printf("%d\n", aux);
    }
    else{
        printf("0\n");
    }
  
    return 0;
}
