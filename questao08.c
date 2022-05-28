#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char esq[30] = {'A', 'C', 'E', 'G', 'I', 'K', 'M', 'O'};
    char dir[30] = {'B', 'D', 'F', 'H', 'J', 'L', 'N', 'P'};
    int jogo, m, n, novoJogo=8;
    
    for (jogo = 0; jogo < 14; jogo+=2)
    {
        scanf("%d%d", &m, &n);
        esq[novoJogo] = m>n ? esq[jogo]: dir[jogo];
        scanf("%d%d", &m, &n);
        dir[novoJogo] = m>n ? esq[jogo+1]: dir[jogo+1];
        novoJogo++;
    }
  
    scanf("%d%d", &m, &n);
  
    printf("%c\n", m>n ? esq[14] : dir[14]);
    
	return 0;
}
