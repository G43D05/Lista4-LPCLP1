#include <stdio.h>
const int MAX = 1000;

int main()
{
    int n, v[MAX], i, j, iMenor, aux;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        iMenor = i;
        for (j = i + 1; j < n; j++)
        {
            if (v[j] < v[iMenor])
            {
                iMenor = j;
            }
        }
        if (iMenor != i)
        {
            aux = v[i];
            v[i] = v[iMenor];
            v[iMenor] = aux;
        }
    }
    printf("%d %d %d\n", v[0], v[n / 2], v[n - 1]);
    return 0;
}
