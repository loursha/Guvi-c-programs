#include <stdio.h>

int main(void)
{
	int n, i;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("Hello");
		
		if(i<n)
			printf("\n");
	}
	return 0;
}
