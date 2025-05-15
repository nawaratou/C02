#include <stdio.h>

int main() {
	int n;

	printf("$ ./even_odd\n");
	scanf("%d", &n);
	if(n % 2 == 1) 
	{
		printf("%d le nombre est impair\n",n);
	}
	else
	{
		printf("%d le nombre est pair\n",n); 
	}
	return 0;
}

