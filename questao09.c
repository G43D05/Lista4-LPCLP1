#include <stdio.h>
#define MAX 100

int main()
{
	int v1[MAX], v2[MAX], v3[2*MAX], n, i;
  
	scanf("%d", &n);
  
	for(i=0; i<n; i++)
		scanf("%d", &v1[i]);
  
	for(i=0; i<n; i++)
		scanf("%d", &v2[i]);
  
	for(i=0; i<n; i++)
	{
		v3[2*i] = v1[i];
		v3[2*i+1] = v2[i];
	}
  
	for(i=0; i<2*n; i++)
		printf("%d\n", v3[i]);
	
	return 0;	
}
