#include <stdio.h>
const int MAX = 1000;

int main()
{
    int n, i, j, ind_menor, aux, cont;
    int v[MAX], v2[MAX];
  
    scanf("%d", &n);
  
    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
        v2[i] = v[i];
    }

    for (i = 0; i < n-1; i++){
        ind_menor = i;
        for (j = i+1; j < n; j++){
            if (v2[j] < v2[ind_menor]){
                ind_menor = j;
            }
        }
        if (ind_menor != i){
            aux = v2[ind_menor];
            v2[ind_menor] = v2[i];
            v2[i] = aux;
        }
    }

    cont = 0;
    for (i = 0; i < n; i++){
        if (v[i] == v2[i]){
            cont++;
        }
    }
  
    printf("%d\n", cont);

    for (i = 0; i < n; i++){
        if (v[i] == v2[i]){
            printf("%d %d\n", v[i], i+1);
        }
    }
  
    return 0;
}
