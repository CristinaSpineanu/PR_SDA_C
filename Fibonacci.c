
/*
* Se da un numar natural N.Se cere sa se afiseze toate elementele
sirului lui Fibonacci mai mici sau egale cu N.
*/

#include<stdio.h>
#include<stdlib.h>

int f(int n)
{
	int i;
	long long int f0 = 0, f1 = 1, fn = 0;
	for (i = 1; i <= n; i++)
	{
		printf("f%d=%lli\n", i, f0);
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;

	}
	return 0;
}


int main()
{
	int n;
	printf("Dati numarul natural N=");
	scanf("%d", &n);
	printf("------------------------------------\n");
	printf("Sirul lui Fibonacci pentru N=%d este: \n", n);
	f(n);
	system("pause");
	return 0;
}