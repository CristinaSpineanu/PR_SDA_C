
/*
* Se da un numar natural N.Se cere sa se afiseze toate elementele
sirului lui Fibonacci mai mici sau egale cu N.
*/

#include<stdio.h>
#include<stdlib.h>

int f(int n)
{
	int i = 0;
	long long int f0 = 0, f1 = 1, fn = 0;
	do {
		printf("f%d=%lli\n", i, f0);
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		i++;
	} while (f0 <= n);
	return 0;
}


int main()
{
	int n, opt;
	while (1)
	{
		printf("1. Calculati Fibonacci.\n");
		printf("2. Exit.\n");
		printf("-----------------------------\n");
		printf("Dati optiunea: ");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			printf("Dati numarul natural N=");
			scanf("%d", &n);
			printf("------------------------------------\n");
			printf("Sirul lui Fibonacci pentru N=%d este: \n", n);
			f(n);
			printf("------------------------------------\n");
			break;
		case 2:exit(0);
			break;
		default:printf("Optiune gresita.\n");
			break;
		}
	}
	return 0;
}