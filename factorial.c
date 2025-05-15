#include<stdio.h>
int main()
		{int p,n,i;
		printf("$ ./factorial\n");
		scanf("%d",&n);
		p=1;
		for(i=1;i<=n;i++)
			{p=p*i;
			}
		printf("le factoriel de %d est: %d",n,p);
		return 0;
		}