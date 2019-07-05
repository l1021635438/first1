#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	double* ptd;
	int max;
	int number;
	int i = 0;

	puts("what's is the maximum number of type double entries?");
	scanf("%d", &max);
	ptd = (double*)malloc(max*sizeof(double));
	if (ptd == NULL)
	{
		puts("Memory allocation failed.Goodbye.");
		exit(EXIT_FAILURE);
	}
	puts("Enter the values(q to quit):");
	while (i < max && scanf("%lf", &ptd[i]) == 1)
		++i;
	printf("Here are you %d entries;\n", number = i);
	for ( i = 0; i < number; i++)
	{
		printf("%7.2f", ptd[i]);
		if (i%7==6)
			putchar('\n');
	}
	if (i%7!=0)
		putchar('\n');
	puts("Done.");
	free(ptd);

	return 0;
}








