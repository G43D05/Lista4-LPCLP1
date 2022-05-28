#include <stdio.h>
const int MAX = 40;

int main()
{
    int n, i, j, d, achou, p4, qtd_impar, tem_primo, aux;
    int m[MAX];
  
    scanf("%d", &n);
    scanf("%d", &d);
  
    qtd_impar = 0;
    tem_primo = 0;
    for (i = 0; i < n; i++){
        scanf("%d", &m[i]);

        if (m[i]%2 != 0) qtd_impar++;

        if (!tem_primo){
            aux = 0;
            for (j = 1; j <= m[i]; j++){
                if (m[i]%j == 0) aux++;
            }
            if (aux == 2) tem_primo = 1;
        }
    }
  
    if (n<5 || n > 40) 
      printf("ENTRADA INVALIDA\n");
    else 
      if (d<1 || d>31) 
        printf("ENTRADA INVALIDA\n");
      else{
        p4 = 1;
        achou = 0;
        i = 1;
        while (i<n && !achou){
            if (m[i-1]+m[i] == d) achou = 1;
            i++;
        }
        if (!achou)
            p4 = 0;
        printf("Promocao 1: %s\n", achou ? "SIM" : "NAO");

        if (qtd_impar > n/2) printf("Promocao 2: SIM\n");
        else{
            printf("Promocao 2: NAO\n");
            p4 = 0;
        }

        if (tem_primo) printf("Promocao 3: SIM\n");
        else{
            printf("Promocao 3: NAO\n");
            p4 = 0;
        }

        if (p4) printf("Promocao 4: SIM\n");
        else printf("Promocao 4: NAO\n");
    }
    return 0;
}
