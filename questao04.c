#include <stdio.h>
#define MAX 20

int main()
{
    int v[MAX];
    int i, maior, menor;
    double media;
  
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &v[i]);
        if (i == 0)
        {
            maior = v[i];
            menor = v[i];
        }
        else
        {
            if (v[i] > maior) maior = v[i];
            if (v[i] < menor) menor = v[i];
        }
    }
  
    media = (maior + menor) / 2.0;
  
    printf("media: %.2lf\n", media);
  
    for (i = 0; i < MAX; i++)
        if (v[i] > media)
            printf("%d\n", v[i]);
  
    return 0;
}
