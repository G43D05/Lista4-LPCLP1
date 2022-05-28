#include <stdio.h>
const int MAX = 10;

int main()
{
    int v[MAX], i, x, cont;
    
    for(i=0; i<MAX; i++)
        scanf("%d", &v[i]);
        
    scanf("%d", &x);
    
    for(i=0, cont=0; i<MAX; i++)
        if (v[i] == x)
            cont++;
            
    printf("%d\n", cont);
    
    return 0;
}
