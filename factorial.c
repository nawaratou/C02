#include <stdio.h>
int main() {
	int N;
	int i =1;
	int f =1;
	printf("$ ./factorial\n");
	scanf("%d", &N);
	for ( i = 1; i<=N;i++)
	{
		f*=i;
	}
	printf("le factoriel de %d est : %d\n" ,N ,f);
	return 0;
}