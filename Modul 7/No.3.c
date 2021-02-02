#include <stdio.h>

void tukar (int *a, int *b, int temp)
{ 
	temp = a;
	a = b;
	b = temp;	 
}

void main (void)
{	int a, b, temp;

	printf ("a = ");
	scanf ("%d", &a);
	printf ("b = ");
	scanf ("%d", &b);
	printf ("\n\n");
	tukar (&a, &b, temp);
	printf ("a = %d\n", b);
	printf ("b = %d\n", a);
	system ("PAUSE");
}
