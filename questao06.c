#include <stdio.h>
const int MAX = 1000;

int main()
{
    int n, e, i, j, achou;
    int v[MAX];
  
    scanf("%d%d", &n, &e);
  
    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    achou = 0;
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            if (v[i]+v[j] == e){
                achou = 1;
            }
        }
    }
  
    printf("%s\n", achou ? "SIM" : "NAO");
  
    return 0;
}
